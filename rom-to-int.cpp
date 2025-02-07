#include<iostream>
#include<string>
using namespace std;
int rom_to_int(string a){
    int num=0;
    for(int i=0;i<a.length();i++){
        if(a[i] =='I') {
            if (a[i+1] =='V'){
                num+=4;
                i++;
            }
            else if (a[i+1] =='X'){
                num+=9;
                i++;
            }
            else num+=1;
        }
        else if (a[i] =='V') num+=5;
        else if (a[i] =='X') {
            if (a[i+1] =='L'){
                num+=40;
                i++;
            }
            else if (a[i+1] =='C'){
                num+=90;
                i++;
            }
            else num+=10;
        }
        else if (a[i] =='L') num+=50;
        else if (a[i] =='C') {
            if (a[i+1] =='D'){
                num+=400;
                i++;
            }
            else if (a[i+1] =='M'){
                num+=900;
                i++;
            }
            else num+=100;
        }
        else if (a[i] =='D') num+=500;
        else if (a[i] =='M') num+=1000;
    }
    return num;
}
int main(){
    cout<<"Enter a roman numeral: ";
    string rom="";
    cin>>rom;
    cout<<"The integer value of "<<rom<<" is: "<<rom_to_int(rom)<<endl;
    return 0;
}