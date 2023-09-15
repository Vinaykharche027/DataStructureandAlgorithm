#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

//dynamic allocation of array =>STL->Java-ArrayList 
// List
vector<int> numbers(n);

for(int i=0;i<n;i++){
    cin>>numbers[i];
}
}

// Time complexity->O(n)
// Space complexity->dynamic array->vector->linear ->O(n)