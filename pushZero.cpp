#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,6,7,0,0,9,90,0,0,0};
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j] == 0){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
    }
}