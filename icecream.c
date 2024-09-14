// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int pric;
   int ice;
   char icecream[5][20]={"chocobar","vanilla","mangofav","sweetsmile","creamy"};
   
   int price[5]={50,100,60,40,60};
   
   printf("select \n 1 chocobar \n 2 vanilla \n 3 mangofav \n 4 sweetsmile \n 5 creamy \n ");
   do{
       
       scanf("%d",&ice);
       
       
   }while(ice<0 || ice>5);
   
   if(ice==1){
       
       
       pric=price[0];
       printf("price  of %s is %d ",icecream[0],pric);
       
       
   } else if (ice==2){
       
          
       pric=price[1];
       printf("price  of %s is %d ",icecream[1],pric);
       
       
   }else if(ice==3){
       
        pric=price[2];
       printf("price  of %s is %d ",icecream[2],pric);
       
   }
   else if(ice==4){
       
        pric=price[3];
       printf("price  of %s is %d ",icecream[3],pric);
       
   }else{
       
       pric=price[4];
       printf("price  of %s is %d ",icecream[4],pric);
       
   }
   
   
    return 0;
}
