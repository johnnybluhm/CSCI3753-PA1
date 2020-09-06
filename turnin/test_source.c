#include <stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>

int main(){

int *add;
add = malloc(4);
syscall(334,2,4,add);



printf("%d\n",*add);
return 0;
}
