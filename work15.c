#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>


char ** parse_args( char * line){
  
  // makes an array for the arguments
  char ** args = malloc(5 * sizeof(char*));
  // command
  char * sep;

  int i = 0;
  // separates argument by the space and puts each peace into an array indice
  while(line){
    sep = strsep(&line, " ");
    args[i] = sep;
    i++;
  }
  // array with each 'part' of the  command
  return args;
}

int main(){
	// command line invocation
  char command[100] = "ls -a -l";
  // parses the arguments in "ls -a -l"
  char ** args = parse_args(command);
  // runs command
  execvp(args[0], args);

  return 0;
}