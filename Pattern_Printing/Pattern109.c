// Number Line


#include<stdio.h>
   void Display(int iNo){
   
     for(int iCnt=-iNo;iCnt<=iNo;iCnt++){
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