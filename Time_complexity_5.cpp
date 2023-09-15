#include<iostream>
using namespace std;
int main(){
    in n;
    cin>>n;


    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum;
    
}
// Time complexity?
// Time->O(n)