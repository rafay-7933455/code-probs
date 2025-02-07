//Code to find gcd of two strings
#include<iostream>
#include<string>
using namespace std;
string gcd(string a, string b){
    int i1 = 0;
    int j1 = 1;
    string str1 = "";
    str1 += a[i1];
    while(a[i1] != a[j1]){
        str1 += a[j1];
        j1++;
    }

    int i2 = 0;
    int j2 = 1;
    string str2 = "";
    str2 += b[i2];
    while(b[i2] != b[j2]){
        str2 += b[j2];
        j2++;
    }

    if(str1 == str2) return str1;
    return "Nil";
}
int main(){
    string a, b;
    cout << "Enter two strings: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;
    return 0;
}