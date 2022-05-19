#include "Application.h"
using namespace std;

/*
¬ходные данные:
root 
root obj1 2 1 
root obj2 2 1 
obj1 obj1a 3 1 
obj1 obj1b 3 0 
root obj3 3 -1 
obj3 obj3a 2 1 
obj1a obj1aa 2 -1 
endtree 
134 obj1 obj3 
76 obj1 obj1aa 
348 obj3a obj2 
4 root obj2 
23 obj2 root 
0 
obj1 AAA 
obj2 AAB 
obj3a AAC
root ABC 
endsignals


*/


int main()
{        
	Application Go;        
	Go.Run();        
	return(0);
}