#include <string.h>
#include <iostream>


template <typename T>
class Node
{
    public:
        T value;
        Node<T>* next;
};

template <typename T>
class LinkedListStack
{
    private:
        int size = 0;
        Node<T>* first;
    public:
        int getSize()
        {
            return size;
        }

        void push(T val)
        {
            Node<T>* node = new Node<T>;
            node->value = val;
            if (size == 0)
            {
                first = node;
                node->next = nullptr;
            }
            else
            {
                node->next = first;
                first = node;
            }
            size++;
        }

        T pop()
        {
            if (size > 0)
            {
                T val = first->value;
                first = first->next;
                size--;
                return val;
            }
            else
            {            
                return 0;
            }

        }

};

int main()
{
    LinkedListStack<int> n;
    n.push(1);
    n.push(2);
    n.push(5);
    n.push(50);
    
    std::cout << n.getSize() << std::endl;

    std::cout << n.pop() << std::endl;
    
    std::cout << n.getSize() << std::endl;

    std::cout << n.pop() << std::endl;
    std::cout << n.getSize() << std::endl;
    std::cout << n.pop() << std::endl;
    std::cout << n.getSize() << std::endl;
}