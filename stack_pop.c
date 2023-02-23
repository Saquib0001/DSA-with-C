#include<stdio.h>
#define size 4 

int top = -1 ;
int s_arr[size] ;



void push(int data){
  
    if(top == size - 1){
      printf("\noverflow\n") ;
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

int pop(){
    int value ;
    if(top == -1){
        printf("\n\nunderflow\n");
       return 0;
    }
    else{
        value = s_arr[top];
        printf("\npopped element in stack : %d",s_arr[top]);
        top = top - 1 ;
        return value ;
    }
}


int main(){
 
    // push(10);
    // show();
    // pop();
    // push(20);
    // show();
    // show();
    // push(30);
    // show();
    // push(40);
    // show();
  push(10);
  show();
  push(20);
  show();
  push(30);
  show();
  push(40);
  show();

  pop();
  pop();
  pop();
  pop();

  show();

    return 0 ;

}

