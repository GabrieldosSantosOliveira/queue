#include <iostream>

#include "queue.h"

int main()
{
  Queue<int> items;
  items.enqueue(9);
  std::cout << items.empty() << std::endl;
  std::cout << items.size() << std::endl;
  std::cout << items.dequeue() << std::endl;
  std::cout << items.size() << std::endl;
  std::cout << items.empty() << std::endl;
  return 0;
}