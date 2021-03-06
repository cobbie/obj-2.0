#ifndef STORAGE_H
#define STORAGE_H

#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

#include"Building.h"
#include"Supply.h"
#include"Location.h"
#include"Employee.h"

using namespace std;

class Storage : public Building
{
public:
	Location Site;
public:
	Storage::Storage(int x, int y);
	void Print();
	void PrintAssignment();
	vector<Supply*> TakeSupplies();
};
#endif