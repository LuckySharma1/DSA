#include<iostream>
using namespace std;

void update(int **p2){
    // p2 = p2 + 1;
    // kuch change hoga  - NO

    // *p2 = *p2 + 1;
    // kuch change hoga  - YES

    // **p2 = **p2 + 1;
    // kuch change hoga  - YES

}
void update(int *p){
    *p = (*p)  *  2;
}
void fun(int arr[]) {
    cout << arr[0] << " ";
}
 void increment(int **p){
    ++(**p);
}

int main(){
    /*
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    
    cout<< endl << endl <<" Sab sahi chal rha h "<< endl << endl;

    cout << " printing p "<<p<<endl;
    cout << "address of p "<< &p <<endl;
    cout << *p2 <<endl; 
    

    cout<< i <<endl;
    cout<< *p <<endl;
    cout<< **p2 <<endl;

    cout<< &i << endl;
    cout<< p << endl;
    cout<< *p2 <<endl;

    cout<< &p <<endl;
    cout<< p2 <<endl;  
    

    cout<< endl << endl;
    cout<<"before "<< i << endl;
    cout<<"before "<< p << endl;
    cout<<"before "<< p2 << endl;
    update(p2);
    
    cout<<"after "<< i <<endl;
    cout<<"after "<< p <<endl;
    cout<<"after "<< p2 <<endl;
    cout<< endl <<endl;
    */

    // int first = 8; 
    // int second = 18;
    // int *ptr = &second;
    // *ptr = 9;
    // cout<<first<<" "<< second<<endl;


    // int first = 6;
    // int *p = &first;
    // int *q = p;
    // (*q)++;
    // cout<< first << endl;
    
    // int first = 8;
    // int *p = &first;
    // cout << (*p)++ << " ";
    // cout << first << endl;

    // int *p = 0;
    // int first = 110;
    // *p = first;
    // cout << *p << endl;

    // int *p = 0;
    // int first = 110;
    // p = &first;
    // cout << *p << endl;

    // int first = 8;
    // int second = 11;
    // int *third = &second; 
    // first = *third;
    // *third = *third + 2;
    // cout  << first << "  " << second << endl;

    // float f = 12.5;
    // float p = 21.5;
    // float* ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout << *ptr << " " << f << " " << p << endl;

    // int arr[5];
    // int *ptr;
    // cout << sizeof(arr) << " " << sizeof(ptr) << endl;

    // int arr[] = {11, 21, 13, 14};
    // cout << *(arr) << " " << *(arr+1) << endl;

    // int arr[6] = {11, 12, 31};
    // cout << arr << " " << &arr << endl;

    // int arr[6] = {11, 21, 13};
    // cout << (arr + 1) << endl;

    // int arr[6] = {11, 21, 31};
    // int *p = arr;
    // cout << p[2] << endl;

    // int arr[] = {11, 12, 13, 14, 15};
    // cout << *(arr) << " " << *(arr + 3);

    // int arr[] = {11, 21, 31, 41};
    // int *ptr = arr++;
    // cout << *ptr << endl;

    // char ch = 'a';
    // char* ptr = &ch;
    // ch++;
    // cout << *ptr << endl;

    // char arr[] = "abcde";
    // char *p = &arr[0];
    // cout << p << endl;

    // char arr[] = "abcde";
    // char *p = &arr[0];
    // p++;
    // cout << p << endl;  

    // char str[]= "babbar";
    // char *p = str;
    // cout << str[0] << " " << p[0] << endl;

    // int i = 10;
    // update(&i);
    // cout << i << endl;
    

    // int arr[] = {11, 12, 13, 14};
    // fun(arr + 1);
    // cout << arr[0] << endl;
    
    // int first = 10;
    // int *p = &a;
    // int **q = &p;
    // int second = 20;
    // *q = &second;
    // (*p)++;
    // cout << first << " " << second << endl;

    // int first = 110;
    // int *p = &first;
    // int **q = &p;
    // int second = (**q)++ + 9;
    // cout << first << " " << second << endl;

    // int first = 100;
    // int *p = &first;
    // int **q = &p;
    // int second = ++(**q);
    // int *r = *q;
    // ++(*r);
    // cout << first << " " << second << endl; 


    
    int num = 110;
    int *ptr = &num;
    increment(&ptr);
    cout << num << endl;
    

    return 0;
}