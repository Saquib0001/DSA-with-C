#include<stdio.h>
#define size 4 

int top = -1 ;
int s_arr[size] ;



void push(int data){
  
    if(top == size - 1){
      printf("overflow\n") ;
    }
    else{
    top = top + 1 ;
    s_arr[top] = data ;
}
}

void show (){

    if(top == -1){
        printf("underflow");
    }
    else{
        printf("pushing element in stack : %d\n ",s_arr[top]); 
    }
}


int main(){
 
    push(10);
    show();
    push(20);
    show();
    push(30);
    show();
    push(40);
    show();
    return 0 ;

}

