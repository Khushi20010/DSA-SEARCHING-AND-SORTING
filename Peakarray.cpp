#include<iostream>
#include<vector>
using namespace std;
int PeakMountain(vector<int>&arr){
    int low = 0, high = arr.size()-1;
    while(low<high){
        int mid = low+(high-low)/2;
        if(arr[mid]<arr[mid+1]) {
            low = mid+1;

        }
        else{
            high =  mid;
        }
    }
    return low;

}
int main(){
    vector<int>arr = {2,5,7,10,6,3,1};
    cout<<"Peak index :  "<<PeakMountain(arr)<<endl;
}

