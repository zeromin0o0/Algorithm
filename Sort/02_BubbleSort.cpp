#include<iostream>

int main() {
	int i, j, temp;
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 9 - i; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++) {
		std::cout << array[i] << " ";
	}

	system("pause");
}

/*
=> 10 + 9 + 8 ... + 1

=> N * (N + 1) / 2

=> O(N * N)

하지만 선택정렬보다는 수행 시간이 오래걸린다.
매 순간 교체가 이루어지기 때문이다.
정렬 알고리즘 중에서 가장 느린 알고리즘이다.

*/