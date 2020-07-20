//generating subset using recusrsion 
//Ex subset of {0,1,2} are {} 0 1 2 01 02 12 012 
#include<bits/stdc++.h>
using namespace std;

vector<int> subset;
int n=3;

void search(int k){
    if(k==n ){
        cout<<"k==n";
    }
    else{
        search(k+1);
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
    }
}

int main(){
    search(5);

    return 0;
}







