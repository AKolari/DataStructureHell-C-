#include <iostream>

using namespace std;
const int SIZE=100;


struct stack{
    int top=0;
    int *arr= new int[SIZE];

};

void push(stack &s, int num){
    if(s.top<SIZE){
        s.arr[s.top]=num;
        s.top++;
    }else{
        cout<<"full";
    }



}

void pop(stack &s){
    if(s.top>0){
        s.arr[s.top]=NULL;
        s.top--;
    }else{
        cout<<"empty";
    }
}

int peek(stack &s){
    if(s.top>0){
        return  s.arr[s.top];
       
    }else{
        cout<<"empty";
    }
}

int display(stack &s){
    for(int i=0; i<s.top; i++){
        cout<<s.arr[i]<<endl;
    }
}




int main(){
    stack myStack;

    display(myStack);
    push(myStack, 12);
    display(myStack);
    push(myStack, 13);
    push(myStack, 14);
    display(myStack);
    








    return 0;
}