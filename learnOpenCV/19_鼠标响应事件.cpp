//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//Mat img, imgPoint; //全局图像
//Point prePoint; //前一时刻鼠标的坐标，用于绘制直线
//
//void mouse(int event, int x, int y, int flags, void*)
//{
//
//	if (event == EVENT_RBUTTONDOWN)
//	{
//		cout << "点击鼠标左键才可以绘制轨迹" << endl;
//	}
//	if (event == EVENT_LBUTTONDOWN)
//	{
//		prePoint = Point(x, y);
//		cout << "轨迹起始坐标" << prePoint << endl;
//	}
//	if (event == EVENT_MOUSEMOVE && (flags & EVENT_FLAG_LBUTTON)) //鼠标按住左键移动
//	{
//		//通过绘制直线显示鼠标移动轨迹
//		Point pt(x, y);
//		line(img, prePoint, pt, Scalar(255, 255, 255), 2, 5, 0);
//		prePoint = pt;
//		imshow("图像窗口 1", img);
//
//		//通过改变图像像素显示鼠标移动轨迹
//		imgPoint.at<Vec3b>(y, x) = Vec3b(255, 255, 255);
//		imgPoint.at<Vec3b>(y, x - 1) = Vec3b(255, 255, 255);
//		imgPoint.at<Vec3b>(y, x + 1) = Vec3b(255, 255, 255);
//		imgPoint.at<Vec3b>(y + 1, x) = Vec3b(255, 255, 255);
//		imgPoint.at<Vec3b>(y + 1, x) = Vec3b(255, 255, 255);
//		imshow("图像窗口 2", imgPoint);
//	}
//}
//
//int main()
//{
//	img = imread("./images/LenaRGB.bmp");
//
//	img.copyTo(imgPoint);
//	imshow("图像窗口 1", img);
//	imshow("图像窗口 2", imgPoint);
//	setMouseCallback("图像窗口 1", mouse, 0);	  //鼠标影响
//
//	waitKey(0);
//
//	return 0;
//}