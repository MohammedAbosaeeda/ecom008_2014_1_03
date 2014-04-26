#include <QCoreApplication>
#include "heap.h"

int main()
{
    Heap<int> *heap = new Heap<int>(0,1);

     heap->insert(1);
     heap->insert(2);
     heap->insert(3);
     heap->insert(4);
     heap->insert(5);
     heap->insert(6);
     heap->insert(7);
     heap->insert(8);
     heap->insert(9);
     heap->insert(10);
}
