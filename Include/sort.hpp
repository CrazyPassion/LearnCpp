//
// Created by vonking on 2017/4/22.
//

#ifndef FFLUSHTEST_C_BUBBLESORT_HPP
#define FFLUSHTEST_C_BUBBLESORT_HPP

#include <cstring>
//int arr[20] = {11,7,5,12,14,15,16,50,4,3,2,1,13,17,9,8,6,10,18,19};
void bubbleSort(int *pArr, int num);
void SelectionSort(int *pArr, int num);
void MergeSort(int *pArr, int start, int end);
void Merge(int *pArr, int start, int middle, int end);

void bubbleSort(int *pArr, int num) {
    int swcpCnt = 0;
    for (int j = 0;j<num;j++) {
        swcpCnt = 0;
        for (int i = 0; i < num - 1; ++i) {
            if (pArr[i] > pArr[i+1])
            {
                swcpCnt++;
                int temp = pArr[i];
                pArr[i] = pArr[i+1];
                pArr[i+1] = temp;
            }
        }
        if (0==swcpCnt)
        {
            break;
        }
    }
}

void SelectionSort(int *pArr, int num) {
    for (int j = 0;j<num;j++) {
        int smallIdx = j;
        int smallest = pArr[j];
        for (int i = j+1; i < num ; ++i) {
            if (smallest > pArr[i])
            {
                smallIdx = i;
                smallest = pArr[i];
            }
        }
        if (smallIdx>j)
        {
            int temp = pArr[j];
            pArr[j] = pArr[smallIdx];
            pArr[smallIdx] = temp;
        }
    }
}

void MergeSort(int *pArr, int start, int end) {
    if (start < end) {
        int middle = start + (end - start) / 2;
        MergeSort(pArr,start, middle);
        MergeSort(pArr,middle+1,end);
        Merge(pArr, start, middle, end);
    }
}

int min(int a, int b)
{
    return a<b?a:b;
}

void Merge(int *pArr, int start, int middle, int end) {
    int tmp[end - start + 1];
    int numofleft = middle - start + 1;
    int numofRight = end - middle;//end - (middle+1)+1=end-middle
    memset(tmp,0, sizeof(tmp));
    int i = 0, j = 0;
    int k = 0;
    while(k<end-start+1)
    {
        if(j==numofRight)
        {
            memcpy(&tmp[k],&pArr[start+i], sizeof(int)*(end - start + 1 - i - j));
            break;
        }else if (i==numofleft)
        {
            memcpy(&tmp[k],&pArr[middle+1+j], sizeof(int)*(end - start + 1- i-j));
            break;
        }
        if((*(pArr+start+i) > *(pArr+middle+1+j)))
        {
            tmp[k] = *(pArr + middle + 1 + j);
            j++;
        } else
        {
            tmp[k] = *(pArr+start+i);
            i++;
        }
        k++;
    }

    memcpy(&pArr[start],tmp,sizeof(tmp));
}

#endif //FFLUSHTEST_C_BUBBLESORT_HPP
