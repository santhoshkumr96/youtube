/*

Tech videos in Tamil @ Santhosh Subramaniam youtube channel
Channel link : https://www.youtube.com/channel/UCdpGuJetVhKzinbgM80B1ow

*/
#include <bits/stdc++.h> 
using namespace std; 


//paritioning the pivot
int partition(int arr[], int start , int end){
    int i = start+1;
    int pivot  = arr[start];

    for(int j = start+1 ; j <= end ; j++){
        if(arr[j] < pivot){
            swap(arr[i],arr[j]);
            i+=1;
        }
    }
    swap(arr[i-1],arr[start]);
    return i -1 ;
}

void quickSort(int arr[] , int start , int end){

    if(start < end){
        //finding the correct pivot position
        int pivotPos = partition(arr,start,end);
        quickSort(arr,start , pivotPos -1);
        quickSort(arr,pivotPos+1 , end);
    }


}


int main() 
{
    int arr[] = {5,7,8,3,2,1};
    int length = sizeof(arr) / sizeof(arr[0]);

    //printing the value before sorting
    for(int i = 0 ; i < length ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr,0,length-1);
    
    //printing the value after sorting 
    for(int i = 0 ; i < length ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0; 
} 

