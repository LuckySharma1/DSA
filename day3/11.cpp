#include<iostream>
using namespace std;
int main (){
    float Fahrenheit,celsius;

    cin>>Fahrenheit;

    celsius = ((Fahrenheit-32)*5)/9;

    cout<<"Fahrenheit:"<<Fahrenheit<<"to Celsius conversion is :"<<celsius; 
}