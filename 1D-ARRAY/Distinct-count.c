#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    int n;
    //printf("Enter the number of plants: \n" );
    scanf("%d",&n);
    if(n<=0){
        printf("0\n");
        return 0;
    }
    int *croptype = (int *)malloc(26* sizeof(int));
    if(croptype == NULL){
        return 1;
    }
    for(int i=0;i<26;i++){
        *(croptype + i)=0;
    }
    //char plants[n];
    int distinctCount = 0;
    
    for(int i=0;i<n;i++){
        char plant;
        scanf(" %c",&plant);
        if(!isalpha(plant)){
            continue;
        }
        plant = tolower(plant);
      if(*(croptype + (plant -'a'))== 0){
          *(croptype + (plant - 'a'))=1;
          distinctCount++;
      }
    }
      printf("%d\n",distinctCount);
      free(croptype);
    //printf("Total number of distinct plant type : %d\n",distinctCount);
    return 0;
}
