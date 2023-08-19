// Non-linaer Pattern
//OUTPUT


#include<stdio.h>
   void Display(int iNo1,int iNo2){
     if(iNo1 != iNo2){
        printf("Invalid Input\n");
        return ;
     }
     for(int i =1;i<=iNo1;i++){
        for(int j = 1;j<=iNo2;j++){
          if(i == j){
            printf("#\t");
          }else 
          {
            printf("$\t");
          }
        }
       
        printf("\n");
     }
   }
  int main(){
    int Column=0,Rows=0;

    printf("Enter the column of Sysmbol : \n");
    scanf("%d",&Rows);

     printf("Enter the Rows of Sysmbol : \n");
    scanf("%d",&Column);

     Display(Rows,Column);

return 0;
  }