#include <iostream>
#include <vector>

bool isVectorMult10(std::vector<int> myVec);
bool isVectorNoMult10(std::vector<int> myVec);

int main() {
	int initialSize;

	std::cin >> initialSize;

	std::vector<int> vectorToUse(initialSize);

	for (int i = 0; i < initialSize; i++) {
		int temp;
		std::cin >> temp;
		vectorToUse.push_back(temp);
	}

	if (isVectorMult10(vectorToUse)) {
		std::cout << "all multiples of 10" << std::endl;
	}
	else if (isVectorNoMult10(vectorToUse)) {
		std::cout << "no multiples of 10" << std::endl;
	}
	else {
		std::cout << "mixed values" << std::endl;
	}


	return 0;
}

bool isVectorMult10(std::vector<int> myVec)
{
	unsigned int i;
	for (i = 0; i < myVec.size(); i++) {
		if (myVec.at(i) % 10 != 0) {
			return false;
		}
	}
	return true;
}

bool isVectorNoMult10(std::vector<int> myVec)
{
	unsigned int i;
	for (i = 0; i < myVec.size(); i++) {
		if (myVec.at(i) >= 10) {
			if (myVec.at(i) % 10 == 0) {
				return false;
			}
		}
	}
	return true;
}
