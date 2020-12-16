/*

Tech videos in Tamil @ Santhosh Subramaniam youtube channel
Channel link : https://www.youtube.com/channel/UCdpGuJetVhKzinbgM80B1ow

*/
#include <bits/stdc++.h> 
using namespace std; 


void bubbleSort(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n -1 ; j++){
            if(arr[j] > arr[j+1])
                swap(arr[j] , arr[j+1]);
        }
        cout << " pass " << (i+1) << " = ";
        for(int k = 0 ; k < n ; k++){
            cout << arr[k] << " ";
        }
        cout << endl;

    }
}

int main() 
{
    cout << endl <<  "====================" << endl << endl;

    int arr[] = { 40 , 5 , 2 , 10 };
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr,n);

    cout << endl << endl <<  "====================" << endl;

    return 0; 
} 