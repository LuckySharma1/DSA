
// C++ program to check
// for even or odd
#include <iostream>
using namespace std;
  
// Returns true if n is
// even, else odd
bool isEven(int n) 
{ 
    return (n % 2 == 0); 
}
  
// Driver code
int main()
{
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