#include <iostream>

int main(void) {
	int i, j, temp;
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };
	for (i = 0; i < 9; i++) {
		j = i;
		while (j >= 0 && array[j] > array[j + 1]) {
			// ���� ���ĵǾ� �ִٰ� �����ϱ� ������, ���� ����Ʈ�� �ȴٴ� ������ �ִ�.
			// ����, ������ ������Ű�� �ʴ´ٸ�, �ƹ��� ���� ���� ��������.
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
-> (N * N) �˰��� �� ���� ȿ�����̴�.

-> �տ��ִ� �ְ� �ڿ��ִ� �� ���� ������ ������ ���Ѵ�. (�� �տ� ���ĵǾ� �ִٰ� ����)
*/

