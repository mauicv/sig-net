#ifndef LIST_H // include guard
#define LIST_H

namespace ds
{
  template <typename T>
  class ListItem {
    public:
      ListItem<T>* next;
      ListItem<T>* prev;
      T data;

      ListItem(T data);
      void link_to(ListItem<T> &to);
      void link_from(ListItem<T> &from);
  };

  template <typename T>
  class List {
    private:
      ListItem<T>* head;
      ListItem<T>* tail;
      int _length;

    public:
      List(void);
      int length(void);
      void add(T data);
      void print(void);
  };
}

#include "list.tpp"

#endif /* MY_CLASS_H */
