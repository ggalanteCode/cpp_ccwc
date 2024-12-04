#include <iostream>
//#include <fstream>
#include <string>
#include <filesystem>

using namespace std;
using namespace std::filesystem;

// -c option
uintmax_t count_number_of_bytes(const string& file_path) {
    path file(file_path);
    return file_size(file);
}

// -l option
int count_number_of_lines() {
    
    //TODO
    
    return 0;
}

//TODO
int count_number_of_words() {
    return 0;
}

//TODO
int count_number_of_characters() {
    return 0;
}

/*
TODO ---> questo metodo dovrà ritornare un array di int...
          approfondire i puntatori e gli altri modi possibili per ritornare un array di int
*/
int count_with_default_option() {
    return 0;
}

//TODO
int main(int argc, char* argv[]) {

    string option{argv[1]};
    string path{argv[2]};
    uintmax_t result{0};

    if (option == "-c") {
        result = count_number_of_bytes(path);
    }
    else if (option == "-l") {
        //TODO
    }

    cout << result << " " << path << endl;

    return 0;
}