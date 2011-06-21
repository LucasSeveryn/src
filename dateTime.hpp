#ifndef INC_DATE_TIME_H
#define INC_DATE_TIME_H

using namespace std;

class DateTime{
protected:
	int day;
	int month;
	int year;

	int h;
	int min;
	int sec;
protected:
	void setDateTime(int,int,int,int,int,int);
public:
	DateTime(string);
	void printDateTime();

};

#endif
