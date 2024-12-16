
#include "AdjacencyList.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int lines;
    int power_iterations;

    string from;
    string to;

    cin >> lines;
    cin >> power_iterations;

    // create a graph object
    AdjacencyList websites;
    for(int i = 0; i < lines; i++)
    {
        cin >> from;
        cin >> to;
        // add each adjacency to the list
        websites.insert(from, to);
    }
    websites.pageRank(power_iterations);
    websites.printRanks();
}