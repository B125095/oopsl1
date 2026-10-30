#include <iostream>
using namespace std;

class Document {
public:
    virtual void exportFile() {
        cout << "Exporting Document" << endl;
    }
};

class PDFDocument : public Document {
public:
    void exportFile() override {
        cout << "Exporting PDF file (.pdf)" << endl;
    }
};

class TextDocument : public Document {
public:
    void exportFile() override {
        cout << "Exporting Text file (.txt)" << endl;
    }
};

class CSVDocument : public Document {
public:
    void exportFile() override {
        cout << "Exporting CSV file (.csv)" << endl;
    }
};

int main() {
    PDFDocument p;
    TextDocument t;
    CSVDocument c;

    Document *d;

    d = &p;
    d->exportFile();

    d = &t;
    d->exportFile();

    d = &c;
    d->exportFile();

    return 0;
}