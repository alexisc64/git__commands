# git commands
## command line
`mkdir` "directory name" used to create a new directory; to use it you need to type this annd the directory name ex: mkdir git_branch


`rmdir` "directory name" used to remove a direcroty, you need to type this folowed by the directory name. 
## navegation
`cd` and the route we want to move to between directories
example: "md desktop" to go direct to desktop
## compare
`cmp` used to compare two files to know if they are identical or not
## Find Files
`find [route] "name/extension"` write the location of the file you want to find

## create and edit files
`nano` is the easiest way to create and edit files directly from git. for example, i use nano to edit this file with "nano git_commands"
## get the state of the computer
`lscpu`
## config
`git config --global user.name "your name"` is used to add your username, needed to commit..

`git config --global user.email "your email"` used to add your email, needed to commit.

`git config --global color.iu auto`to enable some colorization of git output
## start
`git init "project name"` start a new repository on these directory

`git clone "project url"` used to download a project from a remote repository (github for example)

`git fetch`to download ojects and refs from another repository

`git pull`to fetch from abd integrate with another repository or a local branch

`git init` to restart the current directory

`git stash`to put current changes in your work directory into stash for use later

`git stash pop` to apply stored stash content into working directory and clear stash

`git stash drop`to delete an specific stash from all your previous stashes

`git git add "name"` to add a file to be used by git

`git commit` to save a snapshot, a state of your files

`git log` to view every commit that is added to your project

`git log ref..`to lists commits that are not merged into ref

`git reflog`to list operations for example, checkouts or commits made on local repository

`git commit -m "text"` to add the changes in your files without changing the sc>
## push to a remote repository
`git push -u "direction"`used to commit to a remote repository

`git status` to see the status of the files, you can use this to verify if you added the changes you just have done

`git remote -v` to see every remote repository

## branches

`git chechout "name"` switch branch to the brach of your election

`git checkout -b "name"`switches the working directory to the specified directory and `-b`creates the new branch

`git merge "name"`to merge two branches, from the "name" to the current branch

`git branch -a`to show a list of all the local files on the folder

`git branch -d "name"` to remove the "merged" branch that now is useless.

`git config` see the actual configutation of git

`git restore`to restoree working tree files

`git rebase`to reapply commits on top of another base tip
## gitflow

`git add .` to add all files in the folder, instead of weiting one by one.

`git flow init -d` to initialize a new repo with the basic configuration

`git flow feature` to create a feature

`git flow hotfix [start/finish] "release"`to start or finish a new hotfix branch
fot hotfix branches, the "base" need to be a commit in "develop"

`git flow support [start]`to list a suport branch.

`history` to see all the used commands

`git pull` to incorporate changes into other repository.

