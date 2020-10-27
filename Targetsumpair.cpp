//Two  pointer approach target sum pair 
//when the array is sorted
//time complexity - O(n)

#include <iostream>
using namespace std;
int main() {
    int N;
    int key;
    cin  >> N;
    int a[] = { 1, 2, 3, 4, 5};
    
    int s = 5;
     
     int i = 0;//pointer at start
     int j =sizeof(a)/ sizeof(int)- 1; //pointer at end

     while(i<j){
         int current_sum = a[i] + a[j];
         if(current_sum > s){
             j--;
         }
         else if(current_sum < s){
             i++;
         }
         else
         {
             cout<< a[i] << " and " << a[j] <<endl;
             i++;
             j--;
         }
     }
     return 0;
}
