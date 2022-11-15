#include <stdio.h>
#include <unistd.h> //for sleep
#include <time.h>

int main(int argc, char *argv[]){

    time_t now=time(NULL); //SEC SINCE

    struct tm *lt=localtime(&now);
    printf("%d-%d-%d %d:%d:%d\n",lt->tm_mday,lt->tm_mon+1,lt->tm_year+1900, lt->tm_hour, lt->tm_min, lt->tm_sec);
    return 0;
}
//Formattet vi ska ha är:
// dag-månad-år timme:min:sek

//FUNKAR!!