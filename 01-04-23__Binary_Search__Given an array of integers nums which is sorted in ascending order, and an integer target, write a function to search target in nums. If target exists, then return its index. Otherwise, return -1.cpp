#include <iostream>
using namespace std;

int binarySearch(int arr[],int size, int target){
    int start = arr[0];
    int end = arr[n-1];
    int mid = start+(end-start)/2;
    while(start<=end){
        mid = start+(end-start)/2;

        if(target == arr[mid]){
            return mid;
        }
        else if(target < arr[mid]){
            end = mid-1;
        }
        else if(target>arr[mid]){
            start = mid+1;
        }

    }
    return -1;
}
int main(){
    int arr[5] = {1,3,5,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 7;
    cout<<binarySearch(arr,n,target);
}