#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <vector>
#include <cstring>

using namespace std;

const vector<string> keywords = {
    "auto", "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if",
    "inline", "int", "long", "register", "restrict", "return", "short",
    "signed", "sizeof", "static", "struct", "switch", "typedef", "union",
    "unsigned", "void", "volatile", "while", "_Alignas", "_Alignof",
    "_Atomic", "_Bool", "_Complex", "_Generic", "_Imaginary", "_Noreturn",
    "_Static_assert", "_Thread_local"
};

bool isKeyword(const string &str) {
    for (const auto &keyword : keywords) {
        if (str == keyword) {
            return true;
        }
    }
    return false;
}

bool isIOStatement(const string &str) {
    return (str == "scanf" || str == "printf" || str == "cin" || str == "cout");
}

bool isIdentifierChar(char c) {
    return isalnum(c) || c == '_';
}

void processSourceCode(ifstream &file) {
    int c;
    string buffer;
    enum State { DEFAULT, IDENTIFIER, COMMENT, STRING } state = DEFAULT;

    while ((c = file.get()) != EOF) {
        switch (state) {
            case DEFAULT:
                if (isspace(c)) {
                    // Skip white spaces
                } else if (isalpha(c) || c == '_') {
                    
                    buffer.push_back(c);
                    state = IDENTIFIER;
                } else if (c == '/') {
                    // Potential start of a comment
                    c = file.get();
                    if (c == '*') {
                        state = COMMENT;
                    } else {
                        file.unget();
                    }
                } else if (c == '"') {
                    state = STRING;
                }
                break;

            case IDENTIFIER:
                if (isIdentifierChar(c)) {
                    buffer.push_back(c);
                } else {
                    if (isKeyword(buffer)) {
                        cout << "Keyword: " << buffer << endl;
                    } else if (isIOStatement(buffer)) {
                        cout << "IO Statement: " << buffer << endl;
                    } else {
                        cout << "Identifier: " << buffer << endl;
                    }
                    buffer.clear();
                    state = DEFAULT;
                    file.unget();
                }
                break;

            case COMMENT:
                if (c == '*') {
                    c = file.get();
                    if (c == '/') {
                        state = DEFAULT;
                    } else {
                        file.unget();
                    }
                }
                break;

            case STRING:
                if (c == '"') {
                    state = DEFAULT;
                }
                break;
        }
    }

    if (state == IDENTIFIER && !buffer.empty()) {
        if (isKeyword(buffer)) {
            cout << "Keyword: " << buffer << endl;
        } else if (isIOStatement(buffer)) {
            cout << "IO Statement: " << buffer << endl;
        } else {
            cout << "Identifier: " << buffer << endl;
        }
    }
}

int main() {
    ifstream file("input.cpp");
    if (!file) {
        cerr << "Error: Could not open file" << endl;
        return 1;
    }

    processSourceCode(file);

    file.close();
    return 0;
}
