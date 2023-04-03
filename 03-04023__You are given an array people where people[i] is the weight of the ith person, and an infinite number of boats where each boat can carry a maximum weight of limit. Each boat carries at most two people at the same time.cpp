#include<iostream>
using namespace std;

int boat(vector<int> arr, int limit){
    //sort the array if not sorted
    sort(arr.begin(),arr.end());

    int start = 0;
    int last = arr.size()-1;
    int count = 0;

    while(start<=last){
        if(arr[last]+arr[start]<=limit){
            last--;
            start++;
        }
        else{
            last--;
        }
        count++;
    }
    return count;
}

int main(){
    vector<int> arr = {1,2,3,5,3};
    int limit = 5;
}