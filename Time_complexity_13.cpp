#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>n;
    
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"*";
            j=j*2;
        }
        cout<<endl;
        i=i*2;
    }
    
}
// Find the Time and space compleixty  of the code 
// Time complexity->O(log n)

// Find the Time and space compleixty  of the code 
// constant amount memory ->fixed amount of memory-> O(1)
// Time complexity analysis of iterative code:
int fun(int n){
    int result=5;
    return result;
}

// Time complexity ananlysis?

// Operator->Assignment operator 1 unit of amount of time-> 1->constant unit
// constant->O(1)->

int fun1(int n){
    int sum=0;->1
    for(int i=0;i<n;i++){
        sum=sum+i;->2n
    }
    return sum;
}

// O(n*1)=>O(n)=>2n^1+1n^0->O(n)->Linear time complexity
// Time complexity:?

// int sum=0->sum variable initialize->O(1)
// for loop->n times run->1 time of unit->n times->n times
// O(n)->


int fun(int n){
    int count=0;->1unit -O(1)
    while(n>1){
        n=n*2;
        count++;
    }
    return count;
}

// 10>1->10/2->5
// 5>1->5/2->2 
// 2>1->2/2->1
// 1>1-false
// n to 1 reduxed
// Time compleixity->O(log n)



int fib(int n){
    if(n<=0){
        return 1;->O(1)
    }else{
        return fib(n-1)+fib(n-2);->recursive->
    }
}

// recursive code->
// function is called for more than one times->
// O(2^n)->exponential complexity

// // 0 1  1 2 3 5
// 1000->
// 2^n->exponential ->
// 100->
// // 3->2+1=3


int fun(int arr1[],int arr2[],int n ){
    int result=0;->O(1)
    for(int i=0;i<n;i++){
        result=result+arr1[i];
    }->O(n)
    
    for(int j=0;j<n;j++){
        result=result+arr2[j];
    }->O(n)
    
    return result;
}

// Time complexity:
// Linear complexity->this code contain 2 separate loop.>
// n->2n->running to execute will be doubled because of 2 loops ->
// O(n)->Linear complexity

// Complexity with two array will be O(n)

int fun(int arr[],int n,int key){
    int left=0;
    int right=n-1;
    while(left<=right){
        int middle=left+(right-left)/2;
        if(arr[middle]===key){
            return middle;
        }else if(arr[middle]<key){
            left=middle+1
        }else{
            right=middle-1;
        }
    }
    return -1;
}

// Binary Search Alogorithm 
// O(log n)-time complexity

// 100->roll number-

// 100/2->50-less->0-50-
// 45->


int largestpowerofTwo(int n){
    int result=1;->O(1)
    while(result*2<=n){
        result=result*2;
    }
    return result;
}

// Time Complexity
// Space Complexity
// result->2 times grow-> time taken will be less to execute the code
// iteration->logarithmic 
// O(log n)

// stack->fixed

// Space-O(1)->code->data->fixed or dynamic data 
// future=>input runt time change=>vector or collection or dynamic memory
// dynamic-heap memory->



int countDigit(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}


// Time & Space complexity->
// 100/10->10/10->1/10->0 
// n value is divided by 10 untill values becomes 0 .
// each division reducing n /10 ->number of iteration will be in Logarithmic division 
// O(log n)
// Space->O(1)->constant->it used fixed amount of memory.