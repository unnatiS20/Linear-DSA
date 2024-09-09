#include <iostream>
#include <limits>
using namespace std;
int getMin(int num[], int n){
    int min = numeric_limits<int>::max();
    for(int i=0; i < n ; i++){
        
        if(num[i]<min){
            min = num[i];
          }

    }
    return min;

}
int getMax(int num[], int n){
    int max = numeric_limits<int>::min();
    for(int i=0; i<n; i++){
        // finding maximum element without using function
         if(num[i]>max){
            max = num[i];
        }

    }
    return max;
}
int main(){
   int size;
   cin >> size;
   int num[100]; // taking input in array
   for(int i=0 ; i < size ; i++){
    cin >> num[i];

   }
   cout<<"Maximum value is "<< getMax(num,size) <<endl;
   cout<<"Minimum value is "<< getMin(num,size) <<endl;
}