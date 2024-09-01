import requests
from github import Github
import os

# Retrieve secrets from environment variables
CODEFORCES_HANDLE = os.getenv('muaazbutt')
GITHUB_TOKEN = os.getenv('CODEFORCE_TOKEN')  # Updated to match the secret name
REPO_NAME = os.getenv('GITHUB_REPOSITORY')

# Fetch Codeforces submissions
response = requests.get(f"https://codeforces.com/api/user.submissions?handle={CODEFORCES_HANDLE}")
submissions = response.json()

# Initialize GitHub client
g = Github(GITHUB_TOKEN)
repo = g.get_repo(REPO_NAME)

# Upload solutions to GitHub
for submission in submissions['result']:
    problem_id = submission['problem']['contestId']
    problem_index = submission['problem']['index']
    file_name = f"{problem_id}_{problem_index}.cpp"
    code = submission['source']

    try:
        file_content = repo.get_contents(file_name)
        repo.update_file(file_content.path, "Update solution", code, file_content.sha)
    except:
        repo.create_file(file_name, "Add new solution", code)
