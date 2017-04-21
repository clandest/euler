#include <iostream>
#include <string>
#include <algorithm>

int main(){
	std::string result, copy;
	std::string backwards = "";
	std::string placeholder;
	int counter = 0;
	int length;
	for(int i = 1; i <= 999; i++){
		for(int j = 1; j <= 999; j++){
			result = std::to_string(i * j);
			copy = result;
			std::reverse(copy.begin(), copy.end());
			backwards = copy;

			if(result == backwards){
			if(std::stoi (copy) > counter){
				counter = std::stoi (copy);
			}

			std::cout << i << " * " << j << " = " << result << std::endl;
			std::cout << backwards << std::endl;
			}
		}
	}

	std::cout << "the number is " << counter << std::endl;

	
	

	return 0;
}
