#pragma once
class SpecialCounter
{
private:
	int count;
	int Beg;
	int end;

public:
	SpecialCounter();
	~SpecialCounter();
	void stepInc(int stepS);
	void stepDec(int stepS);
	void Begin(int start);
	int& operator++(void);
	void End(int stop);
	int operator++(int);
	int& operator--(void);
	int operator--(int);
	int V();
};