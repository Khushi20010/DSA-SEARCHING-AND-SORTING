#include<iostream>
using namespace std;
int main(){
    int arr[] = {9,877,444,2345,778,6554,43,3,5,65,6,7};
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        int j=i+1;
        while(j>=1 &&arr[j]<arr[j-1]){
            swap(arr[j] , arr[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}