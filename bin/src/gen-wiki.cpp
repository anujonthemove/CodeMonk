#include "util.h"

int main(int argc, char **argv) {
    string command{argv[0]};
    for (int i = command.size() - 1; i >= 0; i--) {
        if (command[i] == '/') {
            command = command.substr(0, i);
            break;
        }
    }
    chdir(command.c_str());
    map<string, string> wiki_mapping{{"leetcode", "Leet-Code.md"}, {"hackerrank", "Hacker-Rank.md"}, {"hackerearth", "Hacker-Earth.md"}};
    load_config();
    vector<string> platforms{"leetcode", "hackerearth", "hackerrank"};
    for (string platform: platforms) {
        stringstream ss;
        ss << "Here is the full list of my solutions to " << platform << " problems." << endl;
        ss << endl;
        ss << "---" << endl;
        ss << endl;
        ss << "| Problem | Solution |" << endl;
        ss << "| ------ | ------ |" << endl;
        string solutions_path = project_path + "/solutions/" + platform;
        vector<string> filenames = get_file_list(solutions_path);
        for (string filename: filenames) {
            string name = filename;
            if (name.substr(name.size() - 1, 1) == "c") {
                name = name.substr(0, name.size() - 2);
            } else if (name.substr(name.size() - 3, 3) == "cpp") {
                name = name.substr(0, name.size() - 4);
            }
            replace(name.begin(), name.end(), '-', ' ');
            string url = "https://github.com/yangyanzhan/CodeMonk/blob/master/solutions/" + platform + "/" + filename;
            ss << "| " << name << " | [solution url](" << url << ") |" << endl;
        }
        string content = ss.str();
        string wiki_name = wiki_mapping[platform];
        string wiki_file_path = wiki_path + "/" + wiki_name;
        ofstream outFile;
        outFile.open(wiki_file_path.c_str());
        outFile << content;
        outFile.close();
    }
}
