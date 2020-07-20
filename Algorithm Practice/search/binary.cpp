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
    //left hold the lover bound of the array where no could be found
    int left=0;
    //right hold hold the upper boud of the array
    int right=n-1;

    while(left<=right){
        int k=(left+right)/2;
        if(arr[k]==find){
            cout<<k<<endl;
            break;
        }
        if(arr[k]>find){
            //if given no id smaller then left mid value then no sould be at left side
            //left===========no============mid========================right
            right=k--;
            //left===========no===========right
        }
        else{
            //if given no is greater then mid value then no should be in right side
            //left========================mid=============no===========right
            left=k++;
            //============================left==============no===========right
        }
    }
}