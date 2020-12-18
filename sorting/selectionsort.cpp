/*

Tech videos in Tamil @ Santhosh Subramaniam youtube channel
Channel link : https://www.youtube.com/channel/UCdpGuJetVhKzinbgM80B1ow

*/
#include <bits/stdc++.h> 
using namespace std; 

void selectionSort(int arr[] , int n){
    int minValueIndex;
    // number of passes or round
    for(int i = 0 ; i < n - 1 ; i++){
        // min number check
        minValueIndex = i;
        for(int j = i+1 ; j < n ; j++){
            if(arr[minValueIndex] > arr[j])
                minValueIndex = j;
        }
        swap(arr[minValueIndex] , arr[i]);
        //printing the result
        for(int k = 0 ; k < n ;k++){
            cout << arr[k] << " ";
        }
        cout << endl;
    }

}

int main() 
{
    cout << endl <<  "====================" << endl << endl;

    int arr[] = { 40 , 5, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);


    selectionSort(arr,n);

    cout << endl << endl <<  "====================" << endl;

    return 0; 
} 

