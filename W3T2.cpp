#include <iostream>
#include <fstream>

using namespace std;
//WEEK 3 TASK 2 "PRIME NUMBERS"

void prime(int x, int i, int count)						//FUNCTION;
{	
	while (x > i)										//ITERATES ALL VALUES FROM 1 UNTIL THE INPUT VALUE IS MET;
	{
		if (x % i == 0)									//CHECKS IF THE INPUT VALUE IS DIVISIBLE BY i;
		{
			prime(x, i + 1, count + 1);					//CALLS THE FUNCTION AGAIN INCREASING i AND THE COUNTER OF HOW MANY TIMES DID IT DIVIDE;
		}
		else if (x % i != 0)							
		{
			prime(x, i + 1, count);						//IF THE REMAINED IS NOT 0, CALLS THE FUNCTION AGAIN ONLY INCREASING i;
		}
		break;
	}	
	if (count == 1)										//IF THE VALUE DID NOT DIVIDE MORE THAN 1 TIME BEFORE REACHING IT'S OWN VALUE
														//PRINTS THAT THE NUMBER IS PRIME;
	{
		cout << "The number is prime" << endl;
	}
	else if (count > 1)									//IF THE VALUE DID DIVIDE MORE THAN 1 TIME, THEN IT IS NOT A PRIME NUMBER;
	{
		cout << "The number is not prime" << endl;
	}
	getchar();
}
int main()
{
	int x;
	cout << "Provide an integer value: " << endl;		//TAKES USER INPUT FOR THE REQUIRED VALUE;
	cin >> x;
	prime(x,1, 0);										//CALLS THE PRIME FUNCTION WITH THE USER INPUT, STARTING VALUE FOR i AND THE COUNTER;
}
