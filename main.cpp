#include<bits/stdc++.h>
using namespace std;

void recursion(vector<int> array, int* arr,int* brr,int n){
    if(n<0)return;

    array.push_back(arr[0]);
    array.push_back(brr[0]);

    return recursion(array,arr+1,brr+1,n-1);
}


int main(){


    int arr[] = {1,2,3,4,5};
    int brr[] = {1,2,3,4,5};
    vector<int> array;
    recursion(array,arr,brr,5);
    for(int i=0;i<array.size();i++)cout<<array[i]<<" ";
}