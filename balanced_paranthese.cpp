#include<bits/stdc++.h>
using namespace std;
bool isvalidparaenthese(string s){
    stack<char> stk;
    for(int i=0; s[i] !='\0'; i++){
        char ch =s[i];
        if(ch == '(' || ch == '['|| ch == '{' )
        {
            stk.push(ch);
        }
        else if(ch== ')'){
            if(stk.empty() or stk.top() == '[' or stk.top()  == '{'){
                return false;
            }
            stk.pop();
        }
        else if(ch=='}'){
            if(stk.empty() or stk.top() == '[' or stk.top()  == '('){
                return false;
            }
            stk.pop();
        }
        else{
            if(stk.empty() or stk.top() == '{' or stk.top()  == '('){
                return false;
            }
            stk.pop();
        }
    }
    if(stk.empty()) return true;

    return false;
}
int main() {
    string s;
    cin>>s;
    if(isvalidparaenthese(s)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
return 1;
}
