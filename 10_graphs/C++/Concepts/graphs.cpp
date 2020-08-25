#include <iostream>
#include <list>
#include <map>
using namespace std;

class Node{
    string label;
    public:
    Node(string label){
        this->label = label;
    }
};

class Graph{
    public:
    map<string, Node> nodes;
    map<Node, list<Node>> adjacency_list;
    //addnode(label)
    void add_node(string label){
        Node node = Node(label);
        nodes.insert_or_assign(label, node);
        list<Node> li;
        adjacency_list.insert_or_assign(node, li);
    }
    //removenode(label)

    //addedge(from, to)
    void add_edge(string from, string to){
        auto fromNode = nodes.find(from);
        auto toNode = nodes.find(to);
        if (fromNode == nodes.end() || toNode == nodes.end()){
            return;
        }
        Node fn = fromNode->second;
        Node tn = toNode->second;
        adjacency_list.find(fn)->second.push_back(tn); // gets the fromNode and adds tn to the end of the list
    }

    //removeedge(from, to)

    //print()
};

int main(){


    return 0;
}