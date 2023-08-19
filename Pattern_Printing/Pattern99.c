
#include<stdio.h>
   void Display(int iNo){
     for(int iCnt=1;iCnt<=iNo;iCnt++){
        printf("%d\t",iCnt-1);
     }

   }
  int main(){
    int Column;

    printf("Enter the Frequency of Sysmbol : \n");
    scanf("%d",&Column);

     Display(Column);

return 0;
  }