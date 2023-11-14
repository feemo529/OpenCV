//#include <opencv2/opencv.hpp>
//#include <iostream>
//#include <vector>
//#include <opencv2/core/utils/logger.hpp>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	cv::utils::logging::setLogLevel(utils::logging::LOG_LEVEL_SILENT);
//
//	system("color F0"); //修改界面颜色
//
//	//用四个表示三角形轮廓
//	vector<Point> contour;
//	contour.push_back(Point2f(0, 0));
//	contour.push_back(Point2f(10,10));
//	contour.push_back(Point2f(10,10));
//	contour.push_back(Point2f(5,5));
//	double area = contourArea(contour);
//	cout << "area= " << area << endl;
//
//	double length0 = arcLength(contour, true);
//	double length1 = arcLength(contour, false);
//	cout << "length0 = " << length0 << endl;
//	cout << "length1 = " << length1 << endl;
//
//	cout << "图像轮廓面积" << endl;
//	waitKey(0);
//
//	Mat img = imread("./images/key.jpg");
//	
//	Mat gray, binary;
//	cvtColor(img, gray, COLOR_BGR2GRAY);
//	GaussianBlur(gray, gray, Size(13, 13), 4, 4); //平滑滤波
//	threshold(gray, binary, 170, 255, THRESH_BINARY | THRESH_OTSU); //自适应二值化
//	
//	//轮廓发现与绘制
//	vector<vector<Point>> contours; //轮廓
//	vector<Vec4i> hierarchy;	//存放轮廓结构变量
//	findContours(binary, contours, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point());
//
//
//	//输出轮廓面积
//	for (int i = 0; i < contours.size(); i++)
//	{
//		double area1 = contourArea(contours[i]);
//		cout << "第" << i << "轮廓面积: " << area1 << endl;
//	}
//
//	//输出轮廓长度
//	for (int i = 0; i < contour.size(); i++)
//	{
//		double length2 = arcLength(contours[i], true);
//		cout << "第" << i << "个轮廓长度=" << length2 << endl;
//	}
//
//	waitKey(0);
//	return 0;
//}