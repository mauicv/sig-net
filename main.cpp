#include "list.h"
#include "net.h"
#include <iostream>

using namespace sig_net;
using namespace ds;
using namespace std;

int main(void){
  Net* net_ptr = new Net();
  Net net = *net_ptr;
  net.add_node(0.5, "A");
  net.add_node(0.1, "B");
  net.add_node(0.6, "C");
  net.print();
  return 0;
}
