#include <stdlib.h>
#include <stdio.h>

int main(){

    printf("Sure thing here is your memory:\n");
    _sleep(1000);
    int a = 0;
    int *i = &a;

    while(1) printf("%d",*(i++));
        
}
