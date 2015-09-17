# Word-Count


This was a fun warmup/teaser for one of my classes. We had to create our own version of the unix tool wc aka word count.


To run this program it needs to first be compiled.

Ex) gcc mywc.c -o mywc

It then can be run by feeding it a text file like so: ./mywc < hello.txt.


The program will then print out to the console how many lines, words, and characters the file contained.


In the case of the provided hello.txt: 1 line(s)  10 word(s)  44 character(s)


It gets 44 characters by counting the all of the letters in the statement along with spaces, punctuation marks, tabs, newlines, etc in the file. To get an accurate line count make sure you press enter after the last character on the last line of the document. If you don't go to the next line, there will be no newline character and the line count would be one less than it should be. So for example you would want to press enter after this period ->.