#include <stdio.h>
#include <string.h>

void revstr(char lstr[]);
int main (){
 printf("enter any string \n");
 char lstr[50];
 scanf("%s",lstr);
 revstr(lstr);

    return 0;
}

void revstr(char lstr[]){

int n= strlen(lstr);
char k;
for (int i=0;i<n;i++){
k=lstr[n-i-1];
printf("%C",k);
}
    
}