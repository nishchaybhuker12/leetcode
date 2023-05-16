#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &st, int count, int size){
    if(count == size){
        
        st.push(10);
        return;
    }
    int num = st.top();
    st.pop();

    solve(st,count+1,size);
    st.push(num);
}

int main(){
    stack<int> st; 
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    int size = 5;
    int count = 0;
    solve(st, count, size);

    for(int i = 0; i<6; i++){
        cout<<st.top()<<endl;
        st.pop();
    }
}

