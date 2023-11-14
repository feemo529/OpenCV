//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat img = imread("./images/LenaRGB.bmp");
//	Mat white = imread("./images/white.png");
//	Mat black = imread("./images/black.png");
//
//	Mat Min, Max;
//	min(img, white, Min);
//	max(img, black, Max);
//
//	Mat gray, gray_black, gray_white;
//	cvtColor(img, gray, COLOR_BGR2GRAY);
//	cvtColor(black, gray_black, COLOR_BGR2GRAY);
//	cvtColor(white, gray_white, COLOR_BGR2GRAY);
//
//	double minVal, maxVal;
//	Point minLoc, maxLoc;
//
//	minMaxLoc(gray, &minVal, &maxVal, &minLoc, &maxLoc, gray_white);
//
//
//	return 0;
//}