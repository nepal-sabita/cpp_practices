/*In this challenge, you will use a for loop to increment a variable through a range.

Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b,n;
    string alpha[]={"","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;
    
    for(n=a;n<=b;n++){
        if(n<=9){
            cout<<alpha[n]<<endl;
        }
        else if(n%2 ==0)
        {
         cout<<"even"<<endl;   
        }
        else{
            cout<<"odd"<<endl;
        }
    }
    
    // Complete the code.
    return 0;
}
