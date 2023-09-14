#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void swapAlternate(int arr[], int size){

    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){

    int even[8] = {5,2,7,6,3,1,8,10};
    int odd[5] = {45,32,21,16,63};

    swapAlternate(even, 8);
    printArray(even, 8);

    cout<<endl;
    swapAlternate(odd, 5);
    printArray(odd,5);
    
    return 0;
}