# git commands
## command line
`mkdir` "directory name" used to create a new directory; to use it you need to type this annd the directory name

`rmdir` "directory name" used to remove a direcroty, you need to type this folowed by the directory name.
## navegation
`cd` and the route we want to move to between directories
## compare 
`cmp` used to compare two files to know if they are identical or not
## Find Files
`find [route] "name/extension"` write the location of the file you want to find

## create and edit files
`nano` is the easiest way to create and edit files directly from git.
## get the state of the computer
`lscpu` 
## config 
`git config --global user.name "your name"` is used to add your username, needed to commit..

`git config --global user.email "your email"` used to add your email, needed to commit.
## start 
`git init "project name"` start a new repository 

`git clone "project url"` used to download a project from a remote repository (github for example)
# basic workflow

`git init` to restart the current directory

`git git add "name"` to add a file to be used by git

`git commit` to save a snapshot, a state of your files

`git log` to view every commit that is added to your project

`git commit -m "text"` to add the changes in your files without changing the sc>
# push to a remote repository 
`git push -u "direction"`used to commit to a remote repository

# gitflow
`git status` to see the status of the files, you can use this to verify if you added the changes you just have done

#branches

`git chechout "name"` switch branch to the brach of your election

`git checkout -b "name"`switches the working directory to the specified directory and `-b`creates the new branch

`git merge "name"`to merge two branches, from the "name" to the current branch

`git branch -a`to show a list of all the local files on the folder

`git branch -d "name"` to remove the "merged" branch that now is useless.

`git config` see the actual configutation of git

# gitflow

`git add .` to add all files in the folder, instead of weiting one by one.
 

