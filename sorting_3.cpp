// Insertion Sort:
// Initial State:
// Sorted(Left)---------UnSorted(right)
//                                    [5,3,1,4,2]
// Step2:Insert 3 into sorted portion
// [3]                            [5,1,4,2]
// Step3:Insert 1 into the sorted portion
// [1,3]                        [5,4,2]
// Step4:Insert 4 into sorted portion
// [1,3,4]                       [5,2]
// 2->
// [1,2,3,4]                      [5]
// [1,2,3,4,5]
// O(n^2)

#include<iostream>
using namespace std;

//define a function for Bubble Sort 
void insertionSort(int arr[],int n){
    //iterate through loop
    for(int i=1;i<n;i++){
        //current element to be inserted into sorted 
        int key=arr[i];//3
        //index of the last element in sorted portion 
        int j=i-1;//0
        
        //Move elements of sorted portion of the array that 
        //are greater than key to right
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        //insert value to correct position
        arr[j+1]=key;
    }
   
}

int main(){
    int n;
    cout<<"Enter the number of elements in an array:";
    cin>>n;
    
    //dynamically allocate the memory 
    int* arr=new int[n];   
    cout<<"Enter the elements in an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }  
    //call bubble sort function to sort the array 
    insertionSort(arr,n);
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }   
    cout<<endl;    
    delete[] arr;
    return 0;
    
}
