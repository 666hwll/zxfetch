### zxfetch
A custom screenfetch program written in C, that aims to become lightweight and fast.

### Goals

- make it efficient but somewhat simple
- seamless integration into the most posix systems

### How to run on windows ?
# Option 1:
Use wsl or a hypervisor program
# Option 2:
- Install Mingw from https://www.mingw-w64.org/
- Remove Line 4, 43 to 46 from mincfetch.c and save the file
- open cmd in the current working directory
- compile it with: gcc -o zxfetch mincfetch
SINCE WINDOWS IS NOT FOSS MOST THINGS WILL NOT BE WORKING, BUT THE PROGRAM CAN BE USED AS FRAMEWORK
