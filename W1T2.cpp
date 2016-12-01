#include <iostream>

using namespace std;
//WEEK 1 TASK 2 "TRAILING 0's"   BigO Notation = O(n)
/*1*/ int n;
/*1*/ uint64_t factorial;
/*1*/ uint64_t factor = 1;
/*1*/ int i = 2;
/*1*/ int trailingZ = 0;
int main()
{
/*1*/	cout << "Input a number: ";
/*1*/	cin >> n;
/*n*/	for (uint64_t i = n; i > 0; i--)				//CALCULATES THE FACTORIAL OF A NUMBER BY
	{												//GOING THROUGH ALL THE PREVIOUS NUMBERS BEFORE THE PROVIDED ONE
/*n*/		factor = factor * i;						//AND MULTIPLYING IT WITH THE PREVIOUS ONE
/*n*/		factorial = factor;
	}

/*n*/	while (i <= factor)
	{
/*n*/		if (factor % i == 0)						//CALCULATES THE TRAILING ZEROS BY DIVIDING THE FACTORIAL BY EVERY NUMBER
		{											//BEFORE IT AND COUNTS THE NUMBER OF 5's, WHICH REPRESENT THE NUMBER OF TRAILING 0's 
/*n*/			factor = factor / i;
/*n*/			if (i == 5)
			{
/*n*/				trailingZ = trailingZ + 1;
			}
		}
/*n*/		else
		{
/*n*/			i = i + 1;
/*n*/			continue;
		}
	}
/*1*/	cout << "The factorial of " << n << " is " << factorial << endl;		//PRINTS THE FACTORIAL OF THE NUMBER
/*1*/	cout << "Number of trailing zeros: " <<  trailingZ;						//PRINTS THE NUMBER OF TRAILING ZEROS
	while (true);
	return 0;
}