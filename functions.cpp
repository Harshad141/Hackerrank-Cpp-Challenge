#include <iostream>
#include <cstdio>
#include<math.h>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int max=a;
    int arr[4]={a,b,c,d};
    for(int i;i<=4;i++)
    {
      if(max <arr[i])
      {
        max=arr[i];
      }
    }
    return max;
    
}



int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;
    
    return 0;
}
