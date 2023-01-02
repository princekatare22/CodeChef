/*
Problem
King loves to go on tours with his friends.

King has N cars that can seat 5 people each and M cars that can seat 7 people each. Determine the maximum number of people that can travel together in these cars.

Input Format
The first line of input contains a single integer T, the number of test cases.
The first and only line of each test case contains two space-separated integers N and M — the number of 5-seaters and 7-seaters, respectively.
Output Format
For each test case, output on a new line the maximum number of people that can travel together.

Input : 

4
4 8
2 13
14 5
8 8

Output :

76
101
105
96

*/
#include <iostream>
using namespace std;

int main() {
    int t;
	cin >> t;
	int n , m;
	while(t--)
	{
	    cin >> n >> m;
	    cout << n*5 + m*7 << endl;
	}
	return 0;
}
