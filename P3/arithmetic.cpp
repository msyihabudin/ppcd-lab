#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

Mat img1, img2, img3, hasil;

int main()
{
    img1 = imread("");
    img2 = imread("");

    img3 = img2 * 1.618;

    divide(img1, img3, hasil);
    return 1;
}
