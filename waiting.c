#include <stdio.h>
#include <unistd.h>

int main(void){

printf("current process:");
printf("%d\n",getpid());

while(1);
return 0;
}
