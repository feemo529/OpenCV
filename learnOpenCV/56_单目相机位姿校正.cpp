//#include <opencv2/opencv.hpp>
//#include <fstream>
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
//	//读取所有图像
//	Mat img = imread("./images/left01.jpg");
//	Mat gray;
//	cvtColor(img, gray, COLOR_BGR2GRAY);
//	vector<Point2f> imgPoints;
//	Size boardSize = Size(9, 6);
//	findChessboardCorners(gray, boardSize, imgPoints);	//计算方格标定板角点
//	find4QuadCornerSubpix(gray, imgPoints, Size(5, 5)); //细化方格标定板角点坐标
//
//														//生成棋盘格每个内角点的空间三维坐标
//	Size squareSize = Size(10, 10);	//棋盘格每个方格的真实尺寸
//	vector<Point3f> PointSets;
//	for (int j = 0; j < boardSize.height; j++)
//	{
//		for (int k = 0; k < boardSize.width; k++)
//		{
//			Point3f realPoint;
//			//假设标定板位世界坐标系的z平面，即z=0
//			realPoint.x = j * squareSize.width;
//			realPoint.y = k * squareSize.height;
//			realPoint.z = 0;
//			PointSets.push_back(realPoint);
//		}
//	}
//
//	//输入前文计算得到的内参矩阵
//	Mat cameraMatrix = (Mat_<float>(3, 3) << 532.0162975598544, 0, 332.1725192543111,
//	0, 531.5651587613252, 233.3880747966261,
//	0, 0, 1);
//	
//	//输入前文计算得到的畸变矩阵
//	Mat distCoeffs = (Mat_<float>(1, 5) << -0.2851884065844763, 0.08009721372372534, 0.001274031472818525, -0.002415106474400813, 0.1065791118222285);
//	
//	//用Pnp算法计算跳转和平移量
//	Mat rvec, tvec;
//	solvePnP(PointSets, imgPoints, cameraMatrix, distCoeffs, rvec, tvec);
//	cout << "世界坐标系变换到相机坐标系的旋转向量：" << rvec << endl;
//
//	//旋转向量转换旋转矩阵
//	Mat R;
//	Rodrigues(rvec, R);
//	cout << "旋转向量转换成旋转矩阵：" << endl << R << endl;
//
//	//用PnP+Ransac算法计算旋转向量和平移向量
//	Mat rvecRansac, tvecRansac;
//	solvePnPRansac(PointSets, imgPoints, cameraMatrix, distCoeffs, rvecRansac, tvecRansac);
//	Mat RRsansac;
//	Rodrigues(rvecRansac, RRsansac);
//	cout << "旋转向量转换成旋转矩阵：" << endl << RRsansac << endl;
//
//	waitKey(0);
//	return 0;
//}