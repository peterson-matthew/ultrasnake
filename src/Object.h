#ifndef OBJECT_H
#define OBJECT_H

#include <list>

//make an enumerated type called heading that tells where to build the new block
//if an object tries to advance out of the frame, truncate the object's position

class Object{
public: 
	Object(); //default constructor
	~Object(); //default destructor
	void advance();	//advances object's position by one frame
	list<Block*> getMemberBlocks();	//points to the member blocks of the object
private:
	boolean canMove;	//the flag that indicates whether or not this object moves
}