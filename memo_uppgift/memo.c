#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#include "libmemo.h"

//functions
int message();


int main(int argc, char *argv[]){

   FILE *fp=NULL;
   // ID
   int id;
   id=0;
   char c;
   //time
   time_t tid=time(NULL);
   struct tm *lt=localtime(&tid);
   
   // Create a file
    if(strcmp(argv[1],"-i")==0){
      fp=fopen(argv[2], "w");
      fclose(fp);

    }
    // Add to file
    if(strcmp(argv[1],"-a")==0){
      fp=fopen("memo.csv", "a+");
      for(c = getc(fp); c!=EOF; c=getc(fp))
         if(c == '\n')
            id = id+1;
      
      fprintf(fp,"ID:%d, ",id); //id 
      fprintf(fp,"%d-%d-%d %d:%d:%02d, ",lt->tm_mday,lt->tm_mon+1,lt->tm_year+1900, lt->tm_hour, lt->tm_min, lt->tm_sec);   
      fprintf(fp,"%s\n",argv[2]);
      fclose(fp);
    }
    // Help
    if(strcmp(argv[1],"-h")==0){
      message();
      
    }

    return 0;
}


int message()
{
   char *str = "\n-h Show this help."
            "\n-i Init a new empty database. For example:"
                "\n\tmemo -i 'memo.csv'"
                "\n\tCreate a new empty database with the name 'memo.csv'"
            "\n-a Append at the end of the database the following message."
                "\n\tmemo -a 'This message will be included at the end of the database'"
            "\n-s Search and find specific entries in the database."
                "\n\tmemo -s '09-11-2022' will show all entries at a this given date."
                "\n\tmemo -s 'programming' will show all entries containing the word"
                "\n\t'programming'."
            "\n-d Delete an entry in the database."
                "\n\tmemo -d 123 will delete entry number 123.\n";
   printf("%s\n",str);
   return 0;
}