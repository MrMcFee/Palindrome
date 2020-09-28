#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char string[81];
  char string2[81];
  char string3[81];
  cin.get(string, 81);
  cin.get();
  int i, j;
  int length = strlen(string);
  for (i = 0, j = 0; i < length; i++) {
    if ((string[i] != ' ') && (ispunct(string[i]) == false)) {
      string2[j] = tolower(string[i]);
      j++;
    }
  }
  strcpy(string, string2);
  cout << string << endl;
  cout << string2 << endl;
  for (int k = length - 1; k >= 0; k--) {
    cout << string2[k];
    int compare = strcmp(string, string2);
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
