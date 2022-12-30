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
    std::cout<<"old city graph: "<<std::endl;
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

    std::cout<<"new city graph: "<<std::endl;
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

    std::cout<<"--------------ending Graph test-----------------\n"<<std::endl;
}