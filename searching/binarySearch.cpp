#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[],int n,int key){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int key=5;
    cout<<binarySearch(arr,10,key)<<endl;
    return 0;
}