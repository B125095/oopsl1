#include <iostream>
using namespace std;

class Image {
protected:
    int width, height;

public:
    Image(int w, int h) {
        width = w;
        height = h;
    }
};

class CompressedImage : public Image {
protected:
    double ratio;

public:
    CompressedImage(int w, int h, double r) : Image(w, h) {
        ratio = r;
    }
};

class EncryptedImage : public CompressedImage {
    string algorithm;

public:
    EncryptedImage(int w, int h, double r, string a)
        : CompressedImage(w, h, r) {
        algorithm = a;
    }

    void display() {
        int original = width * height;
        double effective = original * ratio / 100;

        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Original Pixels: " << original << endl;
        cout << "Compression Ratio: " << ratio << "%" << endl;
        cout << "Effective Size: " << effective << endl;
        cout << "Encryption: " << algorithm << endl;
    }
};

int main() {
    EncryptedImage img(100, 200, 50, "AES");
    img.display();

    return 0;
}