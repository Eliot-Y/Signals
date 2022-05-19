#include "Cl1.h"
#include "Cl2.h"
#include "Cl3.h"
#include "Application.h"
#include "Basic.h"
#include <iostream>
#include <string>
using namespace std;

void Application::Run()
{        
    cin >> HeadName;
    Cl1* rootObj = new Cl1(nullptr, HeadName, Affiliation, Condition);
    Cl2* geet2(0);        
    Cl3* geet3(0);        
    rootObj->Coll.push_back(rootObj);  

    cin >> head;        
    while (head != "endtree")
    {                
        cin >> heir >> Affiliation >> Condition;
        HeadPointer = rootObj->FindRoot(head);  

        switch (Affiliation) 
        { 
        case 2:                        
            geet2 = new Cl2(HeadPointer, heir, Affiliation, Condition);   
            rootObj->Coll.push_back(geet2);                        
            break;                
        case 3:                        
            geet3 = new Cl3(HeadPointer, heir, Affiliation, Condition);   
            rootObj->Coll.push_back(geet3);                        
            break; 
        }                
        cin >> head;
    }
    rootObj->Print();
    cout << "\nSet connects";

    cin >> id;        
    while (id != 0) 
    { 
        cin >> obj_out >> obj_in;                
        HeadPointer = rootObj->FindRoot(obj_out);                
        HeadPointer->connection(obj_in, id);                
        cout << endl << id << " " << obj_out << " " << obj_in;                
        cin >> id; 
    }        
    cin >> obj_out;  

    while (obj_out != "endsignals")
    {
        HeadPointer = rootObj->FindRoot(obj_out);
        cin >> HeadPointer->signal;                
        cin >> obj_out;                
        rootObj->Posled.push_back(HeadPointer);
    }               
    cout << "\nEmit signals";        
    rootObj->giveOut();        
    delete rootObj;
}