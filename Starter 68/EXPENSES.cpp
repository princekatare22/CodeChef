/*
Problem
Chef has made a list for his monthly expenses. The list has N expenses with index 1 to N. The money spent on each expense depends upon the monthly income of Chef.

Chef spends 50% of his total income on the expense with index 1.
The money spent on the ith expense (i>1) is equal to 50% of the amount remaining, after paying for all expenses with indices less than ii.
Given that Chef earns 2^X rupees in a month, find the amount he saves after paying for all N expenses.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two space-separated integers N and X — where NN denotes the number of expenses and 2^X  denotes the monthly income of Chef.

Output Format
For each test case, output on a new line, the amount saved by Chef after paying for all N expenses.

Input :

4
1 2
1 3
2 3
3 4

Output : 

2
4
2
2

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	int n,x;
	int income,savings;
	while(t--)
	{
	    cin >> n >> x;
	    income = pow(2,x);
	    savings = income;
	    for(int i=0 ; i<n ; i++)
	    {
	        savings = savings - (income)/2;
	        income = income/2;
	    }
	    cout << savings << endl;
	}
	return 0;
}
