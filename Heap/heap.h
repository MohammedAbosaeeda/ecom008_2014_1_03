#ifndef HEAP_H
#define HEAP_H

#include "HeapADT.h"
#include<iostream>
#include<QString>
#include<QDebug>

using namespace std;

template<typename E>

class Heap : public HeapADT<E>
{

public:

    E * arr;
    int size;

    Heap(int size)
    {
        arr = new E[size];
    }

    void insert(const E& it)
    {
        arr[size++] = it;
    }

    int parent(int pos) const
    {
        if(pos % 2 != 0)
        {
            return pos/2;
        }else
        {
            return pos/2-1;
        }
    }

    int righ(int pos) const
    {
        return 2*(pos + 1);
    }

    int left(int pos) const
    {
        return (2*(pos+1))-1;
    }

    E removefirst(){
        int pos = 0;
        E aux = arr[0];
        arr[pos] = arr[pos + 1];
        for(int i = pos + 1; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
        return aux;
    }

    int size() const
    {
        return size;
    }

    E remove(int pos){
        pos--;
        E aux;
        if(pos < size - 1 && pos >= 0){
            aux = arr[pos];
            arr[pos] = arr[pos + 1];
            for(int i = pos + 1; i < size - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            size--;

            return aux;

        }
        else if(pos == size - 1)
        {

            aux = arr[pos];
            size--;

            return aux;
        }

        return -1;
    }

    void heapfy(int pos){
    }

    void buildMaxHeap(){
    }

    bool isLeaf(int pos) const{
    }
};

#endif // HEAP_H

