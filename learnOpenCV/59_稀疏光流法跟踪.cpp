//#include <opencv2/opencv.hpp>
//#include <fstream>
//#include <iostream>
//#include <vector>
//#include <opencv2/core/utils/logger.hpp>
//
//using namespace std;
//using namespace cv;
//
//void draw_lines(Mat& image, vector<Point2f> pt1, vector<Point2f> pt2);
//vector<Scalar> color_lut; //颜色查找表
//
//int main()
//{
//	cv::utils::logging::setLogLevel(utils::logging::LOG_LEVEL_SILENT);
//
//	//读取所有图像
//	VideoCapture capture("./images/vtest.avi");
//	Mat preFrame, preImg;
//	if (!capture.read(preFrame))
//	{
//		cout << "请确认视频文件是否正确" << endl;
//		return -1;
//	}
//
//
//	//读取视频中第一帧图像作为前一帧图像，并进行灰度变化
//	cvtColor(preFrame, preImg, COLOR_BGR2GRAY);
//
//	//角点检测相关参数设置
//	vector<Point2f> Points;
//	double qualityLevel = 0.01;
//	int minDistance = 10;
//	int blockSize = 3;
//	bool useHarrisDetector = false;
//	double k = 0.04;
//	int Corners = 5000;
//	//角点检测
//	goodFeaturesToTrack(preImg, Points, Corners, qualityLevel, minDistance, Mat(), blockSize, useHarrisDetector, k);
//
//	//稀疏光流检测相关参数设置
//	vector<Point2f> prePts;	//前一帧图像角点坐标
//	vector<Point2f> nextPts; //当前帧图像角点坐标
//	vector<uchar> status;	//检测到的状态
//	vector<float> err;
//	TermCriteria criteria = TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 30, 0.01);
//	double derivlambda = 0.5;
//	int flags = 0;
//
//	//初始状态的角点
//	vector<Point2f> initPoints;
//	initPoints.insert(initPoints.end(), Points.begin(), Points.end());
//
//	//前一帧图像中你的角点坐标
//	prePts.insert(prePts.end(), Points.begin(), Points.end());
//
//	while (true)
//	{
//		Mat nextframe, nextImg;
//		if (!capture.read(nextframe))
//		{
//			break;
//		}
//		imshow("nextframe", nextframe);
//
//		//光流跟踪
//		cvtColor(nextframe, nextImg, COLOR_BGR2GRAY);
//		calcOpticalFlowPyrLK(preImg, nextImg, prePts, nextPts, status, err,
//			Size(31, 31), 3, criteria, derivlambda, flags);
//
//		//判断角点是否移动，如果不移动就删除
//		size_t i, k;
//		for (i = k = 0; i < nextPts.size(); i++)
//		{
//			//距离与状态测量
//			double dist = abs(prePts[i].x - nextPts[i].x) + abs(prePts[i].y - nextPts[i].y);
//			if (status[i] && dist > 2)
//			{
//				prePts[k] = prePts[i];
//				initPoints[k] = initPoints[i];
//				nextPts[k++] = nextPts[i];
//				circle(nextframe, nextPts[i], 3, Scalar(0, 255, 0), -1, -8);
//			}
//		}
//		//更新移动点数目
//		nextPts.resize(k);
//		prePts.resize(k);
//		initPoints.resize(k);
//
//		//检测跟踪轨迹
//		draw_lines(nextframe, initPoints, nextPts);
//		imshow("result", nextframe);
//
//		char c = waitKey(5);
//		if (c == 27)
//		{
//			break;
//		}
//
//		//更新角点坐标和前一帧图像
//		std::swap(nextPts, prePts);
//		nextImg.copyTo(preImg);
//
//		//如果角点数目少于30， 就重新检测角点
//		if (initPoints.size() < 30)
//		{
//			goodFeaturesToTrack(preImg, Points, Corners, qualityLevel,
//				minDistance, Mat(), blockSize, useHarrisDetector, k);
//			initPoints.insert(initPoints.end(), Points.begin(), Points.end());
//			prePts.insert(prePts.end(), Points.begin(), Points.end());
//			printf("total feature points: %d\n", prePts.size());
//		}
//
//	}
//
//	return 0;
//}
//
//void draw_lines(Mat& image, vector<Point2f> pt1, vector<Point2f> pt2)
//{
//	RNG rng(5000);
//	if (color_lut.size() < pt1.size())
//	{
//		for (size_t t = 0; t < pt1.size(); t++)
//		{
//			color_lut.push_back(Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255)));
//		}
//	}
//	for (size_t t = 0; t < pt1.size(); t++)
//	{
//		line(image, pt1[t], pt2[t], color_lut[t], 2, 8, 0);
//	}
//}