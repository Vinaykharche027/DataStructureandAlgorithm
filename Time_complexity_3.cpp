// Logarithm Time complexity:
//Logarithm Time->O(log n)
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;//3
    int i=1; //4<3
    while(i<n){
        cout<<i;//2
        i=i*2;//4 
    }
}

// While loop->double input value with i for every
// iteration ->
// n number times->O(log n)

// space->constant amount of memory