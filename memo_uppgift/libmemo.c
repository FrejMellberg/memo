// Funktioner för memo.c

// TID OCH DATUM
int tid()
{
    time_t tid=time(NULL); 

    struct tm *lt=localtime(&tid);
    printf("%d-%d-%d %d:%d:%d\n",lt->tm_mday,lt->tm_mon+1,lt->tm_year+1900, lt->tm_hour, lt->tm_min, lt->tm_sec);
    return 0;
}