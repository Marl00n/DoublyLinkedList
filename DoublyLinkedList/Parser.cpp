//
//  Parser.cpp
//  DoublyLinkedList
//
//  Created by Jakub Piatek on 16.10.2017.
//  Copyright © 2017 Jakub Piatek. All rights reserved.
//

#include "Parser.hpp"

Parser::Parser()
{
}

Parser::~Parser()
{
}

void Parser::execute(std::string letter, int position, int value)
{
    if(letter == "I")
    {
        List newList;
        newList.insertAtPosition(position, value);
    }
    else if(letter == "D")
    {
        List newList;
        newList.deleteFromPosition(position);
    }
    else{
        cout<<"The End"<<endl;
    }
}

bool Parser::readFile(std::string fileName)
{
    ifstream file;
    file.open(fileName.c_str());
    
    if (!file.good())
        return false;
    
    while (true)
    {
        std::string letter;
        int position;
        int value;
        
        file >> letter >> position >> value;
        if (file.good())
            execute(letter, position, value);
        else break;
    }
    return true;
}
