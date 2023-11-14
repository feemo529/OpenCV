#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char** argv) 
{
	Mat img = imread("./images/lsc_.bmp");
	Mat image;
	cvtColor(img, image, COLOR_RGB2GRAY);

	imwrite("lsc_.jpg", image);

	return 0;
}
