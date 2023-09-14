#include<iostream>
using namespace std;
int main() {
    int a=4;
    int b=a;
    if((a=4)==b){
        cout<< a;
    }
    else{
        cout << b;
    }
}