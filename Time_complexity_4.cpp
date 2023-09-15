// Quadratic complexity:
//Quadratic time complexity->O(n^2)
#include<iostream>

int main(){
    int n;
    cin>n;
    //matrix,pattern ,arrays, string ,sorting 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<j;
        }
    }
}
// 1st loop->n times
// 2nd loop ->n times
// n*n ->n^2 