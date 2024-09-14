#include <stdio.h>
#include <stdlib.h>



int main(){

int number[100];
printf("  How many numbers you want to enter . \n");
int n;
scanf("%d",&n);
printf(" ok , Now enter numbers . \n");
for(int i=0;i<n;i++){

 scanf("%d",&number[i]);

}

printf("           loading...  \n \n \n ");
sleep(3);

int big =0;
for(int i =0;i<n;i++){

 if(number[i] > big){

 big = number[i];


 }

}

printf("Biggest among them in is : %d \n ",big);

    return 0;
}