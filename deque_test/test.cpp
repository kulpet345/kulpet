#include "pch.h"
#include <iostream>
#include <deque>
#include <iterator>
#include "deque1/deque.h"
#include <vector>

using namespace std;

TEST(Correct, Test1) 
{
	int cnt = 1000;
	deque<int> deq1;
	Deque<int> deq2;
	for (int i = 1; i <= cnt; i++)
	{
		if (deq1.empty())
		{
			int pok = rand() % 2;
			int pok1 = rand();
			if (pok == 0)
			{
				deq1.push_front(pok1);
				deq2.push_front(pok1);
			}
			else
			{
				deq1.push_back(pok1);
				deq2.push_back(pok1);
			}
		}
		else
		{
			int pok = rand() % 10;
			int pok1 = rand();
			if (pok <= 3)
			{
				deq1.push_front(pok1);
				deq2.push_front(pok1);
			}
			if (pok >= 4 && pok <= 7)
			{
				deq1.push_back(pok1);
				deq2.push_back(pok1);
			}
			if (pok == 8)
			{
				deq1.pop_front();
				deq2.pop_front();
			}
			if (pok == 9)
			{
				deq1.pop_back();
				deq2.pop_back();
			}
		}
		vector < int > v1, v2;
		for (auto it = deq1.begin(); it != deq1.end(); it++)
		{
			v1.push_back(*it);
		}
		reverse(v2.begin(), v2.end());
		for (int i = 0; i < int(deq2.size()); i++)
		{
			v2.push_back(deq2[i]);
		}
		ASSERT_EQ(v1, v2);
		vector < int > v3;
		for (auto it = deq2.begin(); it != deq2.end(); it++)
		{
			v3.push_back(*it);
		}
	}
}
