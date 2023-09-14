#include<iostream>
using namespace std;
int main() {
    char  ch;
    cin >>ch;
    if (ch>='a'&& ch<='z'){
        cout<<"this is lowercase";
    }
    else if (ch>='A'&& ch<='Z'){
        cout<<"this is Uppercase";
    }
    else{
        cout<<"ch is numeric";
    }
}