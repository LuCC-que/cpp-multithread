#include <thread>
#include <iostream>

using namespace std;
uint global = 0;

void add(int id){

  while(global < 100){
    cout << "I am thread: "<< id << "the global is " << ++global << endl; 
  }
  
}

int main(){

  thread t1{add, 1};
  thread t2{add, 2};
  thread t3{add, 3};
  thread t4{add, 4};
  thread t5{add, 5};

  t1.join();
  t2.join();
  t3.join();
  t4.join();
  t5.join();

  return 0;

}