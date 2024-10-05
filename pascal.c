#include <stdio.h>
int factorial(int n);
void main (){
int k;
printf("enter any   number : ");
scanf("%d",&k);

for(int i=0;i<k;i++){
    for(int u=k;u>i;u--){
      printf(" ");
    }
    for(int j=0;j<=i;j++){
     printf(" %d",(factorial(
        i))/(factorial(j)*factorial(i-j)));

    }
  printf("\n");
}

}

int factorial(int n){
int k=1;
if(n==0){
    return 1;
}
else{
    
for(int i=1;i<=n;i++){
    k=i*k;
}
}
  return k;

}
