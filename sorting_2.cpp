#include<iostream>
using namespace std;

//define a function for Bubble Sort 
void bubbleSort(int arr[],int n){
    for(int pass=0;pass<n-1;pass++ ){
        bool swapped=false;
        
        //compare the adjacent element and swap if required
        for(int i=0;i<n-pass-1;i++){
            if(arr[i]>arr[i+1]){
            //swap arr[i] with arr[i+1]
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            swapped=true;//swapping is done 
        }
        }
         if(!swapped){
        break;
         }
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
    bubbleSort(arr,n);
    
    
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    delete[] arr;
    return 0;
}