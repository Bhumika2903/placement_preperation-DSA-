#include<iostream>
#include<bits/stdc++.h>
void print(int ind,vector<int>&ds,int arr[],int n){
    if(ind==n){
        for(auto it:ds){
            cout << it<<" "; 
        }
    if(n==0){
        cout<<"{}";
    }
    cout<<endl;
    return;
    }
    ds.push_back(arr[ind]);
    //pick the element
    print(ind+1,ds,arr,n);
    ds.pop_back();
    //don't pick the element 
    print(ind+1,ds,arr,n);
    
}
int main(){
    int arr[]={3,2,1};
    int n=3;
    vector<int> ds;
    print(0,ds,arr,n);
    return 0;
}