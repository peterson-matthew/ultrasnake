#ifndef BLOCK_H
#define BLOCK_H

class Block{
public:
	Block();
	~Block();
	//make a paramterized constructor that can place a block in a specific place
	//truncate positions to ones within the frame
private:
	int xPosition;
	int yPosition;

}