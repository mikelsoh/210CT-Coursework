#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//WEEK 3 TASK 3 "REMOVING VOWELS"
void vowels(string word, int position)							//FUNCTION FOR REMOVING VOWELS, TAKES USER INPUT;
{
	cout << word << endl;
	if (position != -1)											//SETTING THE BASE CASE
	{
		if (word.at(position) == 'a')								//EACH IF STATEMENT HANDLES A VOWEL;
		{
			word.erase(word.begin() + position);					//IF THE CHARACTER AT THE CURRENT POSITION (GOING BACKWARDS) IS EQUAL TO THE STATED ONE,
																	//IT GETS DELETED;
			vowels(word, position - 1);								//FUNCTION GETS CALLED AGAIN WITH THE MODIFIED WORD AND POSITION TO LOOK AT;
																	//IF STATEMENTS CHECK FOR BOTH CAPITAL AND LOWERCASE LETTERS;
		}
		else if (word.at(position) == 'A')
		{
			word.erase(position, 1);
			vowels(word, position - 1);
		}
		else if (word.at(position) == 'e')
		{
			word.erase(position, 1);
			vowels(word, position - 1);
		}
		else if (word.at(position) == 'E')
		{
			word.erase(position, 1);
			vowels(word, position - 1);
		}
		else if (word.at(position) == 'i')
		{
			word.erase(position, 1);
			vowels(word, position - 1);
		}
		else if (word.at(position) == 'I')
		{
			word.erase(position, 1);
			vowels(word, position - 1);
		}
		else if (word.at(position) == 'u')
		{
			word.erase(position, 1);
			vowels(word, position - 1);
		}
		else if (word.at(position) == 'U')
		{
			word.erase(position, 1);
			vowels(word, position - 1);
		}
		else if (word.at(position) == 'o')
		{
			word.erase(position, 1);
			vowels(word, position - 1);
		}
		else if (word.at(position) == 'O')
		{
			word.erase(position, 1);
			vowels(word, position - 1);
		}
		else
		{
			vowels(word, position - 1);									//IF NO VOWELS WERE FOUND AT THE CURRENT LOCATION, THE FUCTION MOVES ON TO THE NEXT ONE;
		}
	}
}
int main()
{
	string word;
	cout << "Please input a word: " << endl;
	cin >> word;
	int position = word.length() - 1;								//DEFINES THE STARTING POSITION;
	vowels(word, position);											//CALLS THE FUNCTION WITH USER INPUT AND POSITION ATRIBUTES;
}