# git commands
## create and delete directories
`mkdir "directory name"` used to create a new directory; to use it you need to type this annd the directory name ex: mkdir <newfolder>


`rmdir "directory name"` used to remove a direcroty, you need to type this folowed by the directory name. example rmdir <newfolder>

`git cp` a convenient only subcommand for git that does cp(1) and git-add(1) example: git cp [option] <project> <newfolder>

`git-touch` provides a convenient way to create one or more empty files and get them staged. If a specified file already exists, it just adds the path to the index using `git add -N file`.

`git-untouch` undoes what git-touch(1) has done. example; git untouch <project>

`git mv` Move or rename a file, a directory, or a symlink. example: git mv -k <project> <newfolder>

## navegation
`cd <directory>` to move to the direction typed to work on it.

`pwd` to check the actual location of the repo: example: $ pwd
/c/Users/LENOVO/Desktop/proyecto
## compare
`cmp` used to compare two files to know if they are identical or not

`git diff` Show changes between commits, commit and working tree, etc. example: git diff [options] -- <project>

## Find Files
`find [route] "name/extension"` write the location of the file you want to find

`ls` check all repositories example: $ ls
 branch/  'chapter 4'/  'chapter 5'/   git/   git_commands.md

`git grep` Print lines matching a pattern. example:-grep "hipopotomostrosesquipedaliofobia" yourtext.txt

## create and edit files
`nano` is the easiest way to create and edit files directly from git. example: nano "git_commands.md"

`cat` output the whole file in one go example: cat "git_commands"
## get the state of the computer
`history` to check the log of every command used in this project.

`git whoami`  is an additional Git command that tells you what author and
committer information would (probably) be used for a commit
## config
`git config --global user.name "your name"` is used to add your username, needed to commit.

`git config --global user.email "your email"` used to add your email, needed to commit.

`git config --global color.iu auto` to enable some colorization of git output

`git config` to check the actual configuration.


## start
`git init "project name"` start a new repository on these directory

`git clone "project url"` used to download a project from a remote repository (github for example)

`git fetch` to download objects and refs from another repository

`git pull` to fetch from and integrate with another repository or a local branch

`git init` to restart the current directory example: $ git init
Reinitialized existing Git repository in C:/Users/LENOVO/Desktop/proyecto/.git/

`git stash` to put current changes in your work directory into stash for use later

`git stash pop` to apply stored stash content into working directory and clear stash

`git stash drop` to delete an specific stash from all your previous stashes

`git git add "name"` to add a file to be used by git

`git commit` to save a snapshot, a state of your files

`git log` to view every commit that is added to your project. example: $ git log
    commit fd0259e82063de2569a4ddcae18261c5d754c81f (HEAD -> main, origin/main)
    Author: alexis <2009020@upy.edu.mx>
    Date:   Thu Apr 22 19:53:16 2021 -0500

    final details


`git log ref..` to lists commits that are not merged into ref

`git reflog` to list operations for example, checkouts or commits made on local repository

`git commit -m "text"` to add the changes in your files without changing the screen.
## push to a remote repository
`git push -u "direction"` used to commit to a remote repository

`git status` to see the status of the files, you can use this to verify if you added the changes you just have done

`git remote -v` to see the different remote repositories.

## branches

`git chechout "name"` switch branch to the branch of your election

`git checkout -b "name"`  switches the working directory to the specified directory and `-b` creates the new branch

`git merge "name"` to merge two branches, from the "name" to the current branch

`git branch -a` to show a list of all the local files on the folder

`git branch -r` to show a list of all the remote branches.

`git branch -d "name"` to remove the "merged" branch that now is useless.

`git config` see the actual configutation of git

`git restore` to restore working tree files

`git rebase` to reapply commits on top of another base tip

`clear` to clear the shell window

`git add .` to add all files in the folder, instead of writing one by one.

`git flow init -d` to initialize a new repo with the basic configuration

`git flow feature` to create a feature

`git flow hotfix [start/finish] "release"` to start or finish a new hotfix branch
for hotfix branches, the "base" need to be a commit in "develop"

`git flow support [start]`to list a suport branch.

`history` to see all the used commands

`git pull` to incorporate changes into other repository.
## gitflow
`git flow init` to initialize a new repo with basic branch structure.

To list/start/finish feature branches, use:

`git flow feature`

`git flow feature finish name`

To list/start/finish release branches, use:

`git flow release`

`git flow release start release <base>`

`git flow release finish release`

To list/start/finish hotfix branches, use:

`git flow hotfix`

`git flow hotfix start release <base>`

`git flow hotfix finish release`

To list/start support branches, use:

`git flow support`

`git flow support start release <base>`
