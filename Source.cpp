#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include "Graph.h"


int main()
{
    vector<II> adj_[max_edge];
    int num;
    cout << "Enter the number of routers: ";
    cin >> num;
    while (!num)
    {
        cout << "Invaild value, enter again: ";
        cin >> num;
    }
    Graph a(num);
    a.print_weight();
    a.deleteVertex();
    //a.print_weight();
    cout << "Done";




}
