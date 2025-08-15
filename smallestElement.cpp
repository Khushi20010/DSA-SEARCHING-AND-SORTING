#include<iostream>
#include<vector>
using namespace std;
int SmallestEle(vector<int>&arr ){
    int low = 0 , high = arr.size()-1;
    while(low<high){
        int mid = low+(high-low)/2;
        if(arr[mid]<=arr[high])  high = mid;
        else {
            low = mid+1;
        }
    }
    return arr[low];
}
int main(){
    vector<int>arr = {4,6,8,10,14,18,88};
    int Small = SmallestEle(arr);
    cout<<"Smallest Element is:  "<<Small<<endl;
    return 0;
}