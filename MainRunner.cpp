//
// Created by Sora on 2/27/2021.
//

#include "Customer.hpp"
#include "Calculations.hpp"
#include <iostream>
#include <queue>

using namespace std;

int main()
{
int numOfArrivals;
int averageArrivals;
int averageServed;
int numOfChannels;
int queueLength = 200;
priority_queue<Customer> q;

int serverAvailableCount = 0;
Calculations c;
c.GetNextRandomInterval(10);
cout << "Enter n - number of arrivals to simulate (1001 - 5000)" << endl;
cin >> numOfArrivals;
cout << "Enter lambda - average arrivals in a time period" << endl;
cin >> averageArrivals;
cout << "Enter mu = average number served in a time period" << endl;
cin >> averageServed;
cout << "Enter M - the number of service channels (1 - 10)" << endl;
cin >> numOfChannels;


serverAvailableCount = numOfChannels;


//    while(PQ is not empty)
//    processNextEvent()
//    if(moreArrivals and PQ.size <= M+1)
//        add arrivals to PQ
//    Show Simulation Results
//    processStatistics()
//    if(currentWaitTime > 0)
//        increment customerWaitedCnt
//        totalWaitTime = totalWaitTime + currentWaitTime
//    accumulate serviceTime
//    if(serverAvailableCnt == M)
//        accumulate idleTime
//        processNextEvent()
//    if(event is an Arrival)
//    if(serverAvailableCnt > 0)
//        decrement serverAvailableCnt
//        startOfServiceTime = ArrivalTime
//    interval = getNextRandomInterval(mu)
//    departureTime = arrivaltime + interval
//    place departureEvent in PQ
//    else
//    place Customer in FIFO
//    else // processing a departure event
//    increment serverAvailableCnt
//    processStatistics()
//    if(Customer in FIFO)
//    remove Customer from FIFO
//    startOfServiveTime = time of departure event
//    interval = getNextRandomInterval(mu)
//    departureTime = startOfServiveTime + interval
//    place departureEvent in PQ
//    decrement serverAvailableCnt






    return 0;
}