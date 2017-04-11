#include <map>
#include <vector>
#include <string>
#include <dirent.h>
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

extern string project_path;
extern string wiki_path;

void load_config();
vector<string> get_file_list(string root_path);
vector<string> get_directory_list(string root_path);
