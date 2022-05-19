#include "Application.h"
#include "Basic.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int Basic::chet = 1, Basic::k = 0, Basic::p = 0;

Basic* Basic::rootPtr; 

Basic::Basic(Basic* HeadObject) 
{ 
	this->HeadObject = HeadObject; 
}

Basic::Basic(Basic* HeadObject, string Name, int Affiliation, int Condition) 
{ 
	SetName(Name);        
	this->HeadObject = HeadObject;        
	this->Affiliation = Affiliation;        
	this->Condition = Condition;        
	if (HeadObject != 0) 
	{ 
		HeadObject->Tree.push_back(this); 
	} 
}

void Basic::SetName(string Name) 
{ 
	this->Name = Name; 
}

string Basic::GetName() 
{ 
	return Name; 
}

void Basic::connection(string obj_in, int ID) 
{ 
	this->ID = ID;        
	ObjPtr = rootPtr->FindRoot(obj_in);        
	SignArr.push_back(ObjPtr); 
}

void Basic::giveOut() 
{ 
	for (int i = 0; i < Posled.size(); i++) 
	{ 
		if (Posled[i]->SignArr.size() != 0 && Posled[i]->signal != "") 
		{ 
			for (int j = 0; j < Posled[i]->SignArr.size(); j++) 
			{ 
				cout << "\nSignal to " << Posled[i]->SignArr[j]->GetName();                                
				cout << " Text: " << Posled[i]->GetName() << "-> " << Posled[i]->signal; 
			} 
		} 
	} 
}       

void Basic::disconnection() 
{ 
	SignArr.clear(); 
}

Basic* Basic::FindRoot(string head) 
{
	for (int i = 0; i < Coll.size(); i++) 
	{ 
		if (Coll[i]->GetName() == head) 
		{ 
			return Coll[i]; 
		} 
	}        
	return nullptr;
}

void Basic::Print() 
{ 
	if (k != 1) 
	{ 
		cout << "Object tree" << endl << GetName();                
		k++;                
		rootPtr = this; 
	}        
	
	for (int i = 0; i < Tree.size(); i++) 
	{ 
		cout << endl;                
		for (int j = 0; j < chet; j++) 
		{ 
			cout << "    "; 
		}                
		cout << Tree[i]->GetName();                
		
		if (Tree[i]->Tree.size() != 0) 
		{ 
			chet++;                        
			Tree[i]->Print();                        
			if (chet != 1)                                
				chet--; 
		} 
	} 
}

Basic::~Basic() 
{ 
	for (int i = 0; i < Tree.size(); i++) 
	{ 
		delete Tree[i]; 
	} 
}