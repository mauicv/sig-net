#include "list.h"
#include <iostream>

using namespace ds;
using namespace std;

int main(void){
  List<int> list = List<int>();
  list.add(1);
  list.add(2);
  list.print();
}
