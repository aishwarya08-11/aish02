#include<iostream>
using namespace std;

void Pattern1(int n){


     for(int i =0; i<=n; i++){
         for(int j=0; j<=i; j++){
            cout<<"*";

         }
         cout<<endl;
     }
}

int main(){
    int n;
    Pattern1(n);
    cout<<"Enter n";
    cin>>n;
    
    return 0;
}