#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

class SortAlgo
{
public:
    SortAlgo();
    ~SortAlgo();
    /**
     *  @name        : void insertSort(int *a,int n);
     *  @description : ��������
     *  @param       : ����ָ�� Arr, ���鳤�� length
     */
    void insertSort(int* Arr, int length);


    /**
     *  @name        : void MergeArray(int *a,int begin,int mid,int end,int *temp);
     *  @description : �鲢���򣨺ϲ����飩
     *  @param       : ����ָ��Arr���������begin�������е�mid�������յ�end����������ָ��temp
     */
    void MergeArray(int* Arr, int begin, int mid, int end, int* temp);


    /**
     *  @name        : void MergeSort(int *a,int begin,int end,int *temp);
     *  @description : �鲢����
     *  @param       : ����ָ��Arr���������begin�������յ�end����������ָ��temp
     */
    void MergeSort(int* Arr, int begin, int end, int* temp);


    /**
     *  @name        : void QuickSort(int *a, int begin, int end);
     *  @description : �������򣨵ݹ�棩
     *  @param       : ����ָ��Arr���������begin�������յ�end
     */
    void QuickSort_Recursion(int* Arr, int begin, int end);


    /**
     *  @name        : void QuickSort(int *a,int size)
     *  @description : �������򣨷ǵݹ�棩
     *  @param       : ����ָ��a�����鳤��size
     */
    void QuickSort(int* a, int size);


    /**
     *  @name        : void QuickSort(int *a, int begin, int end)
     *  @description : �������������ţ�
     *  @param       : ����ָ��a���������begin�������յ�end
     */
    int Partition(int* a, int begin, int end);


    /**
     *  @name        : void CountSort(int *Arr, int size , int max)
     *  @description : ��������
     *  @param       : ����ָ��Arr�����鳤��size���������ֵmax
     */
    void CountSort(int* Arr, int size, int max);


    /**
     *  @name        : void RadixCountSort(int *a,int size)
     *  @description : ������������
     *  @param       : ����ָ��Arr�����鳤��size
     */
    void RadixCountSort(int* Arr, int size);


    /**
     *  @name        : void ColorSort(int *a,int size)
     *  @description : ��ɫ����
     *  @param       : ����ָ��Arr��ֻ��0��1��2Ԫ�أ������鳤��size
     */
    void ColorSort(int* Arr, int size);


    /**
     *  @name        : ����
     *  @description : ��һ�������������ҵ���K��/С����
     *  @param       : ����ָ��a�����鳤��size
     */

    void ttyw_out(int* Arr);
    void fw_out(int* Arr);
    void ow_out(int* Arr);
    int max(int* Arr,int size);
};

#endif 