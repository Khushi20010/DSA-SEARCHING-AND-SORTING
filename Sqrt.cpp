#include<iostream>
using namespace std;
int Sqrt(int x){
if(x == 0|| x==1) return x;
int low =0 , high =x , ans =0;
while(low<=high){
    int mid = low+(high-low)/2;
    long long square  = 1LL*mid*mid;
    if(square == x){
        return mid;
    }
    else if(square<x){
        ans = mid;
        low = mid+1;
    }
    else{
        high = mid-1;
    }
}
}
int main(){
    int x= 8989889;
    int squareroot = Sqrt(x);
    cout<<"square root of thsi number is:  "<<squareroot<<endl;
    return 0;
}