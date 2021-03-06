//
// Created by bar on 11/05/18.
//
#include "Board.h"

Node::Node(){}

Node::Node(char c)
{
    if(c=='X' || c== 'O' || c=='.')
        this->val = c;
    else{
        IllegalCharException ex;
        ex.setInput(val);
        throw ex;
    }
}

char Node::getNode() const
{
    return this->val;
}

Node& Node::operator=(char val)
{
    if(val=='X' || val=='O' || val=='.'){
        this->val = val;
        return *this;
    }
    else
    {
        IllegalCharException ex;
        ex.setInput(val);
        throw ex;
    }
}

Coordinate::Coordinate(uint x,uint y):row(x),col(y) {}

void Coordinate::setCoordinate(Coordinate c) {
    row = c.row;
    col = c.col;
}
