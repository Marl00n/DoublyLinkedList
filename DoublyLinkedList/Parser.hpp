//
//  Parser.hpp
//  DoublyLinkedList
//
//  Created by Jakub Piatek on 16.10.2017.
//  Copyright © 2017 Jakub Piatek. All rights reserved.
//

#ifndef Parser_hpp
#define Parser_hpp

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
#include "List.hpp"

class Parser
{
    friend class List; 
public:
    Parser();
    ~Parser();
    void execute(std::string letter, int position, int value);
    bool readFile(std::string fileName);
};



#endif /* Parser_hpp */

