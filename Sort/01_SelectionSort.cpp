#include <iostream>

int main() {
	int i, j, min, index, temp;
	// index : ���� ���� ������ ��ġ
	int array[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
	for (i = 0; i < 10; i++) { 
		min = 9999; // ��� ���Һ��� ū ����
		for (j = i; j < 10; j++) {
			if (min > array[j]) {
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
		//swap��
	}


	for (i = 0; i < 10; i++) {
		std::cout << array[i]<<" ";
	}
	system("pause");
	return 0;
}

/*
<��������>

���� ���� ���� �����ؼ� �� ������ ������ �˰���

10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1�� Ȯ���ؾ� �Ѵ�.
=> 10 * (10 + 1) / 2 = 55
=> N * (N + 1) / 2 
=> O(N * N) = O(N^2)
����� ��ȿ������ �˰����̴�.
*/