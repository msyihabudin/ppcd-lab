#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

/// function header = Prototype Fungsi
int hitungScretch(int, int, int, int, int);

int main()
{
    //Load image
    Mat image = imread("IPB.png");
    Mat new_image = image.clone();

    //ambil inputan r1, s1, r2, s2
    int r1, s1, r2, s2;
    cout << "r1: "<<endl; cin >> r1;
    cout << "s1: "<<endl; cin >> s1;
    cout << "r2: "<<endl; cin >> r2;
    cout << "s2: "<<endl; cin >> s2;

    for(int y = 0; y < image.rows; y++)
    {
        for(int x = 0; x < image.cols; x++)
        {
            for(int c = 0; c < 3; c++)
            {
                int output = hitungScretch(image.at<Vec3b>(y,x)[c],r1,s1,r2,s2);
                new_image.at<Vec3b>(y,x)[c] = saturate_cast<uchar>(output);
            }
        }
    }

    namedWindow("Original Image", 1);
    namedWindow("Scretching Image", 1);

    imshow("Original Image", image);
    imshow("Scretching Image", new_image);

    waitKey();

    return 0;
}

int hitungScretch(int x, int r1, int s1, int r2, int s2)
{
    float result;
    if(0 <= x && x <= r1)
    {
        result = s1/r1 * x;
    }
    else if(r1 < x && x <= r2)
    {
        result = ((s2 - s1)/(r2 - r1)) * (x - r1) + s1;
    }
    else if(r2 < x && x <= 255)
    {
        result = ((255 - s2)/(255 - r2)) * (x - r2) + s2;
    }
    return (int)result;
}
