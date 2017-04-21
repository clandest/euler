#include <iostream>

int main(){
	int sum;
	int last;
	int total;

	for(int i = 1; i <= 100; i++){
		sum += i * i;	
	}

	for(int i = 1; i <= 100; i++){
		last += i;
	}

	last = last * last;

	total = last - sum;

	

	std::cout << sum << std::endl;
	std::cout << last << std::endl;
	std::cout << total << std::endl;

	return 0;
}
