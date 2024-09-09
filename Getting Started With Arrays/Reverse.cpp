#include<iostream>
using namespace std;
void rev(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start< end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";

    }
    cout<<endl;

}
int main(){
    int arr[10]={1,2,22,31,24,35,32,43,33,76};
    int brr[8]={1,2,33,44,55,76,74,22};
    rev(arr,10);
    rev(brr,8);
    printArray( arr ,10);
    printArray( brr ,8);

}