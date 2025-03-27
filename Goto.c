#include <stdio.h>
int main(){
    int i=1;
    loop_start: //label
    if(i > 5){
        return 0; // exit program 
    }
    printf("%d\n",i);
    i++;
    goto loop_start; // jump back to loop_start
    return 0;
}

