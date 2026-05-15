/********************************************************************************
* WARNING: Please do not remove or modify this comment block.
 *
 * Student Information:
 * Name: Amro Elsafoury
 * Student ID: 900242312
 * Section Number: 01
 *
 * Instructions:
 * - Fill out your name, student ID, and section number above.
 * - This information is mandatory for the submission of your assignment.
 * - Do not modify this file beyond the specified tasks and guidelines.
 *
 ********************************************************************************/

#include "dijkstra.h"
#include "floyd.h"
#include "graph.h"
#include <vector>
#include <queue>

using namespace std;

vector<int> dijkstra(int src) {
    vector<int> dist(n, 1e9);

    // min heap priority queue
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // set source distance = 0 and push to pq
    dist[src] = 0;
    pq.push({ 0, src });

    // dijkstra loop
    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        // ignore old values
        if (d > dist[u])
            continue;

        // loop through the adjacency list
        for (int i = 0; i < adjList[u].size(); i++) {
            int v = adjList[u][i].first;
            int w = adjList[u][i].second;

            // relaxation adjacent nodes
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;

                pq.push({ dist[v], v });
            }
        }
    }


    return dist;
}

vector<vector<int>> repeatedDijkstra() {
    vector<vector<int>> all(n, vector<int>(n));

    // run dijkstra(i) for all i
    for (int i = 0; i < n; i++)
        all[i] = dijkstra(i);

    return all;
}

vector<vector<int>> floydWarshall() {
    vector<vector<int>> dist = adjMatrix;

    // floyd-warshall triple loop
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                // check if k is valid
                if (dist[i][j] < 1e9 && dist[k][j] < 1e9)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

    return dist;
}
