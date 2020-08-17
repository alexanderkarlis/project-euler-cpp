#include <iostream>
#include <cstdlib>
#include <string>


int main(int argc, char **argv) {
	int goodNums[100];
	/* std::vector<int> arr; */
	std::string strNum = argv[1];
	std::size_t pos;
	int x = std::stoi(strNum, &pos);
	int acc = 0;
	for(int i = 1; i <= x; i++) {
		if ( i % 3 == 0 || i % 5 == 0) {
			std::cout << i << std::endl;
			acc += i;
		}
	};
	std::cout << acc << std::endl;
	return 0;
}
