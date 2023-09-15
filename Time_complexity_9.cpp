// Exponential TIme and space complexity:
#include<iostream>
using namespace std;
//defining of fibonacci function 
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);//recursive 
}

int main(){
    int n;
    cin>>n;
    int result=fibonacci(n);//function calling 
    cout<<result<<" ";

}

// fibonacci function uses ->recursive call internally->Exponential form
// O(2^n)->time complexity

// Space complexity:O(n)->Linear space->Recursion internally stack memory->
// call stack grow up->n  level 