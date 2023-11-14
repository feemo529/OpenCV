//#include <opencv2/opencv.hpp>
//#include <opencv2/ximgproc.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	//中文字进行细化
//	Mat img = imread("./images/black.jpg", IMREAD_ANYCOLOR);
//
//	//英文字+实心圆和圆环细化
//	Mat words = Mat::zeros(100, 200, CV_8UC1);
//	putText(words, "Learn", Point(30, 30), 2, 1, Scalar(255), 2); //添加英文
//	putText(words, "OpenCV 4", Point(30, 60), 2, 1, Scalar(255), 2);
//	circle(words, Point(80, 75), 10, Scalar(255), -1);	//添加实心圆
//	circle(words, Point(130, 75), 10, Scalar(255), 3);	//添加圆环
//
//	Mat thin1, thin2;
//	ximgproc::thinning(img, thin1, 0); //注意类名
//	ximgproc::thinning(words, thin2, 0);
//
//	imshow("thin1", thin1);
//	imshow("img", img);
//	namedWindow("thin2", WINDOW_NORMAL);
//	imshow("thin2", thin2);
//	namedWindow("words", WINDOW_NORMAL);
//	imshow("words", words);
//
//	waitKey(0);
//	return 0;
//}