/*

Tech videos in Tamil @ Santhosh Subramaniam youtube channel
Channel link : https://www.youtube.com/channel/UCdpGuJetVhKzinbgM80B1ow

*/
#include <bits/stdc++.h> 
using namespace std; 

void insertionSort(int arr[] , int n){
    // looping for number of passes
    for(int i = 0 ; i  < n ; i++){
        int temp = arr[i];
        int j = i;
        //checking left side of the current index
        while(j > 0 && temp < arr[j-1]){
            arr[j] = arr[j-1];
            j = j-1;
        }
        // swapping the value for its correct position
        arr[j] = temp; 
    }

    //printing the array
    for(int i = 0 ; i  < n ; i++){
        cout << arr[i] << " ";
    }
    

}


int main() 
{
    cout << endl <<  "====================" << endl << endl;

    int arr[] = {7,4,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);

    cout << endl << endl <<  "====================" << endl;

    return 0; 
} 

