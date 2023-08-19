// Non-linaer Pattern

#include<stdio.h>
   void Display(int iNo,int Ro){
    char ch ='a';
    int i=0,j=0;
   for( i=1;i<=iNo;i++){
     for( j=1;j<=Ro;j++){
        printf("%c\t",ch);
     }
         printf("\n");
         ch++;
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