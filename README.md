# 42-Fillit
An algorithm that takes tetrominos and fits them together to make the smallest square possible.

Subject : [English](https://github.com/ssfar/42-Subjects.pdf/blob/master/fillit.en.pdf) - [Français](https://github.com/ssfar/42-Subjects.pdf/blob/master/fillit.fr.pdf)

Grade 100/100

#### Objectives :
• Basic algorithm  
• Input/Output  
#### Skills :
• Algorithms & AI  
• Group & interpersonal  
• Unix  
• Rigor  

#### Developed for Mac OS X.  
(It might work on other operating systems, otherwise I may apply some modifications later on).

## How to use

#### Pre required : Make and GCC

First open a terminal, go to the project folder and build the project by typping : 
```
make
```

### Input

Execute the program with a valid tetromino file as first argument :
```
./fillit valid_file
```
Some valid example files are given into ``` valid_samples ``` folder.

A valid tetromino is made out of 4 jointed blocks represented by '#' characters inside a 4 by 4 square field of '.' characters.  
#### A few exemples of valid descriptions of Tetrominos

![vt](https://user-images.githubusercontent.com/45463065/86272939-b22adf80-bbcf-11ea-9b2a-a31a990aff8b.PNG)

A valid tetromino file contains 1 to 26 tetrominos separated by a newline (the file must be in unix file format without an ending newline).  
(For more informations read the subject).



### Output

The program gives the solution square into the terminal via the standard output, each different letter represents a tetrimino.
#### Here is an exemple of the program output 
![fillit_result](https://user-images.githubusercontent.com/45463065/86388559-49a63600-bc95-11ea-96f2-14e4888c0658.png)

If the input file is not valid, the program will simply output "error".
