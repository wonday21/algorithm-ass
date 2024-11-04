#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

const int MAX_FILES = 100; 
string files[MAX_FILES] = {
    "wondays.txt", "birhanus.xls","ahmeds.pptx", "tedys.txt",
    "aklilus.txt","temesgens.xls" };
int fileCount = 5;

void displayFiles() {
    cout << "Files:\n";
    for (int i = 0; i <= fileCount; ++i) {
        cout << files[i] << endl;
    }
}

void searchFile() {
    string query;
    cout << "Enter file name to search: ";
    getline(cin, query);
    
    for (int i = 0; i <=fileCount; ++i) {
        if (files[i] == query) {
            cout << "File found: " << files[i] << endl;
            return;
        }
    }
    cout << "File not found: " << query << endl;
}

void sortFiles() {
    int sortChoice;
    cout << "Choose sorting order:\n";
    cout << "1. Ascending Order\n";
    cout << "2. Descending Order\n";
    cout << "Enter your choice: ";
    cin >> sortChoice;

    if (sortChoice == 1) {
        sort(files, files + fileCount); 
        cout << "Files sorted successfully in ascending order.\n";
    } else if (sortChoice == 2) {
        sort(files, files + fileCount, greater<string>());
        cout << "Files sorted successfully in descending order.\n";
    } else {
        cout << "Invalid choice. Sorting operation canceled.\n";
        return; // Exit the function if invalid choice
    }

    displayFiles();
}
