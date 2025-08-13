#include<iostream>
#include<vector>
using namespace std;
int UpperBounmd(vector<int>&arr , int target){
    int low =0 ,high = arr.size()-1 , ans =-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<=target)
        low =mid+1;
        else{
            ans = mid;
            high= mid-1;
        }


    }
    return ans;
}
int main(){
    vector<int>arr = {2,4,4,4,9};
    int target = 4;
    int index = UpperBounmd(arr , target);
    cout<<"Upper bound at index: "<<index<<endl; 
}