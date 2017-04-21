#include <iostream>

int main(){
	int sum;
	int i;
	std::cout << "Project Euler Problem 1" << std::endl;
	std::cout << "Multiples of 3 and 5" << std::endl;
	for(i = 1; i < 1000; i++){
		if(i % 3 == 0 || i % 5 == 0){
			std::cout << i << " is a multiple of 3 or 5." << std::endl;
			sum += i;
		}
	};
	std::cout << "The sum of all is " << sum << std::endl;
	return 0;
}
