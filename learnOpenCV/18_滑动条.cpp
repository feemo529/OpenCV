//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//Mat img;
//void callBack(int value,void*)
//{
//	float a = value / 100.0;
//
//	Mat img2;
//
//	img2 = img * a;
//
//	imshow("img", img2);
//}
//
//int main()
//{
//	img = imread("./images/LenaRGB.bmp");
//
//	namedWindow("img");
//
//	imshow("img", img);
//
//	int value = 100;
//	
//	createTrackbar("°Ù·Ö±È", "img", &value, 600, callBack, 0);
//
//
//	waitKey(0);
//
//	return 0;
//}