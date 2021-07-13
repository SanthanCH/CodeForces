#include<iostream>
#include<bits/stdc++.h>
#define lli long long int 
using namespace std;
bool isprime(int n){
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    lli i,j,k,n;
   
     int T;
    cin >> T;
    while (T--) {
        cin>>n;
        if(n==1){
            cout<<"FastestFinger\n";
            continue;
        }
        else if(n==2){
             cout<<"Ashishgup\n";
            continue;
        }
        else if(n%2==1){
            cout<<"Ashishgup\n";
            continue;
        }
        else if(ceil(log2(n))==floor(log2(n)))
        {
             cout<<"FastestFinger\n";
            continue;
        }
        else if(n%4==0){
               cout<<"Ashishgup\n";
            continue;
        }
        else if(isprime(n/2)){
            cout<<"FastestFinger\n";
            continue;
        }
        else
        {
             cout<<"Ashishgup\n";
            continue;
        }
        
        
    
      
      
    }
    }

