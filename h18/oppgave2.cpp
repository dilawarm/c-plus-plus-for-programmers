#include <string>
#include <iostream>
#include <memory>
using namespace std;

class File {
public:
    virtual string type() const {
        return "unknown";
    }

    virtual ~File() {}
};

class PDF : public File {
    string type() const override {
        return "Portable Document Format";
    }
};

class Text : public File {
    string type() const override {
        return "Plain text";
    }
};

unique_ptr<File> file(const string &name) {
    size_t index = name.find(".", 0);
    if (index != string::npos) {
        string extension = name.substr(index);
        if (extension == ".pdf") return make_unique<PDF>();
        else if (extension == ".txt") return make_unique<Text>();
        else return make_unique<File>();
    }
    return make_unique<File>();
}

int main() {
    auto f1 = file("test.pdf");
    cout << f1->type() << endl;
    auto f2 = file("test.txt");
    cout << f2->type() << endl;
    auto f3 = file("test.dat");
    cout << f3->type() << endl;
    auto f4 = file("test");
    cout << f4->type() << endl;
}