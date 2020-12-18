/*

Tech videos in Tamil @ Santhosh Subramaniam youtube channel
Channel link : https://www.youtube.com/channel/UCdpGuJetVhKzinbgM80B1ow

*/
#include <bits/stdc++.h> 
using namespace std; 


void bubbleSort(int arr[], int n){
    // passes 
    for(int i = 0 ; i < n ; i ++){
        // comparisions
        for(int j = 0 ; j < n -1 ; j++){
           if( arr[j] > arr[j+1])
            swap(arr[j] , arr[j+1]); 
        }
        cout << "pass " << i+1 << " = ";
        // prinitng the result of passes
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


/*


INPUT : no inputs required
RESULT: 
====================

 pass 1 = 5 2 10 40
 pass 2 = 2 5 10 40
 pass 3 = 2 5 10 40
 pass 4 = 2 5 10 40


====================


*/