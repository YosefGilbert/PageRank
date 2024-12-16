
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
class AdjacencyList {

private:
    // this map is the adjacency list, where websites (keys) are paired with vectors of neighboring websites (values)
    map<string, vector<string>> web;
    // this vector keeps track of the current page ranks, which changes after power iteration p
    vector<double> rankings;
    // size is set to its correct value when PageRank is called
    unsigned int size = 0;

public:
    vector<double> pageRank(int power);
    void insert(const string& from, const string& to);
    // used for testing
    void printWeb();
    void printRanks();
};

vector<double> AdjacencyList::pageRank(int power)
{
    /* grade scope seems to define power iterations as starting at 1 instead of 0, so I will decrement the power */
    power--;

    // assigns the default ranks r(0) to the websites
    size = web.size();
    double rank = 1 / double(size);
    for (unsigned int i = 0; i < web.size(); i++)
    {
        rankings.push_back(rank);
    }

    for (int p = 0; p < power; p++)
    {
        vector<double> new_rankings;

        double value;
        for (const auto& website_i : web)
        {
            value = 0;
            int k = 0;
            for (const auto& website_k : web)
            {
                //see if k's vector contains i (in other words, is i a neighbor of k)
                if (find(website_k.second.begin(), website_k.second.end(), website_i.first) != website_k.second.end())
                {
                    value += rankings[k] * (1 / double(web[website_k.first].size()));
                }
                //if it does not, zero is added to the value (do nothing)
                k++;
            }
            new_rankings.push_back(value);
        }
        rankings = new_rankings;
    }
    return rankings;
}


void AdjacencyList::insert(const string& from, const string& to)
{
    web[from].push_back(to);
    web[to];
    // in the case where web[from] does not exist yet, a default vector is created and "to" is added to it
    // similarly for web[to], except nothing is added to it
}

void AdjacencyList::printWeb()
// useful for debugging, prints each website along with its neighbors and respective ranks
{
    for (const auto& website : web)
    {
        cout << "SITE: " << website.first << " NEIGHBORS: ";
        for (const auto& neighbor : website.second)
        {
            cout << neighbor <<  ", ";
        }
        cout << endl;
    }
}

void AdjacencyList::printRanks() {
    int i = 0;
    for (const auto& website : web)
    {
        // This method for setting precision was inspired by the stack overflow linked in the FAQs
        cout << fixed << showpoint;
        cout << setprecision(2);
        cout << website.first << " " << rankings[i];
        cout << endl;
        i++;
    }
}

/* prints the PageRank of all pages after p powerIterations in
ascending alphabetical order of webpages and rounding rank to two
        decimal places */
