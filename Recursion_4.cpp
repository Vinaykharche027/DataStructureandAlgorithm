// Recursion trace:
#include<iostream>
using namespace std;
//recursive function
int sod(int n){
    //base case->when n is 0 or n<10 sum of num will be itslef
    if(n<10){
        return n;//same number itself.
    }else{
        return n%10+sod(n/10);
    }
}
int main(){
    int num;
    cin>>num;
    int result=sod(num);
    
    // while(n!=0){
    //     //logic 
    // }
    cout<<result;
}