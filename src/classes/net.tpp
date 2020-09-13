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
  this -> links.add(*link_ptr);
};

Node* Net::get_node(int i){
  ListItem<Node>* node_item = this->nodes.get_item(i);
  return &node_item -> data;
}

Node* Net::get_node_by_name(char name[40]){
  ListItem<Node>* node_item = this->nodes.get_item(0);
  do {
    if (strcmp(node_item -> data.name, name) == 0)
      return &node_item -> data;
  } while ((node_item = node_item -> next) != NULL);
}

void Net::print(){
  cout << "nodes:\t";
  this -> nodes.print();
  cout << "links:\t";
  this -> links.print();
}
