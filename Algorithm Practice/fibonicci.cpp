//Find fibonacci series

//I will use Binets farmula to generate the Series
//farmula is ((1+sqrt(5))^n  - (1-sqrt(5))^n)/(2^n*sqrt(5))

#include<bits/stdc++.h>
#define phi (1+sqrt(5))*0.5
using namespace std;
int findFibonacci(int n);
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<findFibonacci(i)<<endl;
    }
return 0;
}

int findFibonacci(int n)
{
    double fib = (pow(phi,n) - pow(1-phi,n))/sqrt(5);
    return (int)(fib);
}