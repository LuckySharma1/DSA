#include<iostream>
#include<climits>
using namespace std;

int sumArray(int arr[], int arr_size){
    int sum = 0;
    for(int i=0; i<arr_size; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int arr[] = {2,7,1,-4,11};
    int arr_size = 5;

    cout<<"Total Sum of Array is:"<<sumArray(arr,arr_size);

    return 0;

}