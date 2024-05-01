#ifndef QUEUE_H
#define QUEUE_H
#include <vector>
template <typename T>
class Queue
{
private:
  std::vector<T> vector;

public:
  unsigned int size()
  {
    unsigned int tmp = static_cast<unsigned int>(this->vector.size());
    return tmp;
  }
  bool empty()
  {
    return size() == 0;
  }
  void enqueue(T item)
  {
    vector.push_back(item);
  }
  T dequeue()
  {
    if (size() == 0)
    {
      throw "No has elements on the Queue";
    }
    T tmp = vector.front();

    vector.erase(vector.begin());
    return tmp;
  }
  T back()
  {
    return vector.back();
  }
  T front()
  {
    return vector.front();
  }
};
#endif