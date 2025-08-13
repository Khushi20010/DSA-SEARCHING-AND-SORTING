#include<iostream>
#include<vector>
using namespace std;
int targetEle(vector<int>&arr , int target){
    int low = 0 , high = arr.size()-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
       if(arr[mid]>= target){
        if(arr[mid] == target) ans = mid;
        high = mid-1;
       }
       else{
        low  =mid+1;
       }

    }
    return ans;
} 
int main(){
    vector<int>arr = {1,1,1,2,2,3,3,3,4,4};
    int target = 3;
    int index = targetEle(arr , target);
    if(index!=-1){
        cout<<"First Occurence is   "<<index<<endl;
    }
    else{
        cout<<"no occurebce found"<<endl;
    }
}