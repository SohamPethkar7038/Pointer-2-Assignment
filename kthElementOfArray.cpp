// wrtie a program to print the kth element of an array using pointer //


#include<iostream>
using namespace std;
int main(){
    int size,k;
    cout << "Enter the size of the array :";
    cin >> size;
    cout << "enter the kth element :";
    cin >> k;
    int a[size];

    for(int i=0;i<size;i++){
        cin >> a[i];
    }
    int *ptr = (a + k - 1);
    
    cout << "The  kth element is :" << *ptr;

    return 0;
}