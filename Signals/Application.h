#ifndef Application_H
#define Application_H

#include "Basic.h"
#include <string>
using namespace std;

class Application
{
protected:         
	int id;        
	string HeadName, heir, obj_out, obj_in;        
	int Affiliation = 1, Condition = 3;        
	Basic* HeadPointer;
public:        
	string head;        
	void Run();
};

#endif