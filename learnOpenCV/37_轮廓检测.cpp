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
//	Mat img = imread("./images/key.jpg");
//
//	imshow("原图", img);
//
//	Mat gray, binary;
//	cvtColor(img, gray, COLOR_BGR2GRAY);
//	GaussianBlur(gray, gray, Size(13, 13), 4, 4); //平滑滤波
//	threshold(gray, binary, 170, 255, THRESH_BINARY | THRESH_OTSU); //自适应二值化
//
//	//轮廓发现与绘制
//	vector<vector<Point>> contours; //轮廓
//	vector<Vec4i> hierarchy;	//存放轮廓结构变量
//
//	findContours(binary, contours, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point());
//
//	//绘制轮廓
//	for (int i = 0; i < hierarchy.size(); i++)
//	{
//		cout << hierarchy[i] << endl;
//	}
//
//	for (int i = 0; i < contours.size(); i++)
//	{
//		drawContours(img, contours, i, Scalar(0, 0, 255), 2, 8);
//		imshow("轮廓检测结果", img);
//		waitKey(0);
//	}
//	//输出轮廓结构描述子
//
//	waitKey(0);
//	return 0;
//}