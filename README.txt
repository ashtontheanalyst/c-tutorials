C is the mother of all languages, sits right above machine and assembly
You need an IDE (Vim, VSCode, etc.) and a GCC Compiler

C Environment Setup:
   - Have some sort of IDE like Vim, VS Code, etc.
   - Within VS Code, download these extensions:
      - C/C++
      - Code Runner 
   - To download/check gcc compiler and gdb debugger on linux, run:
      - sudo apt install gcc gdb
      - gcc -v
      - gdb -v

Configure the Build Task:
   - Click the 'Terminal' tab in the top of VS Code
   - 'Confiure Tasks...'
   - 'Others'
   - Replace the content with this: (it's a json file named tasks.json)

{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "build C program",
      "type": "shell",
      "command": "gcc",
      "args": [
        "-g",
        "${file}",
        "-o",
        "${fileDirname}/${fileBasenameNoExtension}"
      ],
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "problemMatcher": ["$gcc"],
      "detail": "Compiles a C file using gcc"
    }
  ]
}

Running some code:
   - Go to the /code/c/c-tutorials directory
   - Make a new directory for the code you wanna make like 'helloRupert'
   - Make a file called 'helloRupert.c'
   - Put your code in that file
   - In the terminal run:
   gcc helloRupert.c -o helloRupert
   - This will make an executable, compiled file, to run it do this:
   - ./helloRupert
   - Output diplayed in terminal
   