#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    string filename = "heck.csv";   // The CSV filename
    string cell;                    // A spreadsheet "cell"

    ifstream inputFile;             // Stream for input file
    inputFile.open(filename.c_str());

    int num_cells = 6;              // Number of cells to read

    // Read and output values in file
    for (int i = 0; i < num_cells; i++) {
        getline(inputFile, cell, ',');
        cout << endl << cell;
    }

    // Int cannot be converted to void
    return 1;
}
