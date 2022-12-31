/*
Problem
Chef is on his way to become the new big bull of the stock market but is a bit weak at calculating whether he made a profit or a loss on his deal.

Given that Chef bought the stock at value XX and sold it at value YY. Help him calculate whether he made a profit, loss, or was it a neutral deal.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single line of input containing two space-separated integers XX and YY, denoting the value at which Chef bought and sold the stock respectively.
Output Format
For each test case, output PROFIT if Chef made a profit on the deal, LOSS if Chef incurred a loss on the deal, and NEUTRAL otherwise.

The checker is case-insensitive so answers like pROfiT, profit, and PROFIT would be considered the same.

Input :

4
4 2
8 8
3 4
2 1

Output:

LOSS
NEUTRAL
PROFIT
LOSS

*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int x ,y;
	while(t--)
	{
	    cin >> x >> y;
	    if(x > y)
	    {
	        cout << "LOSS" << endl;
	    }
	    else if(x == y)
	    {
	        cout << "NEUTRAL" << endl;
	    }
	    else
	    {
	        cout << "PROFIT" << endl;
	    }
	}
	return 0;
}
