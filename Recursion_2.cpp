#include<iostream>
using namespace std;
//recursive function
int sOnatNumbers(int n){
    //base condition->When n value is 0->return sum of the number is ->0
    if(n==0){
        return 0;
    }else{
        //recursive call ->sOnatNumbers->(n-1) and we will add n 
        return n+sOnatNumbers(n-1);
    }
}
int main(){
    int num;
    cin>>num;
    int result=sOnatNumbers(num);
    cout<<result;
}