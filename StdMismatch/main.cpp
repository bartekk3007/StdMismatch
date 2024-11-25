#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v1 = {1, 2, 3, 4, 5, 6};
	std::vector<int> v2 = {1, 2, 3, 6, 10, 15};

	std::pair<std::vector<int>::iterator, std::vector<int>::iterator> mismatchPair = std::mismatch(v1.begin(), v1.end(), v2.begin());
	std::cout << "Firt mismatch from v1 is " << *mismatchPair.first << "\n";
	std::cout << "Firt mismatch from v1 is " << *mismatchPair.second << "\n";

	return 0;
}