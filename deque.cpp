#include<iostream>
#include<deque>
using namespace std;
int main()
{

  std::deque<int>mydeque(10); //10 zero initialised unsigned
  //assign some values
  for(unsigned i =0; i<mydeque.size();i++
    {
      mydeque.at(i) = i;
    
  }
  cout<<"mydeque contain : ";
  for(unsigned i=0;i<mydeque.size();i++
    {
      std::cout<<" "<<mydeque.at(i);
  }

  return 0;
  
  
  
}
