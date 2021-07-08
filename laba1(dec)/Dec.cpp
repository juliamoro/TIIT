#include "Dec.h"

int dek::push_front(int n)
{
    if (_size == SIZE)
        return 1;

    else if (_size == 0)
    {
        storage[start] = n;
        _size++;
        return 2;
    }
    else
    {
        if (start == 0)
        {
            start = SIZE - 1;
            storage[start] = n;
            _size++;
            return 2;
        }
        else
        {
            start--;
            storage[start] = n;
            _size++;
            return 2;
        }
    }
}

int dek::push_back(int n)
{
    if (_size == SIZE)
        return 1;

    else if (_size == 0)
    {
        storage[end] = n; 
        _size++;
        return 2;
    }
    else
    {
        if (end == SIZE - 1)
        {
            end = 0;
            storage[end] = n;
            _size++;
            return 2;
        }
        else
        {
            end++;
            storage[end] = n;
            _size++;
            return 2;
        }
    }
}

int dek::pop_front()
{
    int b;
    if (_size != 0 && (start == end))
    {
        b = storage[start];
        _size--;
        return b;
    }
    else if (_size == 0)
        return 3;
    else
    {
        b = storage[start];
        if (start == SIZE - 1)
        {
            start = 0;
            _size--;
        }

        else
        {
            start++;
            _size--;
        }
        return b;
    }
}

int dek::pop_back()
{
    int b;
    if (_size != 0 && (start == end))
    {
        b = storage[end];
        _size--; 
        return b;
    }
    else if (_size == 0)
        return 3;
    else
    {
        b = storage[end];
        if (end == 0)
        {
            end = SIZE - 1;
            _size--;
        }
        else
        {
            end--;
            _size--;
        }
        return b;
    }
}

int dek::front()
{
    if (_size == 0)
        return -1;
    else
        return storage[start];
}

int dek::back()
{
    if (_size == 0)
        return -1;
    else
        return storage[end];
}
