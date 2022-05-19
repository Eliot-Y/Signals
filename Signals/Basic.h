#ifndef Basic_H
#define Basic_H

#include <string>
#include <vector>
using namespace std;

class Basic
{
protected:        
	Basic* HeadObject;        
	string Name;        
	int Affiliation, Condition;        
	static int chet, k, p;        
	Basic* ObjPtr;        
	static Basic* rootPtr;        
	int ID;        
	vector <Basic*> SignArr;

public:        
	void connection(string obj_in, int ID);        
	void giveOut();        
	void disconnection();        
	string signal;        
	Basic* FindRoot(string head);        
	vector <Basic*> Tree, Coll, Posled;        
	Basic(Basic* HeadObject);        
	Basic(Basic* HeadObject, string Name, int Affiliation, int Condition);        
	void SetName(string Name);        
	string GetName();        
	void Print();        
	~Basic();
};

#endif
