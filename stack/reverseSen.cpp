#include<iostream>
#include<stack>
using namespace std;

string reverseSen(string sen){
    stack<string> s;
    string word;
    for(int i=0; i<sen.length(); i++){
        if(sen[i] != ' '){
            word += sen[i];
        }else{
            s.push(word);
            word = "";
        }
    }

    if(word != ""){
        s.push(word);
    }

    string ans = "";
    while(!s.empty()){
        ans += s.top();
        s.pop();
        if(!s.empty()) ans += " ";
    }
    return ans;
}

int main(){
    string sen;
    cin>>sen;

    cout<<reverseSen(sen);
}