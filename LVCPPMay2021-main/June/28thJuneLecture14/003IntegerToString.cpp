/*

Design a recursive algorithm to print string representation of a non-negative integer.

Example :
	Input : n = 123
	Output: one two three

*/

#include<iostream>

using namespace std;

string digitRepr[] = {"zero", "one", "two", "three", "four", 
					  "five", "six", "seven", "eight", "nine"};
string ans="";
string integerToString(int n) {
    if(n<=0){
        return "";
    }
    int rem=n%10;
    int quotient=n/10;
    integerToString(quotient);
    ans+=digitRepr[rem]+" ";
    return ans;
}

int main() {
    int n;
    cin>>n;
   cout<<integerToString(n);
	return 0;
}
