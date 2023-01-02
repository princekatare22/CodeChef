/*
Your teacher gave you an assignment — given an integer NN, construct a binary string B of length N such that:
max(bi ,bi+1)=1.

for every i from 1 to N-1.

What is the minimum number of 1's such a binary string can contain?

Note: A binary string is a string consisting of only the digits 0 and 1.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case contains a single integer N — the length of binary string you'd like to construct.
Output Format
For each test case, output on a new line the minimum number of 1's required to complete the assignment.

Input :

6
6
8
2
3
5
100

Output:

3
4
1
1
2
50

*/
#include <iostream>
using namespace std;

int main() {
    int t;
	cin >> t;
	int n;
	while(t--)
	{
	    cin >> n;
	    cout << n/2 << endl;
	}
	return 0;
}
