// CPP program to demonstrate working of string
// find to search a string

/*#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "geeksforgeeks a computer science";
	char c = 'g';

	// Find first occurrence of 'g'
	size_t found = str.find(c);
	if (found != string::npos)
		cout << "First occurrence is " << found << endl;

	// Find next occurrence of 'g'
	found = str.find(c, found+1);
	if (found != string::npos)
		cout << "Next occurrence is " << found << endl;

	return 0;
} */


// CPP program to demonstrate working of string
// find to search a string
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "geeksforgeeks a computer science";

	/// Only search first 5 characters of "geeks.practice"
	size_t found = str.find("amiee", 0, 2); ///string ,startine index,length of string
	cout<<found<<endl;
	//if (found != string::npos)
		//cout << found << endl;

	return 0;
}
