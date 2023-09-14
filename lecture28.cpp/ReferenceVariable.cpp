#include<iostream>
using namespace std;

int& func(int a){
    int num = a; 
    int& ans = num;
    return ans;
}
int* fun(int n){
    int* ptr =  &n; 
    return ptr;
}

void update1(int i){
    i++;
}

void update2(int &i){
    i++;
}
int main() {
    /*
    int i = 5; 

    // create a ref variable

    int &j = i; 

    cout<< i << endl;
    i++;
    cout<< i << endl;
    j++;
    cout<< i << endl;
    cout<< j << endl;
    */

    int n = 5;
    
    cout<< "before "<< n << endl;
    update2(n);
    cout<< " after "<< n << endl;


    fun(n);


    return 0;
}