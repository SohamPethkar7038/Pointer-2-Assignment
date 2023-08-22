// Using pointers, find the sum of elements present on the 
// primary diagonal of the given n*n  2-D matrix.

#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "enter the size of the matrix :";
    cin >> size;
    int arr[size][size];
    for(int i = 0;i < size; i++){
        for(int j = 0; j < size; j++){
            cin >> arr[i][j];
        }
    }

    cout << "matrix print is :"<<endl;
    for(int i = 0;i < size; i++){
        for(int j = 0; j < size; j++){
            cout << arr[i][j]<<" ";
    }
    cout << endl;
    }

    int sum = 0;
    for(int i = 0; i< size; i++){
        sum = sum + *(*(arr + i) + i);
        
    }
    cout << "sum of the diagonal is :" << sum;
    return 0;
    }

