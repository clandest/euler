#include <iostream>

int main(){
	int first = 1, second = 2, result, sum = 2, i;
	bool flag = false;
	std::cout << first << std::endl;
	std::cout << second << std::endl;

	while(!flag){
		result = first + second;
		first = second;
		second = result;

		if(result % 2 == 0){
			std::cout << "the result is even and added to the total even sum" << std::endl;
			sum += result;
		}

		if(result >= 4000000){
			flag = true;	
		}
	}

	std::cout << result << std::endl;
	std::cout << sum << " is the sum of all even results" << std::endl;

	return 0;
}
