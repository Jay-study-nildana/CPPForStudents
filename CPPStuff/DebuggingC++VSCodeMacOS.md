# Debugging C++ VS Code Mac OS

This is a follow up document, after setting up VS Code for running C ++ Hello World. 

Ensure, you use 'clang++' everywhere.

# Step 1 - Get a Sample code

Here is a simple code with both output and input.

    //used for string related operations
    #include <string.h>
    //for input and output stream.
    #include <iostream>
    //note it is recommendd that we dont use
    //standard output and input
    using std::cin;
    using std::cout;
    //standard new line.
    using std::endl;
    //string
    using std::string;

    int main()
    {
    string name;
    cout << "Hello World!";
    cout << "\n";
    cout << "Enter your name or anything really";
    cin >> name;
    cout << "You have entered"
            << name
            << endl;
    return 0;
    }

# Step Extra - Compile with Clang ++ (Command Line. FYI)

clang++ main.cpp

# Step 2 - Building

1. Terminal > Run Build Task.
2. VS Code wil automatically do its thing and create a bunch of files

# Step 3 - First Debug Run

1. Run > Start Debugging. 
2. Select GDB/LLDB C ++
3. You may get a second option called Windows. That's for windows.
4. Let VS Code do its thing and create some debugging settings files.
5. It will ask you for some permissions and what not.
6. Now you get an error like this, when you try to enter input

    @"Hello World!\r\n"
    @"Enter your name or anything really"
    Jay
    Unable to perform this action because the process is running.

# Step 5 - Update settings.

So, you cannot enter input. 

look at this - https://github.com/microsoft/vscode-cpptools/issues/5079

and also this - https://code.visualstudio.com/docs/cpp/config-clang-mac#_terminal-wont-launch-for-input

1. Ensure that your launch.json, looks something like this.

    {
        // Use IntelliSense to learn about possible attributes.
        // Hover to view descriptions of existing attributes.
        // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
        "version": "0.2.0",
        "configurations": [
        {
            "name": "clang++ - Build and debug active file",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}/${fileBasenameNoExtension}",
            "args": [],
            "stopAtEntry": true,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": true,
            "MIMode": "lldb",
            "preLaunchTask": "clang++ build active file"
        }
        ]
    }

2. ensure, 

    "externalConsole": true,

By default, externalConsole is false. 

    "stopAtEntry": true,

3. The work around is to have VS Code launch the terminal once. You can do this by adding and running this tasks in your `tasks.json`:

    {
    "label": "Open Terminal",
    "type": "shell",
    "command": "osascript -e 'tell application \"Terminal\"\ndo script \"echo hello\"\nend tell'",
    "problemMatcher": []
    }

You can run this specific task using Command + Shift + p. Type Tasks and look for Tasks: Run Tasks then select Open Terminal.

Once you allow this permission, then the external console should appear when you debug.

4. Now, you should be able to enter input in your terminal, completing your hello world debugging.

5. On making code changes, you have to build and debug. Remember that C ++ is a very old language and it can only debug the output file.

# Additional Notes

1. You know, its just easier to use XCode for C ++. I find the entire process of making VS Code debug with C ++, a pain.
2. One reason, I dont like installing XCode is its huge file size. You could also try Eclipse IDE. https://www.eclipse.org/downloads

# Hire Me

I work as a full time freelance software developer and coding tutor. Hire me at [UpWork](https://www.upwork.com/fl/vijayasimhabr) or [Fiverr](https://www.fiverr.com/jay_codeguy). 

# important note 

This code is provided as is without any warranties. It's primarily meant for my own personal use, and to make it easy for me share code with my students. Feel free to use this code as it pleases you.

I can be reached through my website - [Jay's Developer Profile](https://jay-study-nildana.github.io/developerprofile)



