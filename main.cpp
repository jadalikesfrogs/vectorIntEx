/*
Enter a list of positive integers into a vector. Type a negative number to stop entering. Print the results. pg 493
*/

#include <iostream>
#include <vector>

using namespace std;

/*
function	getIntegerInVector(vector<int>& nums)
param in,out vector<int>& nums is a collection of non-negative ints
pre			vector is delcared in the calling function
post		nums will have 0 or more additional non negative integers appended. nums will be unchanged if a negative number was supplied
return		the integer was entered by the user
brief		get a vlid non negative integer from the user into the back of nums
*/

int getIntegerInVector(vector<int>& nums);

int main() {
//enter a list of positive ints stored in a vector
	vector<int>nums;

	int someInt = 0;
	//type a negative number to stop

	do {
	
		cout << "Enter a positive integer (negative to quit): ";
	
	} while (getIntegerInVector(nums) >= 0);
	/*
	do {
		cout << "An int? ";
		cin >> someInt;
		
		nums.push_back(someInt); // store it into the vector
	
	} while (someInt >= 0); // while the int is not negative, continue doing this loop

	nums.pop_back(); //remove the negative at the end of the list
	*/
	//print the resulting list
	for (size_t i = 0; i < nums.size(); i++) { // size_t is an unsigned int type (long long) b/c we dont know how list this list is. if i is less than the size of the list, move to the next index point
		cout << nums.at(i) << endl;
	}

	return 0;
}

int getIntegerInVector(vector<int>& nums){
	
	int someInt = 0;
	cin >> someInt;

	if (someInt >= 0) {
		nums.push_back(someInt);
	}
	return someInt;
}
