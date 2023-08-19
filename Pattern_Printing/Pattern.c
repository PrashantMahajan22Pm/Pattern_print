//  Pattern Printing 94
#include<stdio.h>
   void Display(int iNo){
     for(int iCnt=1;iCnt<=iNo;iCnt){
        printf("#\t");
     }

   }
  int main(){
    int Column;

    printf("Enter the Frequency of Sysmbol : \n");
    scanf("%d",&Column);

     Display(Column);

return 0;
  }