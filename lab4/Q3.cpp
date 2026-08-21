#include<iostream>
using namespace std;

class Camera {
private:
    string brand;
    string model;
    int megapixels;
    int storage;

public:
    Camera(string b, string m, int mp, int s) {
        brand = b;
        model = m;
        megapixels = mp;
        storage = s;
    }

    friend void compareCamera(Camera c1, Camera c2);
};

void compareCamera(Camera c1, Camera c2) {
    Camera better = c1;

    if(c2.megapixels > c1.megapixels ||  c2.storage > c1.storage) {
        better = c2;
    }

    cout << "Better Camera" << endl;
    cout << "Brand: " << better.brand << endl;
    cout << "Model: " << better.model << endl;
    cout << "Megapixels: " << better.megapixels << endl;
    cout << "Storage: " << better.storage << " GB" << endl;
}

int main() {
    Camera c1("Canon", "EOS", 24, 128);
    Camera c2("Sony", "Alpha", 32, 256);

    compareCamera(c1, c2);

    return 0;
}