#include "GraphTest.hpp"

void basicGraphTest()
{
    std::cout<<"--------------starting Graph test-----------------"<<std::endl;

    Graph<std::string> cityGraph({"Delhi", "London", "New York", "Paris"});

    cityGraph.addEdge("Delhi", "London");
    cityGraph.addEdge("Delhi", "Paris");
    cityGraph.addEdge("Paris", "New York", true);
    cityGraph.addEdge("New York", "London");

    Vector<std::string> cities = cityGraph.nodes();
    while (!cities.isEmpty())
    {
        std::cout<<cities.back()<<"--> ";
        List<std::string> neighbors = cityGraph.neighbors(cities.pop_back());
        while (!neighbors.isEmpty())
        {
            std::cout<<neighbors.pop_front()<<" ";
        }
        std::cout<<std::endl;
    }
    
    std::cout<<"Removing Delhi..."<<std::endl;
    cityGraph.remove("Delhi");
    cityGraph.addEdge("Shanghai", "London", true);
    cityGraph.addEdge("Shanghai", "Paris");

    std::cout<<"Delhi->London? "<<(cityGraph.connected("Delhi", "London") ? "yes" : "no")<<std::endl;
    std::cout<<"London->Shanghai? "<<(cityGraph.connected("London", "Shanghai") ? "yes" : "no")<<std::endl;

    cities = cityGraph.nodes();
    while (!cities.isEmpty())
    {
        std::cout<<cities.back()<<"--> ";
        List<std::string> neighbors = cityGraph.neighbors(cities.pop_back());
        while (!neighbors.isEmpty())
        {
            std::cout<<neighbors.pop_front()<<" ";
        }
        std::cout<<std::endl;
    }

    Graph<std::string> newGraph;
    newGraph = cityGraph;

    std::cout<<"Removing Paris from new graph..."<<std::endl;
    newGraph.remove("Paris");
    std::cout<<"old city graph (size "<<cityGraph.size()<<"): "<<std::endl;
    cities = cityGraph.nodes();
    while (!cities.isEmpty())
    {
        std::cout<<cities.back()<<"--> ";
        List<std::string> neighbors = cityGraph.neighbors(cities.pop_back());
        while (!neighbors.isEmpty())
        {
            std::cout<<neighbors.pop_front()<<" ";
        }
        std::cout<<std::endl;
    }

    std::cout<<"new city graph (size "<<newGraph.size()<<"): "<<std::endl;
    cities = newGraph.nodes();
    while (!cities.isEmpty())
    {
        std::cout<<cities.back()<<"--> ";
        List<std::string> neighbors = newGraph.neighbors(cities.pop_back());
        while (!neighbors.isEmpty())
        {
            std::cout<<neighbors.pop_front()<<" ";
        }
        std::cout<<std::endl;
    }
    
    // BSF, DSF test
    Graph<int> searchGraph;
    searchGraph.addEdge(0, 1, true);
    searchGraph.addEdge(1, 2, true);
    searchGraph.addEdge(2, 3, true);
    searchGraph.addEdge(3, 5, true);
    searchGraph.addEdge(5, 6, true);
    searchGraph.addEdge(4, 5, true);
    searchGraph.addEdge(0, 4, true);
    searchGraph.addEdge(3, 4, true);

    std::cout<<"BFS output: ";
    Vector<int> out = searchGraph.bfs(1);
    for(auto i = 0; i < out.size(); i++)
    {
        std::cout<<out[i]<<"->";
    }
    std::cout<<std::endl;

    std::cout<<"DFS output: ";
    out = searchGraph.dfs(1);
    for(auto i = 0; i < out.size(); i++)
    {
        std::cout<<out[i]<<"->";
    }
    std::cout<<std::endl;

    // Topological sort test
    Graph<int> deps({0,1,2,3,4,5,6});
    deps.addEdge(5, 6);
    deps.addEdge(0, 2);
    deps.addEdge(2, 3);
    deps.addEdge(3, 5);
    deps.addEdge(4, 5);
    deps.addEdge(1, 4);
    deps.addEdge(1, 2);

    std::cout<<"Topological sequence: ";
    out = deps.topologicalSort();
    for(auto i = 0; i < out.size(); i++)
    {
        std::cout<<out[i]<<"->";
    }
    std::cout<<std::endl;

    std::cout<<"--------------ending Graph test-----------------\n"<<std::endl;
}