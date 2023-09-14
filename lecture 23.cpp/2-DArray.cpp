#include<iostream>
using namespace std;
bool isPresent(int arr[][3], int target, int row, int col){

    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}
// to print row wise sum
void printCOlSum(int arr[][3], int row, int col){
    cout<< "Printing Sum -> "<< endl;
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum +=  arr[i][j];
        }
        cout<< sum <<" ";
    }
    cout << endl;
}
// to print col wise sum
void printSum(int arr[][3], int row, int col){
    cout<< "Printing Sum -> "<< endl;
    for(int j=0; j<3; j++){
        int sum = 0;
        for(int i=0; i<3; i++){
            sum +=  arr[i][j];
        }
        cout<< sum <<" ";
    }
    cout << endl;
}

int largestRowsum (int arr[][3], int row, int col){
    int maxi = 0;
    int rowIndex = -1;

    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col=0; col<3; col++){
            sum += arr[row][col];
        }

        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }

    cout<< "this maximum sum is "<<maxi<<endl;
    return rowIndex;
}

int main(){

    // create 2d array
    int arr[3][3];
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,12,16};
    // int arr[3][4] ={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    cout<<"Enter the element "<<endl;
  // taking input -> row wise input
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }
    
 /*
    // taking input -> col wise input
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cin >> arr[j][i];
        }
    }
    */

    cout<< "Printing the Array "<<endl;
    // print
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j]<<"  ";
        }
        cout << endl;
    }
/*
    cout<<"Enter the element to search"<<endl;
    int target;
    cin>>target;

    if(isPresent (arr, target, 3,3)){
        cout<<"Element found "<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    printSum(arr, 3, 3);
    printCOlSum(arr, 3, 3);
    */

    cout<<" Max row is at index "<< largestRowsum(arr,3,3)<<endl;

    return 0;
}
