#include<iostream>
using namespace std;
//recursive 
int factorial(int n){
    //base condition=>n is 0 or 1 , ->1!
    if(n==0||n==1){
        return 1;
    }else{
        //call the recursive function with n-1 and multiply with n 
        return n*factorial(n-1);
    }
}
int main(){
    int num;
    cin>>num;//5
    if(num<0){
        cout<<"Factoial is not possible for negative number";
    }else{
        int result=factorial(num);//call
        cout<<result;
    }
}