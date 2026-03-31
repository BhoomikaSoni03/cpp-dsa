#include<iostream>
#include<stack>
#include<vector>
using namespace std;

string reverseString(string s){
     
    stack<char> st;
    char ch ;
    for(int i=0; i<s.length(); i++){
        ch = s[i];
        st.push(ch);
    }

    string ans = "";
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}


int main(){
    string s ;
    cin>>s;

    cout<<reverseString(s);
}