/*Given a positive integer , do the following:

If , print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
If , print Greater than 9.
Input Format

A single integer, .

Constraints

Output Format

If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9.

*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    string num[]={"","one","two","three","four","five","six","seven","eight","nine"};
    cin >> N;
    
    if(N<=9){
        cout<<num[N]<<endl;
    }
    //another method to complete the program.
    /*if (N == 1) {
        cout << "one" << endl;
    } else if (N == 2) {
        cout << "two" << endl;
    } else if (N == 3) {
        cout << "three" << endl;
    } else if (N == 4) {
        cout << "four" << endl;
    } else if (N == 5) {
        cout << "five" << endl;
    } else if (N == 6) {
        cout << "six" << endl;
    } else if (N == 7) {
        cout << "seven" << endl;
    } else if (N == 8) {
        cout << "eight" << endl;
    } else if (N == 9) {
        cout << "nine" << endl;
    }*/ 
    else {
        cout << "Greater than 9" << endl;
    }
 
   return 0;
}

