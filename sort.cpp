#include"sort.h"
#include<iostream>
#include <cstdlib> 
#include <ctime>
#include <fstream>
#include <vector>



SortAlgo::SortAlgo()
{

}
SortAlgo::~SortAlgo()
{

}
/* 插入排序 */
void SortAlgo::insertSort(int* Arr, int length)
{
    if (length < 1)
        return;
    int t,i,j;
    for (i = 1; i < length; i++)
    {
        t = Arr[i];                                         
        for (j = i - 1; j >= 0 && Arr[j] > t; j--)
        {
            Arr[j + 1] = Arr[j];
        }
        Arr[j + 1] = t;
    }
}

/*  归并排序（合并数组)  */
void SortAlgo::MergeArray(int* Arr, int begin, int mid, int end, int* temp)
{
    

}

/*  归并排序  */
void SortAlgo::MergeSort(int* Arr, int begin, int end, int* temp)
{

    if (begin >= end)
        return;
    int mid = (begin + end) / 2;
    MergeSort(Arr, begin, mid, temp);
    MergeSort(Arr, mid + 1, end, temp);
    int length = 0;
    int i = begin;
    int j = mid;
    int m = mid + 1;
    int n = end;
    while (i <= j && m <= n)
    {
        if (Arr[i] < Arr[m])
        {
            temp[length] = Arr[i];
            length++;
            i++;
        }
        else
        {
            temp[length] = Arr[m];
            length++;
            m++;
        }
    }
    while (i <= j)
    {
        temp[length] = Arr[i];
        i++;
        length++;
    }
    while (m <= n)
    {
        temp[length] = Arr[m];
        length++;
        m++;
    }
    for (int k = 0; k < length; k++)
    {
        Arr[begin + k] = temp[k];
    }
}

/*  快速排序（递归版）  */
void SortAlgo::QuickSort_Recursion(int* Arr, int begin, int end)
{
    if (begin >= end)
        return;

    int i = begin, j = end, ctl = Arr[begin];
    while (i < j)
    {
        while (i < j && Arr[j] >= ctl) // 从右向左找 
            j--;
        if (i < j)
            Arr[i++] = Arr[j];

        while (i < j && Arr[i] < ctl) // 从左向右找 
            i++;
        if (i < j)
            Arr[j--] = Arr[i];
    }
    Arr[i] = ctl;
    QuickSort_Recursion(Arr, begin, i - 1); 
    QuickSort_Recursion(Arr, i + 1, end);

}


/*  快速排序（枢轴存放）  */
//int SortAlgo::Partition(int* a, int begin, int end)
//{
//
//}


/*  计数排序  */
void SortAlgo::CountSort(int* Arr,  int size, int max)
{
    if (size < 1)
        return;
    std::vector<int> num(max+1,0);
    std::vector<int> temp(size,0);
    for (int i = 0; i <size; i++)
    {
        for (int j = 0; j <= max; j++)
        {
            if (Arr[i] == j)
            {
                num[j]++;
            }
        }
    }
    for (int i = 1; i <= max; i++)
    {
        num[i] = num[i] + num[i - 1];
    }
    for (int i = size - 1; i >= 0; i--)
    {
        num[Arr[i]]--;
        temp[num[Arr[i]]] = Arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        Arr[i] = temp[i];
    }
}


/*  基数计数排序  */
void SortAlgo::RadixCountSort(int* Arr, int size)
{

}
/*   颜色排序  */
void SortAlgo::ColorSort(int* Arr, int size)
{
    //int* p0, * p2, * p;
    //p0 = &Arr[0];
    //p2 = &Arr[size - 1];
    //p = &Arr[0];
    //for (p = p + 1; p != p2; p++)
    //{
    //    if (*p == 0 || *p == 2)
    //    {
    //        if (*p2 < *p)
    //        {
    //            int t;
    //            t = *p2;
    //            *p2 = *p;
    //            *p = t;
    //            p2--;
    //        }
    //        if (*p < *p0)
    //        {
    //            int k;
    //            k = *p0;
    //            *p0 = *p;
    //            *p = k;
    //            p0++;
    //        }
    //    }
    //}
    //int b;
    //b = *p0;
    //*p0 = *p;
    //*p = b;
    //for (int i = 0; i < size; i++)
    //{
    //   std::cout << Arr[i] << std::endl;
    //}
}



void SortAlgo::ttyw_out(int* Arr)
{
    std::ofstream fout;
    fout.open("10w_data.txt");
    for (int j = 0; j < 100000; j++)
    {
        fout << Arr[j] << std::endl;
    }
    fout.close();
}
void SortAlgo::fw_out(int* Arr)
{
    std::ofstream fout;
    fout.open("5w_data.txt");
    for (int j = 0; j < 100000; j++)
    {
        fout << Arr[j] << std::endl;
    }
    fout.close();
}
void SortAlgo::ow_out(int* Arr)
{
    std::ofstream fout;
    fout.open("1w_data.txt");
    for (int j = 0; j < 100000; j++)
    {
        fout << Arr[j] << std::endl;
    }
    fout.close();
}

int SortAlgo::max(int* Arr,int size)
{
    if (size < 1)
        return 0;
    int i,m;
    m = Arr[0];
    for (i = 0; i < size; i++)
    {
        if(Arr[i]>m)
        {
            m = Arr[i];
        }
    }
    return m;
}

