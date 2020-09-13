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

  cout << "Get by Name:" << endl;
  Node* n1 = net.get_node_by_name((char*)"C");
  cout << *n1 << endl;
  Node* n2 = net.get_node_by_name((char*)"D");
  cout << *n2 << endl << endl;
  net.add_link(3.1, n1, n2);

  net.add_link(2.89,
    net.get_node_by_name((char*)"E"),
    net.get_node_by_name((char*)"B"));

  net.print();

  cout << endl << "Get by Index" << endl;
  for (int i=0;i<6; i++){
    Node* n = net.get_node(i);
    cout << *n << endl;
  }

  return 0;
}
