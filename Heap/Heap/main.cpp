// Heap
// Demonstrates dynamically allocating memory

#include <iostream>

using namespace std;

int* intOnHeap();  //returns an int on the heap
void leak1();      //creates a memory leak
void leak2();      //creates another memory leak

int main()
{
	int* pHeap = new int;
	*pHeap = 10;
	cout << "*pHeap: " << *pHeap << "\n\n";

	int* pHeap2 = intOnHeap();
	cout << "*pHeap2: " << *pHeap2 << "\n\n";

	cout << "Freeing memory pointed to by pHeap.\n\n";
	delete pHeap;

	cout << "Freeing memory pointed to by pHeap2.\n\n";
	delete pHeap2;
	leak1();

	//get rid of dangling pointers
	pHeap = 0;
	pHeap2 = 0;
	cin.get();

	return 0;
}

int* intOnHeap()
{
	
	int* pTemp = new int(20);
	return pTemp;
}

void leak1()
{
	// the new command allocates memory
	// for every new command you must delete it
	int* drip1 = new int(30);
	cout << "Mem address of drip1 is: " << &drip1 << " mem location that it contains is: " << drip1 << endl;
	cout << "value that drip1 contains: " << *drip1 << endl;
	cout << "Now we delete drip one" << endl;
	delete drip1;
	//mem location still has something in it
	cout << "Mem address of drip1 is: " << &drip1 << " mem location that it contains is: " << drip1 << endl;
	//should set drip1 to 0 to get ride of the mem location
	drip1 = 0;
	cout << "Mem address of drip1 is: " << &drip1 << " mem location that it contains is: " << drip1 << endl;
}

void leak2()
{
	int* drip2 = new int(50);
	drip2 = new int(100);
	delete drip2;
}

