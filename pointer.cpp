/*You will be given an array of  integers and you have to print the integers in the reverse order.

Input Format

The first line of the input contains ,where  is the number of integers.The next line contains  space-separated integers.

Constraints


, where  is the  integer in the array.

Output Format

Print the  integers of the array in the reverse order, space-separated on a single line.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
      cin>>arr[i];  
    }
      for(int j=N-1;j>=0;j--){
          cout<<arr[j]<<" ";
      }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
