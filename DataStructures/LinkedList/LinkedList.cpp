#include <iostream>


template <typename T>
class Node
{
    public:
        T value;
        Node<T>* next;
};

template <typename T>
class LinkedList
{
    private:
        int size = 0;
        Node<T>* head;
    public:
        int getSize()
        {
            return size;
        }

        T get(int index)
        {
            Node<T>* result;
            result = head;
            for (int i = 0; i < index; i++)
            {
                result = result->next;
            }
            return result->value;
        }

        void append(T item)
        {
            if (size > 0){
                Node<T>* result;
                result = head;
                while (result->next != nullptr)
                {
                    result = result->next;
                }
                Node<T>* newNode = new Node<T>;
                result->next = newNode;
                newNode->next = nullptr;
                newNode->value = item;
            }
            else
            {
                Node<T>* newNode = new Node<T>;
                head = newNode;
                newNode->value = item;
                newNode->next = nullptr;
            }
            size++;
            
        }

        void remove(int index)
        {
            Node<T>* result;
            result = head;
            for (int i = 0; i < index - 1; i++)
            {
                result = result->next;
            }
            result->next = result->next->next;
            size--;
        }
};

int main()
{
    LinkedList<int> n;

    n.append(1);
    n.append(2);
    n.append(3);
    n.append(4);
    //[1,2,3,4]
    //std::cout << n.getSize() << std::endl;
    n.remove(2);
    //[1,2,4]
    std::cout << n.get(1) << std::endl;
    std::cout << n.get(2) << std::endl;
}