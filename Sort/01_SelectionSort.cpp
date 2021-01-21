#include <iostream>

int main() {
	int i, j, min, index, temp;
	// index : 가장 작은 원소의 위치
	int array[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
	for (i = 0; i < 10; i++) { 
		min = 9999; // 모든 원소보다 큰 숫자
		for (j = i; j < 10; j++) {
			if (min > array[j]) {
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
		//swap식
	}


	for (i = 0; i < 10; i++) {
		std::cout << array[i]<<" ";
	}
	system("pause");
	return 0;
}

/*
<선택정렬>

가장 작은 것을 선택해서 맨 앞으로 보내는 알고리즘

10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1번 확인해야 한다.
=> 10 * (10 + 1) / 2 = 55
=> N * (N + 1) / 2 
=> O(N * N) = O(N^2)
상당히 비효율적인 알고리즘이다.
*/