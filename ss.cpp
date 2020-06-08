// ss.cpp : Lab 1 12/1
//

#include <iostream>
#include <fstream>
using namespace std;

void Func(int arr[], int i, int a) {
	arr[i] = a;
}
void output(int arr[], int n) {
	for (int j = 0; j < n; j++) {
		cout<<arr[j]<<" ";
	}
}

int main()
{
	ifstream fin("f.txt");
	int col_tmp, k;
	int *arr, i = 0, z = 0;
	cout<<" k :";
	cin>>k;
	arr = new int[100];
	if (fin.is_open())
	{
		while (fin >> col_tmp)
		{
			Func(arr, i, col_tmp);
			i++;
		}
		fin.close();
		output(arr, i);
	}
	else {
		cout<<" Oshibka otkrytie file ";
	}

}