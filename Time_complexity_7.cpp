#include<iostream>
#include <vector>

// using namespace std;
int main(){
    int n;
    std::cin>>n;

//dynamic allocation of array =>STL->Java-ArrayList 
// List
std::vector<int> numbers(n);

for(int i=0;i<n;i++){
    std::cin>>numbers[i];
}

for(int i=0;i<n;i++){
    std::cout<<numbers[i];
}
}
// Time complexity->O(n)
// Space complexity->dynamic array->vector->linear ->O(n)