#include <stdio.h>
#include <math.h>


void rev(int n);

int main (){

printf("enter any number you want to revesre \n ");
int k;
scanf("%d",&k);
rev(k);

    return 0;
}

void rev(int n){
if (n==0){
printf("0");
}
else {
    int count = (int)floor(log10(abs(n)));
for (int i =0;i<=count;i++){
 int f = n%10;
 printf("%d",f);
 n=n/10;
}
}

}