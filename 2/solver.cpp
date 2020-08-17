#include <iostream>
#include <math.h>

void fib(int n, int m, int total) 
{	
	if ((n + m) % 2 == 0) {
		total += (n + m);
	}
	int oldN = n;
	int oldM = m;
	m += oldN;
	n = oldM;

	int stop = 4000000;
	if (total > stop) {
		std::cout << total << std::endl;
	} else {
		fib(n, m, total);
	}
}

int main(int argc, char **argv) 
{
	std::cout << "Hello world" << std::endl;
	int start = 1;
	int next = 2;
	fib(start, next, 0);
	return 0;
}

