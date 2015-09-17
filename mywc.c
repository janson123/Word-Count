/*******************************
 * Author: Jared Anson
 * Last Modified by: Jared Anson
 * mywc.c
 */

#include <stdio.h>


// takes a file of text, and returns how many lines/words/characters there are in that file.
int main(){

  int c;
  int boolean = 0;
  int wordCount = 0;
  int characterCount = 0;
  int lineCount = 0;
  int firstChar = 0;

  while((c = getchar()) != EOF){

    // this tests if its the first char in a file. If so the word count and char count is increased.
    // along with the boolean that tests if it is the first char in the file is set to 1.
    // this will cause it to go straight to the else from now on.
    if (firstChar == 0){
      wordCount++;
      firstChar = 1;
      characterCount++;
    }else{
      if(c == ' ' | c == '\t' | c == '\r' | c == '\f' | c == '\v'){
	characterCount++;
	boolean = 1;
      }else if(c == '\n'){
	lineCount++;
	characterCount++;
	boolean = 1;
      }else{
	// if neither of the conditions above are satisfied the char count is increased since
	// that means it was just a regular character.
	characterCount++;
	// this checks if the boolean has been set to true. To get here means it had to encounter
	// some type of whitespace, and now is no longer encountering it. Which means the current
	// value is char. Going from whitespace to char indicates a word.
	if(boolean == 1){
	  wordCount++;
	  boolean = 0;
	}
      }
    }
  }
  printf("%d line(s)  %d word(s)  %d character(s)\n", lineCount, wordCount, characterCount);

  return(0);
}
