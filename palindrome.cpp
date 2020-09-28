#include <iostream>
#include <cstring>

using namespace std;

int main() {
//Definitions/inputs
  char string[81];
  char string2[81];
  char string3[81];
  cin.get(string, 81);
  cin.get();
  int i, j;
  int length = strlen(string);
//Walks through the input and removes punctuation, spaces, and caps and puts into string2.
  for (i = 0, j = 0; i < length; i++) {
    if ((string[i] != ' ') && (ispunct(string[i]) == false)) {
      string2[j] = tolower(string[i]);
      j++;
    }
  }
  strcpy(string, string2);
//flips char array around, outputs result to line.
  for (int k = length - 1; k >= 0; k--) {
    cout << string2[k];
//This is where my code messes up. When comparing string and string 2, it takes the original string array and the original string2
//array and compares them, rather than the string2[k] flipped array, and I don't really know how to get it into the compare function.
//The function itself works fine, I just don't know how to get the correct array in.
    int compare = strcmp(string, string2);
//When it reaches the final char, it compares the flipped array and regular array and tells you if it's a palindrome or not
    if (k == 0) { 
      if (compare == 0) {
	cout << endl;
	cout << "Palindrome" << endl;
      }
      else {
	cout << endl;
	cout << "Not a Palindrome" << endl;
      }
    }
  }
  return 0;
}
