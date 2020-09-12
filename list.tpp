#include <iostream>
#include "list.h"

using namespace std;
using namespace ds;

template <typename T>
ListItem<T>::ListItem(T data): data(data){};

template <typename T>
void ListItem<T>::link_to(ListItem<T> &to){this -> next = &to;};

template <typename T>
void ListItem<T>::link_from(ListItem<T> &from){this -> prev = &from;};

template <typename T>
List<T>::List(void): _length(0){};

template <typename T>
void List<T>::add(T data){
  ListItem<T>* new_item_ptr = new ListItem<T>(data);
  ListItem<T> new_item = *new_item_ptr;
  if (_length > 0) {
    this -> head -> link_to(new_item);
    new_item.link_from(*(this -> head));
  }
  if (_length == 0) this -> tail = new_item_ptr;
  this -> head = new_item_ptr;
  _length++;
};

template <typename T>
void List<T>::print(void){
  cout << "<List: ";
  cout << "length: " << _length << ", ";
  cout << "values: ";
  ListItem<T>* cur_item = this -> tail;
  do {
    cout << cur_item -> data << ' ';
    cur_item = cur_item -> next;
  } while(cur_item != NULL);
  cout << ">"<< endl;
};
