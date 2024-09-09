#include<iostream>
using namespace std;
void update(int arr[], int n){
    cout<< "Inside the function" << endl;
    arr[0] = 120;
    for(int i =0; i <n ; i++){
        cout<<arr[i] <<" ";

    }
    cout<<endl;
    cout<< "Going back to the main function "<< endl;
}
int main(){
    int arr[5]={1,2,3,4,5};
    update(arr,5);
    cout<< endl << "Printing in mainn function "<< endl;
    for(int i=0; i<=5 ; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}
