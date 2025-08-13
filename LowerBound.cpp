#include<iostream>
#include<vector>
using namespace std;
int lowerBound(vector<int>&arr , int target){
    int low = 0 , high = arr.size()-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
         if(arr[mid]>= target){
          ans = mid;
          high = mid-1;
          
    }
    else{
            low= mid+1;
          }
        }
    return ans;
}
int main(){
    vector<int>arr = {1,3,3,5,7,9};
    int target = 6;
    int index = lowerBound(arr , target);
    if(index!=-1){
        cout<<"Lower Bound index found at  "<<index<<"   value: "<< arr[index]<<endl;

    }
    else{
        cout<<"No element or atrget found"<<endl;
    }

}