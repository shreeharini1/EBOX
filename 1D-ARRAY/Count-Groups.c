#include<stdio.h>
int main(){
    int count=0,n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
  for(int i=0;i<n;i++){
    for (int j=i+1;j<n;j++){                           // only check 2 combination sum is / by 3
      if ((a[i]+a[j])%3==0){
        count++;}
      }
  }
  for(int i=0;i<n;i++){                                       // check 3 combination sum is / by 3
    for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++){
        if((a[i]+a[j]+a[k])%3==0){
          count++;
        }
      }
    }
  }  
  printf("%d",count);
  printf("code is done!");
  return 0;
}
