#include <iostream>
#include <vector>

using namespace std;
//WEEK 5 TASK 1 "SUBSEQUENCES"
void subSequence(int i, vector<int> longestSeq, vector<int> compareSeq)					//RECURSIVE FUNCTION, WHICH TAKES 3 ARGUMENTS
{
	vector<int> L = { 1, 2, 3, 4, 5, 6, 7, 8, 1, 5,6, 1, 6, 7 };							//VECTOR OF PROVIDED INTEGERS IN A SEQUENCE
	int maxLength = L.size() - 1;														//GETS THE MAXIMUM LENGTH OF THE VECTOR
	while (i < maxLength)		
	{
		if (L[i] < L[i + 1] || L[i] > L[i - 1])			//CHECKS IF THE ELEMENT IS SMALLER THAN THE NEXT ONE OR BIGGER THAN THE PREVIOUS ONE
		{
			if (longestSeq.empty() == true)				//GOES THROUGH IF longestSeq VECTOR IS EMPTY
			{
				longestSeq.push_back(L[i]);
				subSequence(i + 1, longestSeq, compareSeq);		//FUCTION GETS CALLED AGAIN INCREASING i
			}
			else if (longestSeq[longestSeq.size() - 1] <= L[i] && compareSeq.empty() == true)	//CHECKS IF THE NEXT ELEMENT OF THE PROVIDED VECTOR IS
			{																				//BIGGER THAN THE LAST ONE IN THE SUBSEQUENCE VECTOR
				longestSeq.push_back(L[i]);
				subSequence(i + 1, longestSeq, compareSeq);
			}
			else if (longestSeq.size() >= compareSeq.size())				//WHEN THERE ARE NO MORE INTEGERS, WHICH CAN TO THE longestSeq VECTOR, THEY GET
																			//STORED IN THE COMPARING VECTOR INSTEAD
			{
				compareSeq.push_back(L[i]);
				if (compareSeq.size() > longestSeq.size())					//IF THE COMPARING VECTOR'S SIZE IS BIGGER THAN THE longestSeq VECTOR, THEY GET SWAPPED
																			//AND CONTENTS OF THE COMPARING VECTOR ARE CLEARED
				{
					longestSeq = compareSeq;
					compareSeq.clear();
					subSequence(i + 1, longestSeq, compareSeq);
				}
				subSequence(i + 1, longestSeq, compareSeq);
			}
		}
		break;
	}
	for (int i = 0; i < longestSeq.size(); i++) 
	{
		cout << longestSeq[i] << " " ;	
	}
	cout << endl;
}

int main() 
{
	vector<int> temp;
	vector<int> compare; 
	subSequence(0, temp, compare);
	while (true);
}
