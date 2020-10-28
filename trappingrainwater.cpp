//rain water harvesting using two pointer approach
//time complexity O(n)

#include <iostream>
using namespace std;

int max_water(int arr[], int n){
    int water = 0; //to store the final ans
    int left_max = 0; //current max of left side
    int right_max = 0; 

    int lo = 0; 
    int hi = n-1;
    while(lo<= hi){
        if(arr[lo] < arr[hi]){
            if(arr[lo] > left_max)
                left_max = arr[lo];
            else
                water += left_max - arr[lo];
            lo++;
        }
        else{
            if(arr[hi]> right_max)
                right_max = arr[hi];
            else
                if(arr[hi] > right_max)
                    right_max = arr[hi];
                else 
                    water += right_max - arr[hi];
                hi--;
        }
    }
    return water;
}
int main() {
    int n;
	cin>>n;
	int arr[n];

    for(int i=0;i<n;i++)
	cin>>arr[i];

    max_water(arr, n);
    cout<<max_water(arr, n)<<endl;
    return 0;
}
