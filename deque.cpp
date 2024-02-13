#include <deque.h>


template <typename T>
Deque<T>::Deque()
{
    front = NULL;
    rear = NULL;
}
template <typename T>
Deque<T>::~Deque()
{
}
template <typename T>
bool Deque<T>::DEQisEmpty()
{
    if (front == NULL && rear == NULL)
    {
        return true;
    }
}
