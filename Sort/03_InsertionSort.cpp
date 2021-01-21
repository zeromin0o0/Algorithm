#include <iostream>

int main(void) {
	int i, j, temp;
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };
	for (i = 0; i < 9; i++) {
		j = i;
		while (j >= 0 && array[j] > array[j + 1]) {
			// 앞이 정렬되어 있다고 가정하기 때문에, 멈출 포인트를 안다는 장점이 있다.
			// 만약, 조건을 충족시키지 않는다면, 아무런 동작 없이 지나간다.
			temp = array[j];
			array[j] = array[j+1];
			array[j + 1] = temp;
			j--;
		}
	}
	
	for (i = 0; i < 10; i++) {
		std::cout << array[i] << " ";
	}

	system("pause");
	return 0;
}

/*
-> (N * N) 알고리즘 중 가장 효율적이다.

-> 앞에있는 애가 뒤에있는 애 보다 작으면 비교조차 안한다. (그 앞에 정렬되어 있다고 가정)
*/

