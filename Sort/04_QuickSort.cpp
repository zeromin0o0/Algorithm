#include<iostream>
int num = 10;
int data[10] = { 1,10,5,8,7,6,4,3,2,9 };

void quicksort(int *data, int start, int end) {
	if (start >= end) { // 원소가 1개인 경우 
		return;
	}

	int key = start; // 특정 부분집합에서 키는 첫번째 원소
	int i = start + 1; // 큰값 출발지점
	int j = end; // 작은값 출발지점 
	int temp;

	while (i <= j) { // 엇갈릴 때까지 반복
		while (data[i] <= data[key]) { // 키값보다 큰 값을 만날때 까지 이동
			i++;
		}
		while (data[j] >= data[key] && j > start) { // 키값보다 작은 값을 만날때 까지 반복
			// 피봇과 작은 값을 교체하기 때문에, j만 범위를 지정하면 된다.
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
			// 엇갈리지 않았다면 큰값과 작은값을 바꿔준다.
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
Quick 정렬은 가장 앞에 있는 값을 pivot 으로 설정한다.
평균속도가 O (N * logN)
이때 logN은, 매우 작은 수라고 볼 수 있다.
*/




