#include <stdio.h>

int main (){
printf("enter value of a , b and c of first linear equation .\n");
float a,b,c;
scanf("%f %f %f", &a,&b,&c);
printf("enter value of a , b and c of second linear equation .\n");
float A,B,C;
scanf("%f %f %f", &A,&B,&C);
float x,y;

if(a/A==b/B && b/B == c/C){
 printf("the equation has no unique solution\n ");
 
 

}
else if(a/A == b/B){
    printf("equations have no solution \n ");

}

else{

y=(a*C-A*c)/(a*B-A*b);
x=(c-b*y)/a;
printf(" x : %.2f \ny : %.2f \n \n ",x,y);


}


    return 0;

}