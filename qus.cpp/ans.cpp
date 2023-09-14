/*#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[] = "Lucky";
    cout << "Original string: " << str<<endl;
    
    cout << "String after reverse: ";
    
    for(int i = (strlen(str) - 1); i >= 0; i--)
        cout << str[i];
       
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

//Recursive Function
void permute(string s, int l, int r)
{
   // Base case
   if (l == r)
     cout<<s<<" ";
   else
   {
      for (int i = l; i <= r; i++)
      {

          // Function to swap
          swap(s[l], s[i]);

          // Recursion called
          permute(s, l+1, r);

          //backtrack
          swap(s[l], s[i]);
        }
    }
}

// Driver Code
int main()
{
     string str = "ABC";
     int n = str.size();
     permute(str, 0, n-1);
     return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

void print(string output, string input){
     if(input.size()==0){
         cout<<output<<endl;
         return;
     }
     print(output,input.substr(1));
     print(output+input[0],input.substr(1));
 }

int main()
{

}