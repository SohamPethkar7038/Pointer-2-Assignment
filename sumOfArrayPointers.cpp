// To find the sum of the element of the array using pointers //

#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    int a[size];
    int *ptr = a;
    for(int i = 0; i < size; i++) {
        cin >> *ptr;
        ptr++;
    }
    ptr = a;
    int sum = 0;
    for(int i=0; i < size; i++) {
        sum+= *ptr;
        ptr++;
    }
    cout << "The sum of the elements in the given array is :" << sum;
    return 0;


}