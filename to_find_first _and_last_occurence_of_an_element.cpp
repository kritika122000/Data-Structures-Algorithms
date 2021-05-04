#include <iostream>
using namespace std;
int first_occurence(int *a, int n , int key ){
   if(n == 0){
       return -1;
   }
   //rec case
   if(a[0]== key){
       return 0;
   }
   int  i = first_occurence(a+1, n-1, key);
   if(i== -1){
       return -1;
   }
   return i+1;

}
//linear search 
int linear_search_first_occ(int *a, int i,int n , int key){
    //base case 
    if(i == n){
        return -1; // to stop the recurrsion
    }
    if(a[i]== key){
        return i;
    }
    return linear_search_first_occ(a, i+1, n, key);
}


//to find the last occurence of key in the given array
int last_occurence(int*a, int n, int key){
    //base case 
    if(n == 0) return -1;
    int i = last_occurence(a+1, n-1, key);
    if(i == -1){
        if(a[0]== key){
            return 0;
        }
        else
          {
              return -1;

          }
    }
    return i+1;
}
int main() {
    int arr[] = {1, 2, 6, 7, 9, 6, 0};
    int key = 6;
    int n = sizeof(arr)/ sizeof(int);

    //cout<<first_occurence(arr, n, key);
    //cout<<linear_search_first_occ(arr, n, key);
    cout<<last_occurence(arr, n, key);
    return 0;
}
