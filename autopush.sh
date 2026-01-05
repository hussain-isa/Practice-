#!/bin/bash

while true
do
  git add .
  
  if git diff --cached --quiet; then
    echo "No changes to commit"
  else
    git commit -m "Check out LABS/toturials/votingsystem"
    git push origin main
    echo "Changes pushed to GitHub"
  fi

  sleep 60
done
