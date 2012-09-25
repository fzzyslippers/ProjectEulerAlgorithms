#include <iostream>

int fibonacciNumbers(long max);

int fibonacciNumbers(long max){
	
	long result = 0;
	long a = 0;
	long b = 1;
	long c = 0;
	long d = 0;
	for(int i=0; i<max; i++){
		c = a + b;
		b = a;
		a = c;
		if(c%2==0){
			result = result + c;
			// std::cout << result << " is the current result\n";
		} else {
			std::cout << c << " is not divisible by 2\n";
		}
		if(c>4000000){
			i=max;
		}
	}
	return result;
}
