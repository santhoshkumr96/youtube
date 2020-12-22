/*

Tech videos in Tamil @ Santhosh Subramaniam youtube channel
Channel link : https://www.youtube.com/channel/UCdpGuJetVhKzinbgM80B1ow

*/
#include <bits/stdc++.h> 
using namespace std; 

void merge(int arr[] , int start, int mid , int end){
    int p = start , q = mid + 1;
    int A[end -start + 1 ] , k = 0;
    for(int i = start ; i <= end ; i++){
        // check if first list is over
        if(p > mid)
            A[k++] = arr[q++];
        // check if second list is over
        else if ( q > end)
            A[k++] = arr[p++];
        // compare and update the list
        else if ( arr[p] > arr[q] ){
            A[k++] = arr[q++];
        } else {
             A[k++] = arr[p++];
        }
    }
    // update the array for the sorted value
    for (int p = 0; p < k; p++)
    {
        arr[start++] = A[p];
    }

}

void mergeSort(int arr[],int start,int end){

    if(start < end){
        int mid = (start+end)/2;
        // split the list based on mid point
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }


}

int main() 
{
    cout << endl <<  "====================" << endl << endl;

    int arr[] = { 9,7,8,3,2,1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr,0,n-1);

    for(int i = 0 ; i  < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl <<  "====================" << endl;

    return 0; 
} 

