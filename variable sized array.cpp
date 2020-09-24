#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int r, q, n;
    cin>>r>>q;
    int *arr[r];
    for(int i=0; i<r; i++){
        cin>>n;
        arr[i]=new int[n];
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for(int i; i<q; i++){
        int val1, val2;
        cin>>val1>>val2;
        cout<<arr[val1][val2]<<endl;
    }

    return 0;
}
