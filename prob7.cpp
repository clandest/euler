#include <iostream>

int main(){

	bool isPrime = true;
	int primes[5];
	int nextNumber = 3;
	primes[0] = 2;
	int position = 0;
	do{
		isPrime = true;
		for(int i = 0; i <= position; i++){
			if(nextNumber % primes[i] == 0){
				isPrime = false;
				std::cout << nextNumber << "div" << primes[i] << std::endl;
			}
		}

		if(isPrime == true){
			position++;
			primes[position] = nextNumber;
		}

		nextNumber += 2;
	}
	while(position != 5);
	std::cout << primes[4] << std::endl;
	std::cout << primes[5] << " is the answer" << std::endl;
	std::cin.clear();

	std::cin.ignore(255, '\n');
	std::cin.get();

	return 0;
}

