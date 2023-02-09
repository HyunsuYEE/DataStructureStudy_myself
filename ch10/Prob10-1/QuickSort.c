#include <stdio.h>

void Swap(int arr[], int idx1, int idx2)
{
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}	


int Partition(int arr[], int left, int right)
{
	int pivot = arr[left];    // �ǹ��� ��ġ�� ���� ����! 
	int low = left+1;
	int high = right;

	printf("pivot의 수: %d \n", pivot);

	while(low <= high)    // �������� ���� ������ �ݺ�
	{	
		/*
		while(pivot > arr[low])
			low++;

		while(pivot < arr[high])
			high--;
		*/

		while(pivot >= arr[low] && low <= right)
			low++;

		while(pivot <= arr[high] && high >= (left+1))
			high--;

		if(low <= high)    // �������� ���� ���¶�� Swap ����
			Swap(arr, low, high);    // low�� high�� ����Ű�� ��� ��ȯ
	}

	Swap(arr, left, high);    // �ǹ��� high�� ����Ű�� ��� ��ȯ
	return high;    // �Ű��� �ǹ��� ��ġ ���� ��ȯ
}

void QuickSort(int arr[], int left, int right)
{
	if(left < right)
	{
		int pivot = Partition(arr, left, right);    // �ѷ� ������ 
		QuickSort(arr, left, pivot-1);    // ���� ������ ����
		QuickSort(arr, pivot+1, right);    // ������ ������ ����
	}
}

int main(void)
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

	int len = sizeof(arr) / sizeof(int);
	int i;

	QuickSort(arr, 0, sizeof(arr)/sizeof(int)-1);

	for(i=0; i<len; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}