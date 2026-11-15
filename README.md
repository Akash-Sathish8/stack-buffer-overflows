# Stack Buffer Overflows in C

**Akash Sathish**  
COMP 211, Checkoff 3

## Topic
The project I did explores stack buffer overflows, how they happen, why they are dangerous, and what compilers can do to help prevent them. 

A stack buffer overflow happens when a program writes more data into a local array than the array itself has the ability to hold, and also because C doesn't automatically check the boundaries for that array, the extra data can overwrite the nearby memory and change the variables which can crash the program and create security issues

## What I explored

I expxlored how stack buffer overflows work and how they relate to concepts that we have learned in class that include pointers, structs, and also memory addresses. Focusing mainly on how writing past the array can affect the nearby variables along with how memory is organized on the stack, and also how compiler protections can detect certain overflows. To help me understand these topics better, I created two C experiments and tested them on my Mac. 

## Key discoveries

1. Buffer overflows can overwrite the memory nearby
     One of the main things I learned was that writing past the end of an array can end up overwriting the variables are stored nearby. In the first experiment that I did myself, I used a struct that had a character buffer and an integer called secret, I used this to explore what copying too many characters into the buffer can overwrite the integer. 
2. The memory layout of the stack matters
     I also learned that local variables and other important information can be stored in the  stack frame of the function. Based on stuff that depend on the program's memory layout, an overflow can change the data arround it, and also change the return address of the function. The second experiment I did helped me understand this by letting me take a deeper look into the memory addresses and also the position of other pieces of data. 
3. Protections for compilers can detext overflows
     The most surprising thing i learned was that my program didn't always act the way I wanted it to, when I compiled my first experiment using Clang on my Mac, the compiler gave me a warning about overflow, but when I ran the program it stopped with a trace trap. This shows that the compiler and the runtime protections can sometimes see unsafe operations, but not every overflow will be caught. 

## Running the examples

The two C experiments I did are in the examples folder on this github. 

### 01_struct_overflow.c
This was the program that explores how overflowing a character buffer inside a struct affects the nearby data

clang -O0 -o demo examples/01_struct_overflow.c
./demo

### 02_stack_layout.c
this program explores stack memory addresses and how data is organized in the memory.
clang -O0 -o layout examples/02_stack_layout.c
./layout
## Repository layout

examples/ — C programs i used

screenshots/ — Screenshots that show the experiments results

presentation/ — Slides for presentation

references.md — Resources used while researching the topic

README.md — Project overview 