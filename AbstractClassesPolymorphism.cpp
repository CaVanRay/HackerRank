#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};

//************************************************************************************************
// My code starts here

/*

Title: Abstract Classes Polymorphism
Author: Cavan Ray Theiss

Description: I think I need to write a derived class based on class cache but it needs to expand
the original

The derived class needs to be called LRUCache

It needs to use the member functions and variables to implement an LRU cache ("Last Recently Used")

*/

class LRUCache : public Cache{
   int capacity;
   public:

   LRUCache(int l){
      cp = l;
      capacity = cp;
      tail = NULL;
      head = NULL;
   }

   virtual void set(int keyID, int keyValue){

      Node* current = head;
      while(current != NULL && current->key != keyID){
         current = current->next;
      }
      if(current == NULL){ // If the provided Key and Value do not already exist in the list
         current = new Node(keyID, keyValue);
         if(head == NULL){ // If head equals NULL, this is the first item added to list
            head = current;
            tail = current;
            capacity--;
         }else if(capacity > 0){ // If there is still space in the list for new items
            head->prev = current;
            current->next = head;
            head = current;
            capacity--;
         }else if(capacity == 0){ // Else/If the list is completely full
            Node* spillOver = tail;
            head->prev = current;
            current->next = head;
            head = current;
            tail->prev->next = NULL;
            tail = tail->prev;
         }else{ // This shouldnt trigger, but if somehow the list capacity hits negative an error is displayed
            cout << endl << "ERROR: Capacity not valid!" << endl; 
         }
         mp[keyID] = current;
      }else if(current->key == keyID){
         // removeFromList
         if(head != current && tail == current){
            // if the current node is not head but is tail, we can infer
            // that it is safe to remove
            current->prev->next = NULL;
            tail = current->prev;
            delete current;
         }else if (head != current && tail != current){
            // if the curren node is not head, not tail, we can just
            // join either side and remove the current node
            current->prev->next = current->next;
            current->next->prev = current->prev;
            delete current;
         }
         if(head != current){
            // addToFront
            current = new Node(keyID, keyValue);
            head->prev = current;
            current->next = head;
            head = current;
         }
         mp[keyID] = current;
         
      }else{ // This shouldnt trigger, but if somehow we don't reach the end of the list but the current item doesnt match, this will trigger
         cout << endl << "ERROR: set() key search broken";
      }
   
   }

   virtual int get(int keyID){
      Node* current = head;
      while(current != NULL && current->key != keyID){
         current = current->next;
      }
      if(current == NULL){ // if the item we are searching for isnt in the list, return -1
         return -1;
      }else if(current->key == keyID){ // if the item we are searching for is found, we return the associated value
         return current->value;
      }else{ // Again, shouldnt trigger, but in case the search returns something not expected
         cout << endl << "ERROR: get() key search broken";
         return -1;
      }
      
   }

};

/*
   
class LRUCache : public Cache{
   public:
   LRUCache(int l){
      cp = l;
      tail = NULL;
      head = NULL;
   }

   virtual void set(int k, int v){
      auto it = mp.find(k);
      if(it == mp.end()){
         Node *node = new Node(k, v);
         if(cp == 0){
            node->next = head;
            head->prev = node;
            head = node;
            Node *temp = tail;
            mp.erase(temp->key);
            tail = tail->prev;
            delete temp;
         } else {
            cp--;
            if(head == NULL){
               head = node;
               tail = node;
            } else {
               node->next = head;
               head->prev = node;
               head = node;
            }
         }
         mp[k] = node;
      } else {
         Node *temp = it->second;
         if(temp != head){
            if(temp == tail){
               tail = temp->prev;
               temp->prev->next = NULL;
               temp->prev = NULL;
               temp->next = head;
               head->prev = temp;
               head = temp;
            } else {
               temp->prev->next = temp->next;
               temp->next->prev = temp->prev;
               temp->prev = NULL;
               temp->next = head;
               head->prev = temp;
               head = temp;
            }
         }
         head->value = v;
      }
   }

   virtual int get(int k){
      auto it = mp.find(k);
      if( it != mp.end()){
         return it->second->value;
      }
      return -1;
   }
};

*/

// My code stops here
//************************************************************************************************

int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
