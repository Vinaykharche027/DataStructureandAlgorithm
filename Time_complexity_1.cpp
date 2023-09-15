// Data Structures:
// Complexity->It is analysis in data structure is crucial part of your algo.
// it help us to provide infor. about our algorithm or code ->
// How much of memory will occupy?
// How much of time it will take to execute your code?

// Complexity:
// Time Complexity:it is the amount of time an alogorithm or operation takes to  run a function with input data .
// with this, you will understanda how the algorithm exectuion time increases
// as you provide larger input of data.

// Big-O Notations

// Space complexity
// degree of polymonimoial:

// O(1)->constant time:
// algorithm takes a constant amount of time regardless of the input size.
// ex:access an element in array by index.

// O(log n)->Logarthimic time complexity->
// runntime time code grow ->binary search->

// O(n)->Linear time complexity:
// an+b->2n+1->linear equation:

// Linear unsorted list-ex

// O(n log n)->merge sort or quick sort->
// Linearthmic time

// Quadratic time->Nested loop over an array
// O(n^2)->running time is proprtional of square of the input size.
// (Matrix element representation)

// Exponential time:->recursively run 
// O(2^n)->running time double with respect to input .
// O(n!)->factorial time complexity->Rare and highly inefficient.

// Space complexity:
// Space complexity measure the amount of the memory an algorithm or code
// requires a function of input size.

// O(1)->constant space->algorithm code which uses a fixed amount of memory 
// regardless of the input size.
// O(n)->Linear space->amount of memory used directly proptional to input size.
// O(log n)->Logarthmic space->
// O(n^2)->Quadratic space

// Analysis:
// Best Case: min-time or space for any input.
// Average case: expect performance overall possible input.
// Worst case:max time or space for any input.

// Amortized analysis:
// Dynamic array->ArrayList->expensive operation->
// Big Omega->  
// Big Theta->

// 1.Constant time complexity:
#include<iostream>
using namespace std;

int main(){
    int a=5;->1 unit
    int b=10;->1 unit
    int result=a+b;->1 unit
    cout<<result;
    return 0;
}

// constant->Time and space complexity
// Time->O(1)->it is performing a fixed number 
// of operation like assignmen,addition,print 
// Space->O(1)->constant amount memory->Result variable