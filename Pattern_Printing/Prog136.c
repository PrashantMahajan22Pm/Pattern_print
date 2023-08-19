 #include<stdio.h>
    void Display(int iNo1,int iNo2){
       int i=0,j=0;
        

       for(i=1;i<=iNo1;i++){
        char ch='A';
        for(j=1;j<=iNo2;j++){
           
             printf("%c\t",ch); 
             ch++;        
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