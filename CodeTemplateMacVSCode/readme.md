# Compiling Code - with external .h and .cpp files

For example, with file names like this.

G++ (Windows)

    g++ -c HelloWorld.cpp -o HelloWorld.exe
    g++ -c main.cpp -o main.exe
    g++  HelloWorld.exe main.exe -o a.exe
    ./a.exe  

CLANG++ (Mac OS)    

    clang++ -c HelloWorld.cpp -o HelloWorld.o
    clang++ -c main.cpp -o main.o
    clang++  HelloWorld.o main.o -o a.out
    ./a.out

# Compiling Code - single main.cpp file

Use this when you all your code in a single main.cpp file.

    g++ -c main.cpp -o main.exe
    g++ main.exe -o a.exe
    ./a.exe

    clang++ -c main.cpp -o main.o
    clang++  main.o -o a.out
    ./a.out
        
# References

Look at file textbookreferences.md

# Other Details

File Management Tips. 

1. The easiest way to do this is to copy paste an existing .h file, and create new file.
2. Use Find and Replace to replace specific words like class name.
3. Once the .h file is ready, copy paste it, and change the new file to .cpp. 
4. Start writing down the full definitions in the cpp.
5. repeat for all files.

# Hire Me

I work as a full time freelance software developer and coding tutor. Hire me at [UpWork](https://www.upwork.com/fl/vijayasimhabr) or [Fiverr](https://www.fiverr.com/jay_codeguy). 

# important note 

This code is provided as is without any warranties. It's primarily meant for my own personal use, and to make it easy for me share code with my students. Feel free to use this code as it pleases you.

I can be reached through my website - [Jay's Developer Profile](https://jay-study-nildana.github.io/developerprofile)