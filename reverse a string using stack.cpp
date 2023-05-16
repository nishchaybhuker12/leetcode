#include<iostream>
#include<stack>
using namespace std;
int main(){
    string ans = "abcd";
    stack<char> st;

    for(int i = 0; i<4; i++){
    st.push(ans[i]);
    }
    string s;
    for(int i = 0; i<4; i++){
        s.push_back(st.top());
        st.pop();
    }

    cout<<s;
}