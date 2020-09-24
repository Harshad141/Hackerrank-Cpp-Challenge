revrse an array

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  
    int arr[1000], size, i, j, temp;
    cin>>size;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    j=i-1;  // now j will point to the last element
    i=0;   //  and i will be point to the first element
    while(i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
