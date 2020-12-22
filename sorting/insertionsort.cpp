/*

Tech videos in Tamil @ Santhosh Subramaniam youtube channel
Channel link : https://www.youtube.com/channel/UCdpGuJetVhKzinbgM80B1ow

*/
#include <bits/stdc++.h> 
using namespace std; 

void insertionSort(int arr[],int n){

    //number of rounds 
    for(int i = 0 ; i < n ; i++){
        int temp = arr[i];
        int j = i;
        //checking left side
        while(j > 0 && temp < arr[j-1]){
            arr[j] = arr[j-1];
            //moving position by left one time
            j = j-1;
        }
        //correct index of value
        arr[j] = temp;

        //printing the value
        for(int k = 0 ; k < n ; k++){
            cout << arr[k] << " ";
        }
        cout<<endl;
    }



}

int main() 
{
    cout << endl <<  "====================" << endl << endl;

    int arr[] = {7,4,2,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr,n);

    cout << endl << endl <<  "====================" << endl;

    return 0; 
} 

