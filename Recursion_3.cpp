// Write a code to generate nth Fibonacci number using recursion.
#include<iostream>
using namespace std;
//recursive function
int fib(int n){
   if(n==0){
       return 0;
   }else if(n==1){
       return 1;
   }else {
       return fib(n-1)+fib(n-2);//addition of previous 2 numbers 
   }
}
int main(){
    int num;
    cin>>num;
    int result=fib(num);
    cout<<result;
}