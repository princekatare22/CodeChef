/*
Problem
Hackerman wants to know who is the better player between Bob and Alice with the help of a game.

The game proceeds as follows:

First, Alice throws a die and gets the number A
Then, Bob throws a die and gets the number B
Alice wins the game if the sum on the dice is a prime number; and Bob wins otherwise.
Given A and B, determine who wins the game.

Input :

3
2 1
1 1
2 2

Output:

Alice
Alice
Bob

*/
#include <iostream>
using namespace std;

int main() {
    int t;
	cin >> t;
	int a,b;
	bool isPrime;
	while(t--)
	{
	    isPrime = true;
	    cin >> a >> b;
	    a = a+b;
	    for(int i = 2 ; i <= a/2 ; i++)
	    {
	        if(a % i == 0)
	        {
	            isPrime = false;
	            break;
	        }
	    }
	    if(isPrime == true)
	        cout << "Alice" << endl;
	    else
	        cout << "Bob" << endl;
	}
	return 0;
}
