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

������ �������ĺ��ٴ� ���� �ð��� �����ɸ���.
�� ���� ��ü�� �̷������ �����̴�.
���� �˰��� �߿��� ���� ���� �˰����̴�.

*/