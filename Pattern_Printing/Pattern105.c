// new initilisation 
#include<stdio.h>
   void Display(int iNo){
   char ch = '\0';
     for(int iCnt=1,ch='a';iCnt<=iNo;iCnt++,ch++){
        printf("%c\t%d\t",ch,iCnt);
     }

   }
  int main(){
    int Column;

    printf("Enter the Frequency of Sysmbol : \n");
    scanf("%d",&Column);

     Display(Column);

return 0;
  }