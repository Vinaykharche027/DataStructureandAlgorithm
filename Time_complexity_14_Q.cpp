#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
             cout<<"*";
             j=j*2;
         }
         cout<<endl;
         i = i*2;
      }
}

// find the time and space complexity of the code?
// and:-

Time Complexity: O(log^2(n))
Space Complexity: O(1)