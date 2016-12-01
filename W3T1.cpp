#include <iostream>
#include <string>
#include <vector>

using namespace std;
//WEEK 3 TASK 1 "REVERSING A SENTENCE"   BigO Notation = O(n)
int main()
{
/*1*/ string sen;
/*1*/  vector<string> reversed;
/*1*/  string currentWord;
/*1*/   cout << "Type in a sentence: " << endl;
/*1*/  getline(cin, sen);							//ADDS VALUES TO THE STRING INCLUDING SPACES
   
/*n*/  for (int n = 0; n <= sen.length(); n++)
 {

/*n*/		if ((sen[n] == ' ' && !currentWord.empty()) || sen[n] == '\0') //CHECKS FOR SPACES,
																		  //IF FOUND THE WORD IS FINISHED, WITHOUT '\0' IT EXPECTS A SPACE IN THE END 
		 {															//OF THE SENTENCE TO ADD IN THE LAST WORD.

/*n*/		 reversed.insert(reversed.begin(), currentWord + " ");			//ADDS THE WORD IN THE VECTOR IN THE 1ST POSITION,

/*n*/		 currentWord.clear();										//CLEARS THE ADDED WORD TO GET READY FOR THE NEXT ONE
		 }
/*n*/		else
		 {
/*n*/		 currentWord += sen[n];								//IF THE WORD WAS EMPTY ADDS THE LETTER TO THE WORD
		 }
 }
/*n*/   for (int m = 0; m < reversed.size(); m++)						//FOR LOOP FOR PRINTING OUT THE VECTOR
		 {
/*n*/	   cout << reversed[m];
		 }
   getchar();
}