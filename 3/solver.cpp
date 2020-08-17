#include <iostream>
#include <math.h>

int main(int argc, char **argv) 
{
	std::string strNum = argv[1];
	std::size_t pos;
	int x = std::stoi(strNum, &pos);
	int p = 2;	
	if (x <= 1) {
		std::cout << "1 is prime." << std::endl;
		return 0;
	}
	if (x >= pow(p, p)) {
		if (x % p == 0) {
			
		} else {
			std::cout << p << std::endl;
		}	
	} else {
		std::cout << "x: " << x << " >= " << "p: "  << p << std::endl;
	}
	
	return 0;
}
