#include <iostream>

int addNaturalNumbersDivBy3and5(int min, int max);

int addNaturalNumbersDivBy3and5(int min, int max){
	int result = 0;
	
	for(min; min<max; min++){
		if(min%3==0||min%5==0){
			result = result + min;
		} else {
			std::cout << min << " is not divisible by 3 or 5\n";
		}
	}
	return result;
}
