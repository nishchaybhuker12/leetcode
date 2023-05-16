#include<iostream>
using namespace std;
int main(){
    string ans = "abcd";
    int first = 0; 
    int end = 4;
    while(first<end){
        swap(ans[first],ans[end]);
        first++;
        end--;
    }

    for(int i = 0; i<=4;i++){
        cout<<ans[i]<<" ";
    }
}