/*
 * hello.hpp
 *
 *  Created on: Apr 3, 2016
 *      Author: daniel
 */

#ifndef HELLO_HPP_
#define HELLO_HPP_

#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>

using namespace std;

#define SIZE 10000

vector<int> v;

struct timeval t1, t2, t3;


long timevaldiff(struct timeval *starttime, struct timeval *finishtime)
{
  long msec;
  msec=(finishtime->tv_sec-starttime->tv_sec)*1000;
  msec+=(finishtime->tv_usec-starttime->tv_usec)/1000;
  return msec;
}

void buildVector()
{
	gettimeofday(&t2, NULL);
	cout << "building vector ..." << endl;

	for (int i=0; i<SIZE; i++)
	{
		//cout << i << " " << "sec = " << t1.tv_sec << "us = " << t1.tv_usec << endl;
		gettimeofday(&t1, NULL);

		srand(t1.tv_usec * t1.tv_sec);
		//usleep(10000);
		v.push_back(rand() % SIZE +1);
	}
	gettimeofday(&t3, NULL);

	cout << "VECTOR BUILD DURATION: " << timevaldiff(&t2, &t3) << " miliseconds" << endl;

}

void printVector()
{
	cout << "printing vector ..." << endl;
	//usleep(3000000);

	for (int i=0; i<SIZE; i++)
		{
		cout << "v[" << i<< "]= " << v.at(i) << endl;
		}
}


void sortLong()
{
	gettimeofday(&t2, NULL);
	cout << "sorting vector ..."<< endl;
	int aux = 0;

for (int i=1; i< SIZE; i++)
	{
	for (int j=0; j<i; j++)
		{
			if (v.at(j) > v.at(i) )
			{
				aux = v.at(j);
				v.at(j) = v.at(i);
				v.at(i)  = aux;
			}
		}
	}

gettimeofday(&t3, NULL);

cout << "SORT DURATION: " << timevaldiff(&t2, &t3) << " miliseconds" << endl;

}



void sortFast()
{
	cout << "sorting vector ... "<< endl;


}



#endif /* HELLO_HPP_ */


