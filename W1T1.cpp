#include <iostream>
#include <string>
#include <stdlib.h>
#include <map>
#include <time.h>

//WEEK 1 TASK 1 "SHUFFLING INTEGERS"   BigO Notation = O(n)
using namespace std;

int main()
{
/*1*/	srand(time(NULL));							//USED FOR ASSURING EVERY TIME THE CODE IS RUN THE RANDOM NUMBER CHANGES

/*1*/	int n[8];									//ARRAY OF INTEGERS WITH THE SIZE OF 8
/*1*/	int j;
/*n*/	for (int i = 0; i < 8; i++)
	{
/*n*/		cout << "Input an intiger: ";			//FOR LOOP FOR ADDING INTEGERS TO THE ARRAY BASED ON USER INPUT
/*n*/		cin >> n[i];
	}

/*1*/	int r;
/*n*/	for (int i = 0; i < 8; i++)
	{
/*n*/		r = rand() % 7;							//RANDOM NUMBER GENERATOR USING THE BUILT IN rand FUNCTION
/*n*/		if (r != i)
		{
/*n*/			int j = n[i];						//THE INTEGERS ARE BEING SWAPPED AROUND WITH THE HELP OF A TEMPORARY INT j
/*n*/			n[i] = n[r];
/*n*/			n[r] = j;
		}
	}
	
/*n*/	for (int i = 0; i < 8; i++)					//PRINTS THE RANDOMISED ARRAY OF INTEGERS
	{
/*n*/		cout << n[i];
	}

	
	while (true);
	return 0;
}