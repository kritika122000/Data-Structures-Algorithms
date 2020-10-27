#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    int key;
    cin  >> n;
    int a[1000];

    for(int i = 0; i< n; i++){
        cin>>a[i];
    }
    //to find largest and smallest numbers
     int largest = INT_MIN;
     int smallest = INT_MAX;

     for(int i = 0; i< n; i++){
         largest = max(largest, a[i]);
         smallest = max(smallest, a[i]);
     }
     cout << "largest" << largest <<endl;
     cout << "smallest" << smallest<<endl;

    return 0;
}
