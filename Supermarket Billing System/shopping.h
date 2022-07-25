#pragma once
#include <string>
using namespace std;
class shopping
{
private:
	int pcode;
	float price;
	float dis;
	string pname;
public:
	void menu();
	void adminstrator();
	void buyer();
	void add();
	void edit();
	void rem();
	void list();
	void receipt();
};

