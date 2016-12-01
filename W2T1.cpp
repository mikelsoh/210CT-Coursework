#include <iostream>
#include <cmath>

using namespace std;
//WEEK 2 TASK 1 "PERFECT SQUARES"
int main()
{
	int userInput;
	int solution;
	cout << "Input an intiger: ";
	cin >> userInput;

	for (int i = 0; i < userInput; i++)						//CHECKS EVERY VALUE, WHICH IS SMALLER THAN THE INPUT
	{
		if (pow(i, 2) == userInput)							
		{
			solution = userInput;							
		}
		else if (pow(i,2) < userInput)
		{
			continue;										//IF THE VALUE IS SMALLER THAN THE INPUT,
															//CONTINUES TO THE NEXT VALUE IN THE LOOP
		}
		else
		{
			solution = pow((i-1),2);						//IF THE VALUE IS BIGGER THAN THE INPUT, RETURNS
															//TO THE PREVIOUS VALUE
			break;
		}
	}
	cout << "The highest perfect square is: " << solution;
	while(true);
}
