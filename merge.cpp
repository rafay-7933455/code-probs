#include<iostream>
#include<string>
using namespace std;
class Solution {
    
public:
    Solution(){}
    string merge(string word1, string word2) {
        // int index=0;
        int size1 = word1.length();
        int size2 = word2.length();
        // int size = size1+size2;
        // char * result = new char [size];
        // while(index<size){
        //     if((index/2)<size1) {result[index] = word1[index/2]; index++;}
        //     //else if ((index/2)==(index-1)/2) index++;
        //     if((index/2)<size2) {result[index] = word2[index/2]; index++;}
        //     //else if ((index/2)==(index-1)/2) index++;
        // }
        string result = "";
        int i = 0, j = 0;

        while (i < size1 || j < size2) {
            if (i < size1) {
                result += word1[i]; 
                i++;
            }
            if (j < size2) {
                result += word2[j]; 
                j++;
            }
        }
        return result;
    }
};
int main(){
  Solution S;
  cout<<"Enter word1:";
  string word1;
  cin>>word1;
  cout<<"Enter word2:";
  string word2;
  cin>>word2;
  cout<<"Result: "<<S.merge(word1,word2)<<endl;
  return 0;
}
