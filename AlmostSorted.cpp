#include<iostream>
#include<vector>
using namespace std;
int SortedArray(vector<int>&arr , int target){
    int low = 0 , high = arr.size()-1 , ans = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid] == target) return mid;
        if(mid>low && arr[mid-1] == target) return mid-1;
        if(mid<high &&arr[mid]  == target) return mid+1;
        else if(arr[mid]<target) low  = mid+1;
        else{
high = mid-1;
        }
    }
    return ans;

}
int main(){
    vector<int>arr = {2,5,4,6,7,9,8};
    int target = 7;
    int index = SortedArray(arr , target);
    if(index != -1){
        cout<<"Position of the element is:  "<<index<<endl;
    }
}