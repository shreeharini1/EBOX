#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[20];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count[1000]={0};
    for(int i=0;i<n;i++){
        count[a[i]]++;
    }
    int size =0 ,groupnos,total;
    for(int i=0;i<1000;i++){
        if(count[i]>0){
            size = i+1;
            groupnos= (count[i]+size-1)/size;
            total+=groupnos*size;
        }
    }
    printf("%d",total);
    return 0;
}
