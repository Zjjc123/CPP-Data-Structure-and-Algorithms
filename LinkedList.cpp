#include <string.h>
#include <iostream>


template <typename T>
class Node
{
    private:
        T value;
        Node<T>* next;
    public:
        T* GetNext()
        {
            return next;
        }

        void setNext(Node<T>* n)
        {
            next = n;
        }

        void setValue (T val)
        {
            value = val;
        }
};

template <typename T>
class LinkedList
{
    private:
        int size = 0;
        Node<T> first;
    public:
        int getSize()
        {
            return size;
        }

        void add(T value)
        {
            Node<T> node;
            node.setValue(value);
            if (size == 0)
            {
                first = node;
                node.setNext(nullptr);
            }
            else
            {
                node.setNext(&first);
                first = node;
            }
            size++;
        }

};

int main()
{
    LinkedList<int> n;
    n.add(1);
    n.add(2);
    std::cout << n.getSize();
}