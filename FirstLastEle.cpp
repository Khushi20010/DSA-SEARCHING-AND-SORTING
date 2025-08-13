#include<iostream>
#include<vector>
using namespace std;
int FirstEle(vector<int>&arr , int target){
    int low =0 ,high  =arr.size()-1 , ans =-1;
    while(low<=high){
        int mid = (low+high)/2;
    if(arr[mid] == target){
          ans = mid;
          high = mid-1; //keep saerching on left side

    }
      
         else if(arr[mid]<target)
         low = mid+1;
         else{
   high = mid-1;
         }
      
    }
    return ans;
   
    
}
int LastEle(vector<int>&arr , int target){
    int low =0 ,high  =arr.size()-1 , ans =-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
    ans = mid;
        low = mid+1; //keep searching right side
        }
    
         else if(arr[mid]<target)
         low = mid+1;
         else{
   high = mid-1;
         }
      
    }
    return ans;
   
    
}
int main(){
    vector<int>arr = {1,1,1,2,2,2,3,3,4,4,4};
    int target = 4;
    int first = FirstEle(arr , target);
    int last = LastEle(arr , target);
    if(first!=-1){
        cout<<"First occurence at index: "<<first<<endl;
        cout<<"last occurence at index: "<<last<<endl;
    }
    else{
        cout<<"no occurence found"<<endl;
    }
    return 0;

}
