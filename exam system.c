#include <stdio.h>
#include <string.h>
#include <stdbool.h>



char que[5][75] ={"what is the name of our prime minister ? \n","what is the name of india 's capital ? \n"};
char ans[5][20] = {"modi","delhi"};
char userans[5][20];
bool queverify(char ans[][20],char userans[][20] , int k);

int main (){

   int o=0;
   int l;
   printf(" how many question you want to answer ?\n");
   scanf("%d",&l);
   for(int m=0;m<=l-1;m++){
   printf(" Q%d . %s",m+1,que[m]);
   scanf("%s",userans[m]);

   }

 for(int s=0 ; s<=l-1;s++){
 if(queverify(ans,userans,s)==true){
    o++;
 }

 }
 printf("you got %d out of %d (4 marks per correct answer ).\n",o*4,l*4);
    return 0;
}

bool queverify(char ans[][20],char userans[][20], int k){

if(strcmp(ans[k],userans[k])==0){

    return true;
}

return false;

}