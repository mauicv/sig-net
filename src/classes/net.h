#include "list.h"
#include <iostream>

using namespace ds;
using namespace std;

#ifndef NET_H // include guard
#define NET_H

namespace sig_net
{
  class Node {
    public:
      double sig;
      char name[40];
      Node(double sig, string name);
      friend ostream & operator << ( ostream &, Node & );
  };

  ostream& operator<<(ostream& os, Node& n){
    os << " (" << n.name << ", " << n.sig << ") ";
    return os;
  }

  class Link {
    public:
      Node* from;
      Node* to;
      double prob;
      Link(double prob, Node* from, Node* to);
  };

  class Net {
    public:
      List<Node> nodes;
      List<Link> links;

      Node* get_node(int i);
      Net();
      void add_node(double sig, string name);
      void add_link(double prob, Node* from, Node* to);

      void print();
    private:
      int _num_links;
      int _num_nodes;
  };
}

#include "net.tpp"

#endif /* NET_H */
