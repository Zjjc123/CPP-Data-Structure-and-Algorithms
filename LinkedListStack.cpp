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
        Node<T>* head;
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
                head = node;
                node->next = nullptr;
            }
            else
            {
                node->next = head;
                head = node;
            }
            size++;
        }

        T pop()
        {
            if (size > 0)
            {
                T val = head->value;
                head = head->next;
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