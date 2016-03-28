#include "SpecialCounter.h"
SpecialCounter::SpecialCounter()
{
	Beg = 0;
	end = 255;
	count = 0;
}
SpecialCounter::~SpecialCounter()
{
}
void SpecialCounter::Begin(int start)
{
	Beg = start;
	if (count < start)
		count = start;
}
void SpecialCounter::End(int stop)
{
	end = stop;
	if (count > stop)
		count = stop;
}
void SpecialCounter::stepInc(int stepS)
{
	if (count <= (end - stepS))
		count = count + stepS;
}
void SpecialCounter::stepDec(int stepS)
{
	if (count >= (Beg + stepS))
		count = count - stepS;
}
int& SpecialCounter::operator++(void)
{
	if (count < end)
		count++;
	return count;
}
int SpecialCounter::operator++(int)
{
	int Tmp = count;
	if (count < end)
	{
		++Tmp;
	}
	return Tmp;
}
int& SpecialCounter::operator--(void)
{
	if (count > Beg)
		count--;
	return count;
}
int SpecialCounter::operator--(int)
{
	int Tmp = count;
	if (count >Beg)
	{
		--Tmp;
	}
	return Tmp;
}
int SpecialCounter::V(void)
{
	return count;
}