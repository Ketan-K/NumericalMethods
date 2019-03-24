#include <iostream>
#include <fstream>
unsigned int N;

bool getInputFromFile(char *filename)
{
    ifstream fin;
    fin.open(filename);
    if (!fin)
        return false;
    fin >> N;
}