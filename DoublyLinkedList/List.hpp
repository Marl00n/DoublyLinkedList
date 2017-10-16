//
//  List.hpp
//  DoublyLinkedList
//
//  Created by Jakub Piatek on 04.10.2017.
//  Copyright © 2017 Jakub Piatek. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class List
{
private:
    struct Node
    {
        int data;
        Node * next;
        Node * previous;
        
        Node():data(0), next(nullptr), previous(nullptr) {};
    };
    
public:
    List();
    virtual ~List();
    void insertAtPosition (int position, int value);
    void deleteFromPosition (int position);
    void printList();
    
    Node * head;
    Node * tail;
    int sizeList;
    
};

#endif /* List_hpp */
