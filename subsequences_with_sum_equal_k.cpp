//subsequences with sum equal to k
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void f(int i,int arr[],vector<int>ds,int sum,int target,int n){
    if(i>=n){
        if(target==sum){
          for(auto it:ds) cout<<it<<" ";
          cout<<endl;
        }
        return;
    }
    //take
    ds.push_back(arr[i]);
    sum+=arr[i];
    f(i+1,arr,ds,sum,target,n);
    //not take
    sum-=arr[i];
    ds.pop_back();
    f(i+1,arr,ds,sum,target,n);
}
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    int arr[]={1,2,3};
    int n=3;
    vector<int>ds;
    f(0,arr,ds,0,3,n);
    return 0;
}
