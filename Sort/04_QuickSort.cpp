#include<iostream>
int num = 10;
int data[10] = { 1,10,5,8,7,6,4,3,2,9 };

void quicksort(int *data, int start, int end) {
	if (start >= end) { // ���Ұ� 1���� ��� 
		return;
	}

	int key = start; // Ư�� �κ����տ��� Ű�� ù��° ����
	int i = start + 1; // ū�� �������
	int j = end; // ������ ������� 
	int temp;

	while (i <= j) { // ������ ������ �ݺ�
		while (data[i] <= data[key]) { // Ű������ ū ���� ������ ���� �̵�
			i++;
		}
		while (data[j] >= data[key] && j > start) { // Ű������ ���� ���� ������ ���� �ݺ�
			// �Ǻ��� ���� ���� ��ü�ϱ� ������, j�� ������ �����ϸ� �ȴ�.
			j--;
		}
		
		if (i > j) {
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else {
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
			// �������� �ʾҴٸ� ū���� �������� �ٲ��ش�.
		}

	}

	quicksort(data, start, j-1);
	quicksort(data, j+1, end);
}
int main(void) {
	quicksort(data, 0, num - 1);
	for (int i = 0; i < num; i++) {
		std::cout << data[i] << " ";
	}
	system("pause");
}

/*
Quick ������ ���� �տ� �ִ� ���� pivot ���� �����Ѵ�.
��ռӵ��� O (N * logN)
�̶� logN��, �ſ� ���� ����� �� �� �ִ�.
*/




