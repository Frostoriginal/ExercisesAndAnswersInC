#include <stdint.h>
//Function 2 - squaring an argument
//https://www.codewars.com/kata/523b623152af8a30c6000027/c
int32_t square(int32_t n)
{
	return n * n;
}

int returnSquare(int n) {
	return n * n;

}

//Reverse List Order
//https://www.codewars.com/kata/53da6d8d112bd1a0dc00008b
int* reverse_list(const int* array, int length) {
	const int arrayLength = length;
	int* reversedArray = (int*)malloc(length * sizeof(int));

	for (int i = 0; i < length; i++) {
		reversedArray[i] = array[length-i-1];
	}
	return reversedArray;
}