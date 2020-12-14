/*

Tech videos in Tamil @ Santhosh Subramaniam youtube channel
Channel link : https://www.youtube.com/channel/UCdpGuJetVhKzinbgM80B1ow

*/
#include <bits/stdc++.h> 
using namespace std; 

int top = -1;
int size = 4;


bool isEmpty(){
    if(top == -1){
        return true;
    }
    return false;
}

void pop(){
    if(isEmpty()){
        cout << "stack is empty" << endl;
    }
    top = top - 1;
}

bool isFull(){
    if(top == size - 1 ){
        return true;
    }
    return false;
}

void push(int a[],int value){
    if(isFull()){
        cout << "stack is full" << endl;
    } else {
        top = top + 1;
        a[top] = value;
    }
}

int topValue(int a[]){
    if(isEmpty()){
        cout << "emptystack" << endl;
        return -1;
    }
    return a[top];
}

int main() 
{
    int a[size];
    push(a,5);
    push(a,1);
    push(a,2);

    cout << topValue(a) << endl;

    push(a,3);
    push(a,4);

    pop();
    pop();
    pop();
    pop();
    pop();

    return 0; 
} 