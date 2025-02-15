#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){
    string s="";
    cout<<"Enter the string: ";
    cin>>s;
    stack<char> myStack;
    
    for(int i=0;i<s.length();i++){
        if (s[i]=='(' || s[i]=='{' || s[i]=='['){
            myStack.push(s[i]);
        }
        else if(s[i]==')' && !myStack.empty() && myStack.top()=='('){
            myStack.pop();
        }
        else if(s[i]==']' && !myStack.empty() && myStack.top()=='['){
            myStack.pop();
        }
        else if(s[i]=='}' && !myStack.empty() && myStack.top()=='{'){
            myStack.pop();
        }
        else if(s[i]==')' && (myStack.empty() || myStack.top()!='(')){
            cout<<"Invalid String: No matching opening braces for )"<<endl;
            break;
        }
        else if(s[i]==']' && (myStack.empty() || myStack.top()!='[')){
            cout<<"Invalid String: No matching opening braces for ]"<<endl;
            break;
        }
        else if(s[i]=='}' && (myStack.empty() || myStack.top()!='{')){
            cout<<"Invalid String: No matching opening braces for }"<<endl;
            break;
        }
    }
    if(myStack.empty()){
        cout<<"Valid String"<<endl;
    }
    else{
        cout<<"Invalid String: No matching braces for "<<myStack.top()<<endl;
    }
    
    return 0;
}