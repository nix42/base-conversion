#include <iostream>
#include <cmath>


void BinaryToDecimal(int binaryValue) {
	int i = 0, num = 0, decimalValue = 0;
	
	while (binaryValue != 0) {
		num = binaryValue%10;
		std::cout << num << "\n" << std::endl;
		
		decimalValue += num*pow(2,i);

		i = i + 1;
		binaryValue = binaryValue / 10;
		
	}
	std::cout << "Decimal Value = " << decimalValue << std::endl;
}

void DecimalToBinary(int decimalValue) {
	int binaryValue[100], i = 0;
	while (decimalValue != 0) {
		binaryValue[i] = decimalValue % 2;
		decimalValue = decimalValue / 2;
		std::cout << binaryValue[i] << std::endl;
		i++;
	}
}

int main() {
	int op;
	
	std::cout << "Please select which operation you want to perform: \n" << std::endl;
	std::cout << "\t1. Binary to decimal\n\t2. Decimal to binary\n" << std::endl;
	std::cin >> op;
	
	if (op == 1) {
		int b;
		std::cout << "Enter a binary value" << std::endl;
		std::cin >> b;
		BinaryToDecimal(b);
	} else if (op == 2) {
		int d;
		std::cout << "Enter a decimal value" << std::endl;
		std::cin >> d;
		DecimalToBinary(d);
	} else {
		std::cout << "Incorrect input ... Please try again" << std::endl;
		system("clear");
		main();
	}
}
