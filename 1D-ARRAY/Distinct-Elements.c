#include<stdio.h>
int main(){
    int n,a[15], i;
    int count;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   // int check=a[0];
    for(i=0;i<n;i++){
       if(a[i]!=a[i-1]){
           count++ ;  //this question count will increase only when  it is not equal to next number
       }
    }
    printf("%d",count);
    return 0;
    }
