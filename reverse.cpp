#include<iostream>
#include<string>
using namespace std;
//reverse the words in a string
string reverse(string words){
    string result = "";
    int size = words.length();
    int k=0;int j=0;
    for(int i = 0; i<=size; i++){
        if((words[i]==' ')||(words[i]=='\0')){
            j=i-1;
            for(;k<=j;k++,j--){
                char temp = words[k];
                words[k] = words[j];
                words[j] = temp;
            }
            k=i+1; 
        }
    }
    return words;
}
int main(){
    string words;
    cout<<"Enter a string: ";
    getline(
        cin,words
    );

    string result = reverse(words);
    cout<<"Result: "<<result<<endl;
    return 0;
}