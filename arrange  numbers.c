#include <stdio.h>

void arranger(int number[],int n);
int main(){

int number[100];
printf(" How many numbers you want to enter ? \n");
int n;
scanf("%d",&n);
printf("  Well Done , Now enter numbers .\n");
for (int i =0; i<n;i++){

scanf("%d",&number[i]);

}

printf(" \t \t \t \t LOADING..\n \n \n \n");
sleep(3);


for(int i=1;i<=n;i++){

int b =0;

for (int i =0;i<n;i++){

if(number[i]>b){
b=number[i];

}

}

for(int i=0;i<n;i++){

if (number[i]==b){
 
 number[i]=0;
 
    
}

}

printf("%d  ",b);



}







    return 0;
}