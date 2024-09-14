#include <stdio.h>
#include <math.h>

int main (){

float radius = 8;
for (int i =0 ; i<=2*radius;i = i+2){

for (int j=0;j<=2*radius ; j++){

float dist = sqrt((i-radius)*(i-radius)+(j-radius)*(j-radius));
if(radius - 0.5 < dist  &&  dist < radius + 0.5){

    printf("o");
}
else{
    printf(" ");
}
}
printf("\n");
}



    return 0;
}