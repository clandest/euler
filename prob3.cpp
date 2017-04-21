#include <iostream>

int main(){
	long n = 600851475143;
	int factor = 3;
	while(n > 1){
		if(n % factor == 0){
			n /= factor;
		}else{
			factor +=2;
		}
	}

	std::cout << factor << std::endl;
	return 0;
}
