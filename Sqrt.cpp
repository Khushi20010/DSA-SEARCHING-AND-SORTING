#include<iostream>
using namespace std;
int Sqrt(int x){
    if(x  == 0 || x==1)return x;
    int low = 0 , high =x ,ans =0;
    while(low<=high){
        int mid  = (low+high)/2;
        long long square = 1LL*mid*mid;
        if(square == x){
            return mid;
        }
       else  if(square<x){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}
int main(){
    int x;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Square root if x  "<<x<<"is  "<<Sqrt(x)<<endl;
}