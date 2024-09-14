#include <stdio.h>

int main (){
int cmarks = 4;
int wmarks = -1;
int natt =0;
int totalq = 75;
int p;
int k;
int l[376];

// storing number between -75 to 300  
for (int a = -75 ; a<=300 ;a++){
    l[75+a]=a;
}

//  getting all values of number which can be possible 

for (int i =1 ;i <=75 ;i++){
for (int j =1;j<=i;j++){
p= j*cmarks + (i-j)*wmarks;
k=i*wmarks;
for (int w = 0; w<=376 ; w++){  
if(l[w]==p){
    l[w]=0;
}
if (l[w] == k){
   l[w]=0; 
}
}
}
}

// for print any number that not return by question combination 

for(int h =0 ; h<=376 ;h++){
    if (l[h]!=0){
        printf("  %d",l[h]);
    }
}

    return 0;
}