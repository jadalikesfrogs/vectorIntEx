/*
Enter a list of positive integers into a vector. Type a negative number to stop entering. Print the results. pg 493
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
//enter a list of positive ints stored in a vector
	vector<int>nums;

	int someInt = 0;
	//type a negative number to stop

	do {
		cout << "An int? ";
		cin >> someInt;
		
		nums.push_back(someInt); // store it into the vector
	
	} while (someInt >= 0); // while the int is not negative, continue doing this loop

	nums.pop_back(); //remove the negative at the end of the list
	
	//print the resulting list
	for (size_t i = 0; i < nums.size(); i++) { // size_t is an unsigned int type (long long) b/c we dont know how list this list is. if i is less than the size of the list, move to the next index point
		cout << nums.at(i) << endl;
	}

	return 0;
}