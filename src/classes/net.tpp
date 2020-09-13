#include "list.h"
#include <iostream>
#include <string>
#include <cstring>


using namespace ds;
using namespace std;
using namespace sig_net;

Node::Node(double sig, string name):sig(sig){
  strncpy(this->name, name.c_str(), 40);
};

Net::Net(void):_num_links(0), _num_nodes(0){
  List<Node>* list_ptr = new List<Node>();
  this -> nodes = *list_ptr;
};

void Net::add_node(double sig, string name){
  Node* new_node_ptr = new Node(sig, name);
  Node new_node = *new_node_ptr;
  this -> nodes.add(new_node);
};

// Net::add_link(void){};

void Net::print(){
  this -> nodes.print();
}
