# Navigate to your repository
Set-Location "C:\Users\ASUS\Documents\striver a2z"

# Add all changes
git add .

# Commit with today's date
$commitMessage = "Daily commit: $(Get-Date -Format 'yyyy-MM-dd')"
git commit -m $commitMessage

# Push to GitHub
git push origin main
