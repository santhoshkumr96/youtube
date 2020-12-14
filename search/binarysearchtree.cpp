/*

Tech videos in Tamil @ Santhosh Subramaniam youtube channel
Channel link : https://www.youtube.com/channel/UCdpGuJetVhKzinbgM80B1ow

*/
#include <bits/stdc++.h> 
using namespace std; 

int binarySearch(int a[], int low, int high, int value){
    while(low <= high){
        int mid = (low+high) / 2;
        if(a[mid] > value){
            high = mid-1;
        } else if (a[mid] < value) {
            low = mid+1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main() 
{
    cout << endl <<  "====================" << endl;

    int a[] = {1,2,3,4,5,6,8,9,10,11,11,13,15};
    int n = sizeof(a) / sizeof(a[0]);
    cout << binarySearch(a,0,n,11);
    
    cout << endl <<  "====================" << endl;

    return 0; 
} 