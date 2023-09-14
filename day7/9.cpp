#include<iostream>
using namespace std;

// 1 -> Even
// 0 -> Odd
bool isEven(int number){
    //Even
    if(number % 2 == 0 ){
        return 1;
    }
    // odd 
     else{ 
        return 0;
    }

}

int main(){

    int num;
    cin>>num;

   if (isEven(num)) {
    cout<<"number is Even"<<endl;
   }
   else{
    cout<<"Number is Odd"<<endl;
   }
   return 0;
}