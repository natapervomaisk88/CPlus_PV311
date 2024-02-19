#include <iostream>
using namespace std;

int main()
{
	srand(time(0));
    const unsigned int SIZE = 10; //размер массива

	int arr[SIZE] = {};
	int minValue = -10, maxValue = 38;
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % (maxValue -minValue)+minValue;
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	int max=arr[0], min=arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << endl;
	cout << "Min: " << min<< endl;
	cout << "Max: " << max<< endl;
	int temp = arr[0];
	arr[0] = arr[SIZE - 1];
	arr[SIZE - 1] = temp;
	//Сортировка
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	/*for (int i = 0; i < SIZE; i++)
	{
		arr2[i] = arr[i];
	}*/

	/*int arr[] = {3,5,2,6,7,8,9,0,4,5};

	cout << sizeof(arr) / sizeof(arr[0]) << endl;*/

	/*int arr[SIZE]{};*/
	/*for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}*/
	/*arr[0] = 3;
	arr[1] = 5;*/
	return 0;
}
