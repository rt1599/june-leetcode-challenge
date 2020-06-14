// Day 14 June LeetCoding Challenge

// Problem 14

// Cheapest Flights Within K Stops

// There are n cities connected by m flights. Each flight starts from city u and arrives at v with a price w.
// Now given all the cities and flights, together with starting city src and the destination dst, 
// your task is to find the cheapest price from src to dst with up to k stops. If there is no such route, output -1.

// Example 1:
// Input: 
// n = 3, edges = [[0,1,100],[1,2,100],[0,2,500]]
// src = 0, dst = 2, k = 1

// Output: 200


int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) 
{
    vector<int> dist( n, INT_MAX );
    dist[src] = 0;
        
        // Run only K+1 times since we want shortest distance in K hops
    vector<int> tmp(dist);
    for( int i=0; i <= K; i++ ) 
    {
        for( auto flight : flights ) 
        {
            if( dist[ flight[0] ] != INT_MAX ) 
            {
                tmp[ flight[1] ] = min( tmp[flight[1]], dist[ flight[0] ] + flight[2] );
            }
        }
        dist = tmp;
    }
        
    return dist[dst] == INT_MAX ? -1 : dist[dst];
}
