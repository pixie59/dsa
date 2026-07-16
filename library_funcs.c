#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    // int *a=(int *)malloc(n*sizeof(int));
    int *a=(int *)calloc(n,sizeof(int)); 
    for(int i=0;i<n;i++){
        a[i]=i+1;
        printf("%d ",a[i]);
    }
}