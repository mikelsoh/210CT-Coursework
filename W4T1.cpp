#include <iostream>
#include <array>

using namespace std;
//WEEK 4 TASK 1 "BINARY SEARCH"
bool binarySearch(int numbers[], int low, int high, int left, int right) //FUNCTION FOR BINARY SERCH
{
	while (left <= right)
	{
		int mid = (left + right) / 2;							//FINDS THE MIDDLE OF THE ARRAY
		if (numbers[mid] >= low && numbers[mid] <= high)		//IF THERE IS A NUMBER IN THE SELECTED RANGE RETURNS TRUE(1)
		{
			return true;
		}
		else if (numbers[mid] < low || numbers[mid] > high)		//IF THE NUMBER IS SMALLER THAN THE PROVIDED RANGE
		{														//IT CHECKS THE RIGHT SIDE
			right = mid - 1;
		}
		else
		{
			left = mid + 1;										//OTHERWISE CHECKS THE LEFT
		}
	}
	return false;												//IF NO NUMBER WAS FOUND, RETURNS FALSE(0)
}

int main()
{
	int numbers[] = { 3, 4, 5, 6, 11, 90 };
	cout << binarySearch(numbers,11, 65, 1, 7);

	getchar();
}