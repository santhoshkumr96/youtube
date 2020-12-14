/*

Tech videos in Tamil @ Santhosh Subramaniam youtube channel
Channel link : https://www.youtube.com/channel/UCdpGuJetVhKzinbgM80B1ow

*/
#include <bits/stdc++.h> 
using namespace std; 

int n = 4;
int rear = -1;
int front = -1;


void enqueue(int arr[],int value){
    if(rear == n-1){
        cout << "queue is full" << endl;
        return;
    }
    rear = rear+1;
    arr[rear] = value;

}

void dequeue(int arr[]){
    if(rear == front){
        cout << "queue is empty" << endl;
        front = -1;
        rear = -1;
        return;
    }
    front = front + 1;
}

int frontValue(int arr[]){
    if(rear == front){
        cout << "queue is empty" << endl;
        front = -1;
        rear = -1;
        return -1;
    }
    return arr[front];
}

int main() 
{
    cout << "===================" <<endl << endl;
    
    int arr[n];

    enqueue(arr,6);
    enqueue(arr,6);
    enqueue(arr,6);
    enqueue(arr,6);
    enqueue(arr,6);

    dequeue(arr);
    dequeue(arr);
    dequeue(arr);
    dequeue(arr);
    dequeue(arr);

     enqueue(arr,12);

    cout << frontValue(arr);
    cout <<endl<< "===================" ;
    return 0; 
} 