#include <iostream>
#include <vector>
using namespace std;



int main(){
    int n=5;
    //normal way find all subarray then compare O(n^3)
    int arr[5]={1,2,3,4,5};
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    int arr1[7] = {3,-4,5,4,-1,7,-8};
    //brute force approach O(n^2)
    int maxsum=INT8_MIN;
    for(int st=0;st<n;st++){
        int currsum=0;
        for(int end=st;end<n;end++){
            currsum+=arr1[end];
            maxsum=max(currsum,maxsum);
        }
    }
    cout<<"max subarray sum is "<<maxsum<<endl;

    // kadanes'salgorithm(most optimized) O(n)
    int currsum=0;
    maxsum=INT8_MIN;
    for(int val:arr1){
        currsum+=val;
        maxsum=max(currsum,maxsum);
        if(currsum<0){
            currsum=0;
        }
    }
    cout<<"maxsum in array is "<<maxsum<<endl;



    return  0;
}