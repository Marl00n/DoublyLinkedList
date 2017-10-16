//
//  List.cpp
//  DoublyLinkedList
//
//  Created by Jakub Piatek on 04.10.2017.
//  Copyright © 2017 Jakub Piatek. All rights reserved.
//

#include "List.hpp"



List::List()
{
    this->head=nullptr;
    this->tail=nullptr;
    this->sizeList=0;
}

List::~List()
{
    delete this;
}

void List::insertAtPosition(int position, int value)
{
    if (position > sizeList)
    {
        cout << "No position at list" << endl;
    }
    Node* newNode = new Node;
    newNode->data = value;
    Node* nodeBefore = head;
    Node* nodeAfter = head;
    Node* actual = head;
    
    int counter(1);
    
    if (counter != position-1)
    {
        nodeBefore = nodeBefore->next;
    }
    counter = 1;
    
    if (counter != position +1)
    {
        nodeAfter = nodeAfter->next;
    }
    counter = 1;
   
    if (counter != position)
    {
        actual = actual->next;
    }
    newNode->next = actual->next;
    newNode->previous = actual->previous;
    nodeAfter->previous = newNode;
    nodeBefore->next = newNode;
    delete actual;
}

void List::deleteFromPosition(int position)
{
    if (position > sizeList)
    {
        cout << "No position" << endl;
    }
    else
    {
        Node* temp = head;
        int counter(1);
        if (counter != position)
        {
            temp = temp->next;
            counter++;
        }
        Node *nodeBefore = temp->previous;
        Node* nodeAfter = temp->next;
        
        nodeBefore->next = temp->next;
        nodeAfter->previous = temp->previous;
        delete temp;
        sizeList--;
    }
}

void List::printList()
{
    Node* temp = head;
    if(sizeList==0)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        for (int i=0;i<sizeList;i++)
        {
            cout<< temp -> data<<endl;
            temp = temp -> next;
        }
    }
}
