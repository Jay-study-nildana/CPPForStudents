# Command Line - VS Code Terminal Window Usage

Compiler to use G++. 

g++ practice.cpp -o practice

./practice
 
# Visual Studio Code Usage - Windows and Mac

Download and Setup 

https://code.visualstudio.com/docs/languages/cpp

Running. 

Note : Mac OS users, please check the next section along with the below steps.

* Open folder with cpp file. 
* Always use g++ related options. 
* Terminal > Run Build Task. 
* Run > Run Without or With Debugging. this creates a .vscode folder with build and debugging. close the json files that were automatically created before resuming debugging. 
* sometimes, you may get, buid run error something. thats because the .vscode folder and its json files are still in focus. just close that folder, and come back to the cpp file. 
* code and debug, add breakpoints. Repeat.
* if you get any code squiggly lines, especially after including new header files, compile once.

# Mac OS Specific Steps

These steps in addition to the steps described in "Visual Studio Code Usage"

* Instead of g++, use clang. 
* You may find a issue where you cannot get input to work during debugging. For the, the solution is available in the following link.

https://github.com/microsoft/vscode-cpptools/issues/5079#issuecomment-626090192

Here is the solution, from that link.

The work around is to have VS Code launch the terminal once. You can do this by adding and running this tasks in your `tasks.json`:

    {
    "label": "Open Terminal",
    "type": "shell",
    "command": "osascript -e 'tell application \"Terminal\"\ndo script \"echo hello\"\nend tell'",
    "problemMatcher": []
    }

You can run this specific task using Command + Shift + p. Type Tasks and look for Tasks: Run Tasks then select Open Terminal.

Once you allow this permission, then the external console should appear when you debug.

# Hire Me

I work as a full time freelance software developer and coding tutor. Hire me at [UpWork](https://www.upwork.com/fl/vijayasimhabr) or [Fiverr](https://www.fiverr.com/jay_codeguy). 

# important note 

This code is provided as is without any warranties. It's primarily meant for my own personal use, and to make it easy for me share code with my students. Feel free to use this code as it pleases you.

I can be reached through my website - [Jay's Developer Profile](https://jay-study-nildana.github.io/developerprofile)