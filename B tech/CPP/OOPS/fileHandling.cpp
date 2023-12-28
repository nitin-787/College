#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string line;

    // Open the file for writing
    ofstream my_file_out("nitin.txt", ios::app);

    // Check if the file is open for writing
    if (my_file_out.is_open()) {
        my_file_out << "\nnitin love watching anime" << endl;

        // Close the file after writing
        my_file_out.close();
    } else {
        cout << "Unable to open file for writing." << endl;
    }

    // Open the file for reading
    fstream my_file_in("nitin.txt", ios::in);

    // Check if the file is open for reading
    if (my_file_in.is_open()) {
        // Read and print each line
        while (getline(my_file_in, line)) {
            cout << line << endl;
        }

        // Close the file after reading
        my_file_in.close();
    } else {
        cout << "Unable to open file for reading." << endl;
    }

    return 0;
}
