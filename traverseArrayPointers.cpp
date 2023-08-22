// program to traverse the array in the revrese order using pointer //


#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the size of the array :";
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    int *ptr = &a[n-1];
    for(int i = n-1; i>=0; i--){
        cout << *ptr <<" " ;
        ptr--;
    }
    return 0;
}