#include<iostream>
#include<vector>
using namespace std;
int firstele(vector<int>&arr , int target){
    int low =0 , high  = arr.size()-1 , ans = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid] == target){
            ans = mid;
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
int lastele(vector<int>&arr , int target){
    int low =0 , high  = arr.size()-1 , ans = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid] == target){
            ans = mid;
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
int main(){
    vector<int>arr = {3,3,4,4,5,5,6,6,7,7,8,8};
    int target = 6;
    int firstelement = firstele(arr , target);
    int lastelement = lastele(arr ,target);
    if(firstelement!=-1){
 cout<<"first occurence appear at the index:  "<<firstelement<<endl;
    cout<<"last occurence appear at the index:  "<<lastelement<<endl;
    }
   else{
     cout<<"No element appear at the index:  "<<endl;
  
   }
}