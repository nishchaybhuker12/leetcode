#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> stack){
    for(int i =0; i<5; i++){
        cout<<stack.top();
        stack.pop();
    }
}

void reverse(stack<int>  st){
    stack<int> ans;
    //base
    if(st.empty()){
    ans.push(st.top());
    return;
    }
    int num = st.top();
    st.pop();
    reverse(st);
    ans.push(num);
}

int main(){
    stack<int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

    reverse(st);

    print(st);

}