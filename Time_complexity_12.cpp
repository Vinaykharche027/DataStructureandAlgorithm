//Factorial Time & Space Complexity
#include<iostream>
using namespace std;


int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n* factorial(n-1);
}

int main(){
    
    int n;
    cin>>n; 
    int result=factorial(n);
    cout<<result;
}

// Time complexity->
// O(n!)->factorial ->function recursive ->

// Space complexity->
// Internally ,call stack(stack memory)-> n level ->
// O(n)->Linear space complexity 

