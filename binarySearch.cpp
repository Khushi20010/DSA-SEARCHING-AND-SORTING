#include<iostream>
#include<vector>
using namespace std;
int targetEle(vector<int>&arr , int target){
    int low =0, high = arr.size()-1;
    
   
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == target) return mid;
        else if( arr[mid] >target) high = mid-1;
        else low = mid+1;
    }
    
return -1;
}
int main(){
    vector<int> arr= {2,3,4,5,6,7,88,99};

     int target = 8787;
     int index = targetEle(arr , target);
     if(index!=-1){
        cout<<"Target Element found at this index   "<<index<<endl;
     }
     else{
        cout<<"Target Element not found"<<endl;
     }
     return 0;
    
}
