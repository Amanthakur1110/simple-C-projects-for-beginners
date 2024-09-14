// create a a atm machine

#include <stdio.h>
#include <stdbool.h>
// data structure made by amanthakur
struct card{
    long long int cardn;
     int pin;
     int balance;
     
};

// funtion made by amanthakur

void userview();
void checkbal( struct card user[]);
bool validater(struct card user[]);
void with(struct card user[]);
void depo(struct card user[]);
void userfind(struct card user[],int cardnum ,int vpin);


// global variable 

int inpt;
int userid;

// main funtion made by amanthakur 

int main(){
     printf("   Welcome to Axis Bank ATM  created by 😍😍 amanthakur 😍😍 \n \n");
     struct card user[10]; // declare data structure array
     
     // user data
     user[0].cardn=769382870;
     user[0].pin=7693;
     user[0].balance=1000;
     
     user[1].cardn=773298397;
     user[1].pin=7732;
     user[1].balance=5000;
     
     // user data
     
     
     
     userview();
     if(inpt==1){
         checkbal(user);
         return 0;
     }
     
    else if(inpt==2){
        with(user);
        return 0;
        
    }
    
    else if(inpt==3){
        
        depo(user);
        return 0;
    }
    
    else{
        printf("you have selected a wrong choice \n");
        
    }
     
     
     
    
    
    return 0;
}

// deposit funtion made by amanthakur

void depo(struct card user[]){
    
    if(validater(user)==true){
        int deposit;
        printf("enter deposit amount \n");
        scanf("%d",&deposit);
        user[userid].balance=user[userid].balance+deposit;
        printf("your deposit of amount %d successfull \n",deposit);
        printf("your current balance is %d \n",user[userid].balance);
        
        printf("\n \n \n        thanks you for use Axis ATM 😍😍 \n");
        
        
    }
    else{
        
        printf("you are not validated . \n"); 
    }
    
    
}



// withdrawl funtion made by amanthakur 

void with(struct card user[]){
    
    if(validater(user)==true){
        if(user[userid].balance <= 0){
            printf(" your balance is not enough \n");
            printf("\n \n \n      thanks you for use Axis ATM 😍😍 \n");
            
        }else {
            
            
        int am;
        printf("enter amount \n");
        scanf("%d",&am);
        if(user[userid].balance<am){
            printf("your withdrawl amount is greater than balance \n  ");
            printf("\n \n \n       thanks you for use Axis ATM 😍😍 \n");
            
        }else{
        user[userid].balance= user[userid].balance-am;
        printf("your amount of %d withdral successfull \n",am);
        printf("your current balance is %d \n",user[userid].balance);
        printf("\n \n \n     thanks you for use Axis ATM 😍😍 \n");
            
        }
            
        }
        
    }else{
        printf("you are not validated . \n"); 
        
    }
    
    
}
 // function mad by amanthakur
 
void userview(){
     printf("select a option : \n");
     printf(" 1.check balance \n 2.withdrwal \n 3.deposit  \n");
     do{
         scanf("%d",&inpt);
     }while(inpt<1 || inpt>4);
}
// balance ckeck by amanthakur
void checkbal(struct card user[]){
    
   if(validater(user)==true){
       
       printf(" your balance is %d \n",user[userid].balance);
       printf("\n \n \n   thanks you for use Axis ATM 😍😍 \n");
      
   }else {
       
       printf("you are not validated . \n");
   }
  
    
}

void userfind(struct card user[],int cardnum,int vpin){
    
    for(int i=0;i<=9;i++){
        if(user[i].cardn==cardnum && user[i].pin==vpin){
            userid=i;
            
            break;
            
        }
        
    }
    
}
bool validater(struct card user[]){
    int cardnum;
    int vpin;
    printf("enter your card number \n");
    scanf("%d",&cardnum);
    printf("enter your card 4 digit pin \n");
    scanf("%d",&vpin);
    userfind(user,cardnum,vpin);
    
 if (cardnum==user[userid].cardn  && vpin==user[userid].pin){
     
     return true;
 }
    
  return false;
    
}