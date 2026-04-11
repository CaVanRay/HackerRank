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
      cp = l; // base class int that I cannot change the name of
      capacity = cp; // more readable and easily understood alias for cp takes over from here
      tail = NULL;
      head = NULL;
   }

   virtual void set(int keyID, int keyValue){

      auto iter = mp.find(keyID);
      Node* current = (iter != mp.end()) ? iter->second : NULL;
     
if(current == NULL){ // ******************************* NOT IN LIST ALREADY ********************************
 
      current = new Node(keyID, keyValue);

      if(capacity == 0){ // If list is full, remove the tail

         Node* toRemove = tail;
         tail = toRemove->prev;
         tail->next = NULL;
         mp.erase(toRemove->key);
         delete toRemove;

      }else{ // If list is not full, decrement the capacity

         capacity--;

      }

      if(head != NULL){ // If the head exists, add prev and next pointers to connect it to the new head
         head->prev = current;
         current->next = head;
      }

      head = current;

      if(tail == NULL){ // If the tail doesnt exists, the list is empty and set it to the new Node
         tail = current;
      }

      mp[keyID] = current;
      
      }else if(current->key == keyID){ //**************** ALREADY EXISTS IN LIST **********************************
         
         if(current->prev == NULL && current->next == NULL){ // only item in list

            head = NULL;
            tail = NULL;

         }else if(current->prev != NULL && current->next != NULL){ // somewhere in the middle

               current->prev->next = current->next;
               current->next->prev = current->prev;

         }else if(current->prev == NULL && current->next != NULL){ // located at the head

               current->next->prev = NULL;
               head = current->next;

         }else if(current->prev != NULL && current->next == NULL){ // located at the tail

               current->prev->next = NULL;
               tail = current->prev;

         }else{ //something has seriously gone wrong

            cout << endl << "The Fuck did I do?" << endl;

         }

         // Remove vestigial map values and current node

         mp.erase(current->key);
         delete current;

         // Create new Node with given values and add to front

         current = new Node(keyID, keyValue);

         if(head == NULL){
            head = current;
            tail = current;
         } else {
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

      auto iter == mp.find(keyID);
      
      iter != mp.end() ? return iter->second->key : return -1;

   }

};

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
