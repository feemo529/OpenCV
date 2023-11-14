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
//	Mat img = imread("./images/lena.jpg", IMREAD_COLOR);
//
//	//创建ORB 特征点类变量
//	Ptr<ORB> orb = ORB::create(
//		500, //特征点数目
//		1.2f, //金字塔层级之间的缩放比例
//		8,   //边缘阈值
//		31,   //原图在金字塔中的层数								
//		0,   //边缘阈值
//		2,   //原图在金字塔中的层数
//		ORB::HARRIS_SCORE, //使用 Harris 方法评价特征点
//		31, //生成描述子时关键点周围领域的尺寸
//		20 //计算 FAST 角点时像素值差值的阈值
//		);
//
//	
//	//计算ORB关键点
//	vector<KeyPoint> Keypoints;
//	orb->detect(img, Keypoints); //确定关键点
//
//	//计算 ORB 描述子
//	Mat descriptions;
//	orb->compute(img, Keypoints, descriptions);	//计算描述子
//
//	//绘制特征点
//	Mat imgAngel;
//	img.copyTo(imgAngel);
//	//绘制不含角度和大小的结果
//	drawKeypoints(img, Keypoints, img, Scalar(255, 255, 255));
//	//绘制含有角度和大小的结果
//	drawKeypoints(img, Keypoints, imgAngel, Scalar(255, 255, 255), DrawMatchesFlags::DRAW_RICH_KEYPOINTS);
//
//
//	//显示结果
//	imshow("不含角度和大小的结果", img);
//	imshow("含角度和大小的结果", imgAngel);
//
//
//	waitKey(0);
//	return 0;
//}