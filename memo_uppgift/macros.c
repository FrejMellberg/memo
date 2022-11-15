// poängen är att testa macros
#include <stdio.h>
#include <stdlib.h>
#include <math.h> // för pi bara
//#include <time.h> kan användas istället för __TIME__


int main(){
    printf("%s\n",__TIME__);
    printf("%s\n",__DATE__);
    printf("%s\n",__FILE__);
    printf("%d\n",__STDC__);
    printf("%d\n",__LINE__);

    printf("%f\n",M_PI);

    return 0;
}