

// charchter Printing


#include<stdio.h>
   void Display(int iNo){
    char ch ='A';
     for(int iCnt=1;iCnt<=iNo;iCnt++){
        printf("%c",ch);
         ch++;
     }

   }
  int main(){
    int Column;

    printf("Enter the Frequency of Sysmbol : \n");
    scanf("%d",&Column);

     Display(Column);

return 0;
  }