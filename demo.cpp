#include"sort.h"
#include<time.h>
#include<iostream>
#include <cstdlib> 
#include <ctime>
#include <fstream>
#define OW 10000
#define FW 50000
#define TTYW 200000
int main()
{
	SortAlgo* sort = new SortAlgo;
	clock_t start = clock();
	int arr[OW];
	for (int i = 0; i < OW; i++) 
	{
		arr[i] = rand();
	}
	int temp[sizeof(arr)/sizeof(arr[0])];

	clock_t diff = clock() - start;
	std::cout << "ʱ�䣺" << diff << "ms" << std::endl;
	delete sort;
	sort = nullptr;
	return 0;
}