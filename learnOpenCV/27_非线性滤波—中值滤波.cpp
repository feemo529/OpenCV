//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat img = imread("./images/lena_salt.jpg", IMREAD_ANYCOLOR);
//	Mat gray = imread("./images/equalLena_salt.jpg", IMREAD_ANYCOLOR);
//	Mat gray_gauss = imread("./images/equalLena_gauss.jpg", IMREAD_ANYCOLOR);
//
//	Mat imgResult3, imgResult9, grayResult3, grayResult9, grayResult3_gauss, grayResult9_gauss;
//
//	medianBlur(img, imgResult3, 3);
//	medianBlur(gray, grayResult3, 3);
//	medianBlur(gray_gauss, grayResult3_gauss, 3);
//
//	medianBlur(img, imgResult9, 9);
//	medianBlur(gray, grayResult9, 9);
//	medianBlur(gray_gauss, grayResult9_gauss, 9);
//
//	imshow("imgResult3", imgResult3);
//	imshow("grayResult3", grayResult3);
//	imshow("grayResult3_gauss", grayResult3_gauss);
//
//	imshow("imgResult9", imgResult9);
//	imshow("grayResult9", grayResult9);
//	imshow("grayResult9_gauss", grayResult9_gauss);
//
//
//	waitKey(0);
//
//	return 0;
//}