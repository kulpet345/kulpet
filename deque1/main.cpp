#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <deque>
#include "deque1.h"
#include <iterator>
#include <vector>
//#include <gtest/gtest.h>

using namespace std;

const int cnt = 1000;


int main(int argc, char ** argv)
{
	//testing::InitGoogleTest(&argc, argv);
	//return RUN_ALL_TESTS();
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
		deque<int> deq1;
		Deque<int> deq2;
		for (int i = 1; i <= cnt; i++)
		{
			//cout << "!!!" << endl;
			if (deq1.empty())
			{
				int pok = rand() % 2;
				int pok1 = rand();
				//if (pok != 0)
				cout << pok << ' ' << pok1 << endl;
				if (pok == 0)
				{
					deq1.push_front(pok1);
					deq2.push_front(pok1);
					//cout << pok << endl;
				}
				else
				{
					deq1.push_back(pok1);
					deq2.push_back(pok1);
					//cout << pok << endl;
				}
			}
			else
			{
				int pok = rand() % 10;
				int pok1 = rand();
				cout << pok << ' ' << pok1 << endl;
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
					//cout << deq.left.size() << ' ' << right.size();
					//cout << deq2.right[0] << endl;
					//cout << "!!!!" << endl;
					deq2.pop_front();
					//cout << "!!!!" << endl;
				}
				if (pok == 9)
				{
					deq1.pop_back();
					deq2.pop_back();
				}
			}
			//cout << "!!!!" << endl;
			vector < int > v1, v2;
			for (auto it = deq1.begin(); it != deq1.end(); it++)
			{
				v1.push_back(*it);
				//cout << (*it) << ' ';
			}
			//cout << endl;
			//v2 = deq2.vBegin_;
			reverse(v2.begin(), v2.end());
			for (int i = 0; i < int(deq2.size()); i++)
			{
				v2.push_back(deq2[i]);
			}
			//for (int i = 0; i < v2.size(); i++)
			//{
				//cout << v2[i] << ' ';
			//}
			//cout << endl;
			if (v1 != v2)
			{
				for (auto it : v1)
				{
					cout << it << ' ';
				}
				cout << endl;
				for (auto it : v2)
				{
					cout << it << ' ';
				}
				cout << i << ' ' << -1;
				return 0;
			}
			//cout << "!!!" << endl;
			vector < int > v3;
			//cout << *(deq2.begin()) << endl;
			for (auto it = deq2.begin(); it != deq2.end(); it++)
			{
				//cout << "!!!!" << endl;
				v3.push_back(*it);
				//cout << (*it) << endl;
			}
			//if (v1 != v2 || v1 != v3)
			//{
			//	cout << i << ' ' << -1;
			//	return 0;
			//}
			//if (!deq2.empty())
			//{
			//	if (!deq2.tail.empty())
			//	{
			//		cout << deq2..back() << endl;
			//	}
			//}
			//cout << v1.size() << endl;
			//if (deq1.size() == deq2.size()
		}
		//deque<int>::const_reverse_iterator it = deq2.crend();
	return 0;
}