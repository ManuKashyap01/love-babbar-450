#include<iostream>
using namespace std;
//Reversing the array using recursion
void reverse(int *arr,int start,int end){
    if(start>=end){
        return;
    }
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reverse(arr,start+1,end-1);  
}
int main(){
    int n;
    cin>>n;
    int* arr=new int[n];
    //Taking input in the array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //printing without reversing the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    //Reversing the array by swapping
    for(int i=0,j=n-1;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    cout<<"After Reversing"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    delete []arr;
}
