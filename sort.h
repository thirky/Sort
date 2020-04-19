#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

class SortAlgo
{
public:
    SortAlgo();
    ~SortAlgo();
    /**
     *  @name        : void insertSort(int *a,int n);
     *  @description : 插入排序
     *  @param       : 数组指针 Arr, 数组长度 length
     */
    void insertSort(int* Arr, int length);


    /**
     *  @name        : void MergeArray(int *a,int begin,int mid,int end,int *temp);
     *  @description : 归并排序（合并数组）
     *  @param       : 数组指针Arr，数组起点begin，数组中点mid，数组终点end，承载数组指针temp
     */
    void MergeArray(int* Arr, int begin, int mid, int end, int* temp);


    /**
     *  @name        : void MergeSort(int *a,int begin,int end,int *temp);
     *  @description : 归并排序
     *  @param       : 数组指针Arr，数组起点begin，数组终点end，承载数组指针temp
     */
    void MergeSort(int* Arr, int begin, int end, int* temp);


    /**
     *  @name        : void QuickSort(int *a, int begin, int end);
     *  @description : 快速排序（递归版）
     *  @param       : 数组指针Arr，数组起点begin，数组终点end
     */
    void QuickSort_Recursion(int* Arr, int begin, int end);


    /**
     *  @name        : void QuickSort(int *a,int size)
     *  @description : 快速排序（非递归版）
     *  @param       : 数组指针a，数组长度size
     */
    void QuickSort(int* a, int size);


    /**
     *  @name        : void QuickSort(int *a, int begin, int end)
     *  @description : 快速排序（枢轴存放）
     *  @param       : 数组指针a，数组起点begin，数组终点end
     */
    int Partition(int* a, int begin, int end);


    /**
     *  @name        : void CountSort(int *Arr, int size , int max)
     *  @description : 计数排序
     *  @param       : 数组指针Arr，数组长度size，数组最大值max
     */
    void CountSort(int* Arr, int size, int max);


    /**
     *  @name        : void RadixCountSort(int *a,int size)
     *  @description : 基数计数排序
     *  @param       : 数组指针Arr，数组长度size
     */
    void RadixCountSort(int* Arr, int size);


    /**
     *  @name        : void ColorSort(int *a,int size)
     *  @description : 颜色排序
     *  @param       : 数组指针Arr（只含0，1，2元素），数组长度size
     */
    void ColorSort(int* Arr, int size);


    /**
     *  @name        : 自拟
     *  @description : 在一个无序序列中找到第K大/小的数
     *  @param       : 数组指针a，数组长度size
     */

    void ttyw_out(int* Arr);
    void fw_out(int* Arr);
    void ow_out(int* Arr);
    int max(int* Arr,int size);
};

#endif 