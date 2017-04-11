#include "util.h"

string project_path;
string wiki_path;

void load_config() {
    ifstream inFile;
    inFile.open("codemonk.config");
    getline(inFile, project_path);
    getline(inFile, wiki_path);
    inFile.close();
}

vector<string> get_file_list(string root_path) {
    vector<string> list;
    DIR *dir = opendir(root_path.c_str());
    while (struct dirent *entry = readdir(dir)) {
        if (entry->d_type == DT_REG) {
            string name{entry->d_name};
            if (name.size() > 0 && name[0] != '.') {
                list.push_back(name);
            }
        }
    }
    closedir(dir);
    return list;
}

vector<string> get_directory_list(string root_path) {
    vector<string> list;
    DIR *dir = opendir(root_path.c_str());
    while (struct dirent *entry = readdir(dir)) {
        if (entry->d_type == DT_DIR) {
            string name{entry->d_name};
            if (name.size() > 0 && name[0] != '.') {
                list.push_back(name);
            }
        }
    }
    closedir(dir);
    return list;
}
