// Selection sort:
// Step1:Intitial State
// Sorted  (left)                  Unsorted(right)
//     empty                   [5,3,1,4,2]
// Step2:find minimum element.
// 1 -min 
// Step3:Swap the First Element

// [1]                              [3,5,4,2]

// Step:3 Find the min. element 
// ->min element->2
// [1,2]                        [5,4,3]

// Step4: min element-3
// [1,2,3]                      [5,4]

// Step:min element->4
// [1,2,3,4]   

// Sorted                     unsorted
// [1,2,3,4,5]                []

// Code Selection Sort:
#include<iostream>
using namespace std;

//Function to perform selection sort
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        //find the minimum element in unsorted array 
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }      
        //swap the min element with first element       
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
    
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;//size 
    //Dynamic memory 
    int* arr=new int[n];
    cout<<"Enter "<<n<<" elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //call selectionSort function 
    selectionSort(arr,n);   
    cout<<"Sorted Array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }   
    return 0;
}