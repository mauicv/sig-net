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
      // List<Node> from;
      // List<Node> to;
      double sig;
      // string name;
      char name[40];
      Node(double sig, string name);
      friend ostream & operator << ( ostream &, Node & );

      // void link_to(ListItem<T> &to);
      // void link_from(ListItem<T> &from);
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
      Link(double prob);
      // void link_to(ListItem<T> &to);
      // void link_from(ListItem<T> &from);
  };

  class Net {
    public:
      List<Node> nodes;
      // List<Link> links;

      Net();
      void add_node(double sig, string name);
      // void add_link(Node &from, Node &to);

      void print();
    private:
      int _num_links;
      int _num_nodes;
  };
}

// ostream& operator<<(ostream& os, sig_net::Node& n){
//   os << n.sig;
//   return os;
// }


#include "net.tpp"

#endif /* NET_H */
