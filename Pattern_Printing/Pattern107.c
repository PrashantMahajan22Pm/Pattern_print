// Backward  Number Start from minus iBNdex

#include<stdio.h>
   void Display(int iNo){
   
     for(int iCnt=-iNo;iCnt<0;iCnt++){
        printf("%d\t",iCnt);
     }

   }
  int main(){
    int Column;

    printf("Enter the Frequency of Sysmbol : \n");
    scanf("%d",&Column);

     Display(Column);

return 0;
  }