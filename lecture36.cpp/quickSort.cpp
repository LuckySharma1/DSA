#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){

    int pivot = arr[s];

    int count = 0;
    for(int i = s+1; i<=e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    // place pivot at right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // left and right wala part smbhal lete h
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex){

        while(arr[i] <= pivot)
        {
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e){

    // base case
    if(s >= e)
        return;

    // partition karena
    int p  = partition(arr, s, e);

    // left part sort karo
    quickSort(arr, s, p-1);

    // right wala part sort karo
    quickSort(arr, p+1, e);
}

int main(){

    int arr[9] = {6,5,8,9,3,10,15,12,16};
    int n = 9;

    quickSort(arr, 0 , n-1);

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}