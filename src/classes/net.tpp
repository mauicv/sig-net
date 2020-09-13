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

Link::Link(double prob, Node* from, Node* to):
  prob(prob), from(from), to(to) {};

Net::Net(void):_num_links(0), _num_nodes(0){
  List<Node>* list_ptr = new List<Node>();
  this -> nodes = *list_ptr;
};

void Net::add_node(double sig, string name){
  Node* new_node_ptr = new Node(sig, name);
  Node new_node = *new_node_ptr;
  this -> nodes.add(new_node);
};

void Net::add_link(double prob, Node* from, Node* to){
  Link* link_ptr = new Link(prob, from, to);
};

Node* Net::get_node(int i){
  ListItem<Node>* node_item = this->nodes.get_item(i);
  return &node_item -> data;
}

void Net::print(){
  this -> nodes.print();
}
