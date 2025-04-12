Following the tut from:
https://www.youtube.com/watch?v=87SH2Cn0s9A

C is the mother of all languages, sits right above machine and assembly
You need an IDE (Vim, VSCode, etc.) and a GCC Compiler


C Environment Setup:
   - Have some sort of IDE like Vim, VS Code, etc.
   - Within VS Code, download this extensions if you want but not critical:
      - C/C++
   - To download/check gcc compiler and gdb debugger on linux, run:
      - sudo apt install gcc gdb
      - gcc -v
      - gdb -v


Running some code in the terminal:
   - Go to the /code/c/c-tutorials directory
   - Make a new directory for the code you wanna make like 'helloRupert'
   - Make a file called 'helloRupert.c'
   - Put your code in that file
   - In the terminal run:
   gcc helloRupert.c
   - This will make an executable, compiled file, to run it do this:
   - ./a.out
   - Output diplayed in terminal


Running all those commands takes a lot of time so instead make a bash function:
   - vim ~/.bashrc
   - Scroll to the very bottom and click 'i' to start typing
   - Enter the function you want, in this case it's:
# This is for code development in c
mc() {
  if [ -z "$1" ]; then
    echo "Usage: mc <name>"
    return 1
  fi
  cd .. && mkdir "$1" && cd "$1" && touch "$1.c"
}
   - Click 'esc' key
   - Type :wq to save and exit 
   - In your terminal, source the file by doing:
   source ~/.bashrc