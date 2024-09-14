#include <stdio.h>
#include <stdlib.h>

int enc(int en);
void dec(int dec , int en);
// main function define here .

int main (){
    int input ;
    printf("select what you want . \n 1. encrypt interger \n 2. verify dec and enc \n");
    scanf("%d",&input);
    if (input == 1){
        printf("enter int you want to encrypt \n");
        int k;
        scanf("%d",&k);   
        printf("your encrypted value is %d ",enc(k));
    }
    else if(input == 2) {
     printf("enter enc value \n");
     int l;
     scanf("%d",&l);
     printf("enter dec value \n");
     int m;
     scanf("%d",&m);
     dec(l,m);
    } 
    else {
      printf("your choice is not correct \n");
    }   
sleep(3);
   return 0;
}
// dec and enc verify function define .

void dec(int dec, int en){
 int p =enc(en);
 if (dec == p){
 printf("your decrypt value is correct \n");
 }
 else{
  printf(" your decrypt value dont match with correct enc value \n");
 }
}

// define function enc .

int enc(int en){
int last = en%10;
int seclast=en%100;
int pre_en =en;
en=en*(last/2 +seclast);
en = en + pre_en;
return en;
}