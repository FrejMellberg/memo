#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "memo.h"

//message declaration
int message();

//entry declaration
void entry(int argc, char *argv[]);
FILE *fp=NULL;
int main(int argc, char *argv[]){


   // Create a file
    if(strcmp(argv[1],"-i")==0){
      fp=fopen(argv[2], "w");
      fclose(fp);

    }
    // Add to file
    if(strcmp(argv[1],"-a")==0){
      entry(argc, argv);
     
    }
    // Help
    if(strcmp(argv[1],"-h")==0){
      message();
      
    }

    return 0;
}