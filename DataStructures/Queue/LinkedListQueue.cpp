#include <iostream>


template <typename T>
class Node
{
    public:
        T value;
        Node<T>* next;
};

template <typename T>
class LinkedListQueue
{
    private:
        int size = 0;
        Node<T>* head;
        Node<T>* tail;
    public:
        int getSize()
        {
            return size;
        }

        void enqueue(T item)
        {
            Node<T>* newNode = new Node<T>;
            newNode->value = item;
            newNode->next = nullptr;
            if (size > 0)
            {
                tail->next = newNode;
            }
            else
            {
                head = newNode;
            }
            size++;
            tail = newNode;
        }

        T dequeue ()
        {
            T value;
            value = head->value;
            if (size > 0)
            {
                value = head->value;
                head = head->next;
            }
            size--;
            return value;
        }

        T peak ()
        {
            return head->value;
        }
};

int main()
{
    LinkedListQueue<int> n;

    n.enqueue(1);
    n.enqueue(2);
    n.enqueue(3);
    n.enqueue(4);

    std::cout << n.dequeue() << std::endl;
    std::cout << n.dequeue() << std::endl;
}