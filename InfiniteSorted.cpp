#include<iostream>

using namespace std;
int SortedArray(int arr[] , int n  ,int target){
    int low = 0 , high = 1 ;
    while( high<n && arr[high] <target){
        low = high;
        high *=2;
        if( high>=n) high = n-1;
    }
    while(low<=high){
        int mid = low +(high-low)/2;
        if(arr[mid] == target) return mid;
        else if(arr[mid]<target) low = mid+1;
        else{
            high  = mid-1;
        }
    }
    return -1;
    
}
int main(){
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n  =sizeof(arr)/sizeof(arr[0]);
    int target = 56;
    int index =  SortedArray(arr , n , target);
    if(index!=-1){
        cout<<"position of the selected element is:  "<<index<<endl;
    }
    else{
        cout<<"no position found  "<<endl;
    }

}