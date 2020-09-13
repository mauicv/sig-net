#include "classes/list.h"
#include "classes/net.h"
#include <iostream>

using namespace sig_net;
using namespace ds;
using namespace std;

int main(void){
  Net* net_ptr = new Net();
  Net net = *net_ptr;
  net.add_node(0.5, "A");
  net.add_node(0.13, "B");
  net.add_node(0.6, "C");
  net.add_node(0.213, "D");
  net.add_node(0.4, "E");
  net.add_node(0.3242, "F");

  for (int i=0;i<6; i++){
    Node* n = net.get_node(i);
    cout << *n << endl;
  }

  return 0;
}
