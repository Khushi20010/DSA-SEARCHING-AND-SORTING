#include<iostream>
#include<vector>
using namespace std;
int FirstEle(vector<int>&arr , int target){
    int low = 0 , high = arr.size()-1 , ans = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid] == target) {
            ans  =mid;
            high = mid-1;
        }
        else if(arr[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}
int LastEle(vector<int>&arr , int target){
    int low = 0 , high = arr.size()-1 , ans = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid] == target) {
            ans  =mid;
            low = mid+1;
        }
        else if(arr[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}
int totalOccurence(vector<int>&arr , int target){
    int first = FirstEle(arr , target);
    if(first == -1) return 0;
    int last = LastEle(arr , target);
    return(last-first +1);
}
int main(){
    vector<int>arr = {2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5};
    int target = 2;
    cout<<"Total possible ocurence of "<<target<<"is  "<< totalOccurence(arr , target)<<endl;
    return 0;
}