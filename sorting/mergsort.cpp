/*

Tech videos in Tamil @ Santhosh Subramaniam youtube channel
Channel link : https://www.youtube.com/channel/UCdpGuJetVhKzinbgM80B1ow

*/
#include <bits/stdc++.h> 
using namespace std; 

void merge(int arr[] , int start , int mid ,int high){
    int  p = start , q = mid + 1 ;
    int A[high - start + 1 ] , k = 0;
    for(int i = start ; i <= high ; i++){
        if(p > mid)
            A[k++] = arr[q++];
        else if(q > high)
            A[k++] = arr[p++];
        //checking inuvidual blocks
        else if(arr[p] > arr[q]){
            A[k++] = arr[q++];
        } else {
            A[k++] = arr[p++];
        }
    }
    //updating the result to actual array
    cout << endl;
    for(int j = 0 ; j < k ; j++){
        arr[start++] = A[j];
        cout << A[j] << " ";
    }
}

void mergeSort(int arr[],int low,int high){

    if(low < high){
        int mid = (low+high)/2;
        cout << " index  = " << mid << " " << endl;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }

}

int main() 
{
    cout <<endl<<"=============="<<endl<<endl;

    int arr[] = {9,7,8,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    cout << endl;
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }

    cout <<endl<<"=============="<<endl<<endl;

    return 0; 
} 

