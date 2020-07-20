#include<bits/stdc++.h>
using namespace std;
// 0(log n)
int main(){
    int n;
    cout<<"enter ther size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the data of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //sorting the array because for binary search array shold be sorted
    sort(arr,arr+n);
    cout<<"Enter the no to find"<<endl;
    //find hold the no which needed to be searched 
    int find;
    cin>>find;
    int k=0;
    for(int b=n/2;b>=1;b/=2){
        while(k+b<n && arr[k+b]<=find){
            k+=b;
        }
        if(arr[k]==find){
            cout<<"found"<<endl;
            cout<<k<<endl;
            break;
        }
    }
}