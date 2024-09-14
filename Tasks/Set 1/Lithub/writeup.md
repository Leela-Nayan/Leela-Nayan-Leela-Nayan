1. git stash - so that the new changes are saved in this branch
2. git checkout main - switches to main branch
3. git pull - updates the local repo w.r.t to the remote repo
4. git log - to see the history of commits of the repo
5. git show hash:branch_name.txt - showed the content of the file
6. git checkout 0PCF07O3WM - switched to 0PCF07O3WM branch
7. unzip -P 28508c1457083d4d5d96cea1eecb54f68c19321e protected.zip - unzip the protected zip file
8. sudo apt install p7zip-full - cuz unzipping the protected.zip revealed a 7z file and to uncompress that, I had to install this apparently
9. 7z x protected.7z - unzipped the .7z file
10. gzip -d misc.zip.xz.zst.bz2.gz - to uncompress the gzip file
11. bzip2 -d misc.zip.xz.zst.bz2- to uncompress the .bz2 file
12. zstd -d misc.zip.xz.zst - to uncompress the .zst file
13. xz -d misc.zip.xz - to uncompress the .xz file
14. unzip misc.zip - to unzip the .zip file
15. tar -xf misc.tar - to uncompress the .tar file
16. cat * | sort | uniq -d - prints all the contents in the dir, sorts it, and then prints the duplicate results of the sorted results
17. git checkout main - switched to main branch
18. nano EFVBNBQ - created a file named EFVBNBQ
19. git add EFVBNBQ - didn't work. error said it needed a -f arg if i really wanted to do that.
20. git add -f EFVBNBQ - staged the file
21. git commit -m "Created new file" - committed it
22. git revert hash - reverted the commit
23. nano EFVBNBQ - created a file again
24. git add -f EFVBNBQ - staged the file
25. git commit -m "Updated file" - committed it
26. git remote set-url origin https://github.com/Leela-Nayan/Lithub.git - updated the origin url
