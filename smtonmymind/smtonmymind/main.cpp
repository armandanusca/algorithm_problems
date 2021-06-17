#include <iostream>

using namespace std;

int main()
{
    char blocks[3] = {'A','B','C'};
    char *ptr = &blocks[0];
    char temp;
    
    temp = blocks[0];cout<<temp<<'\n';
    temp = *(blocks + 2);cout<<temp<<'\n';
    temp = *(ptr + 1);cout<<temp<<'\n';
    temp = *ptr;cout<<temp<<'\n';
    
    ptr = blocks + 1;
    temp = *ptr;cout<<temp<<'\n';
    temp = *(ptr + 1);cout<<temp<<'\n';
    
    ptr = blocks;
    temp = *++ptr;cout<<temp<<'\n';
    temp = ++*ptr;cout<<temp<<'\n';
    temp = *ptr++;cout<<temp<<'\n';
    temp = *ptr;cout<<temp<<'\n';
    
    return 0;
}
