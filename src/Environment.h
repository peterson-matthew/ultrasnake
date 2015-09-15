#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

//includes
#include <Object.h>
#include <Block.h>
#include <vector>

class Environment{
public:
	Environment();		//default constructor
	~Environment();		//default destructor
	//future editions will have a level filename as argument, which
	// will contain instructions for building the level
	vector<Object*> getObjectRegistry();
	void advanceFrame();
private:
	vector<Object> objectRegistry;
	int width;//the width of the gameboard in block units
	int height;//the height of the gameboard in block units
	/*
	* FUTURE INCLUSIONS FOR ENVIRONMENT CLASS:
	* -Level number
	* -Event Queue (schedule for food drops, enemy spawns, etc)
	* -Spawners (objects that add enemy spawns and food drops to the queue)
	*/
}