#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
using namespace cv;

int main()
{
    Mat image, image_gray;

    image_gray = imread("ipb.png", CV_LOAD_IMAGE_GRAYSCALE);

    cvtColor(image_gray, image, CV_BGR2GRAY);

    // inisialisasi wadah baru
    Mat new_image = Mat::zeros(image, size(), image.type());

    // buat sebuah matriks yang bernilai 255 untuk semua elemennya
    Mat sub_mat = Mat::ones(image, size(), image.type());



    return 1;
}

