#include<stdio.h>
int main(){
    int n,i;
    // cumulative = 2+3=5 then it print 2,5 after that it add to other num ex:10 output is 2,5,15
    printf("\nEnter the number of elements in an array ");
    scanf("%d",&n);
    int a[n];
    int sum[n];
    printf("\nEnter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //printf("%d",a[0]);
    sum[0]=a[0];
    for(i=1;i<n;i++){
        sum[i]= a[i]+sum[i-1];
    }
      printf("Cumulative sum array\n");
    for( i=0;i<n;i++){
        printf("%d ",sum[i]);
    }
    return 0;

}
