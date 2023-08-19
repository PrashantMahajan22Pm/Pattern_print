
#include<stdio.h>
   void Display(int iNo){
     for(int iCnt=iNo;iCnt>=1;iCnt--){
        printf("%d\t*\t",iCnt);
     }

   }
  int main(){
    int Column;

    printf("Enter the Frequency of Sysmbol : \n");
    scanf("%d",&Column);

     Display(Column);

return 0;
  }