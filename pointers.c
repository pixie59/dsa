#include <stdio.h>
int main(){
    int a=10;
    int *p;
    p=&a;
    printf("%d",p);
    printf("\n%d",*p);
    printf("\n%d",&a);
}