//#include <opencv2/opencv.hpp>
//#include <fstream>
//#include <iostream>
//#include <vector>
//#include <opencv2/core/utils/logger.hpp>
//
//using namespace std;
//using namespace cv;
//
////用undistort()函数直接计算校正图像
//void undist(vector<Mat> imgs,		//所有原图像向量
//	Mat cameraMatrix,		//计算得到的相机内参
//	Mat distCoeffs,			//计算得到的相机畸变系数
//	vector<Mat>& undistImgs)//校正后的输出图像
//{
//	for (int i = 0; i < imgs.size(); i++)
//	{
//		Mat undistImg;
//		undistort(imgs[i], undistImg, cameraMatrix, distCoeffs);
//		undistImgs.push_back(undistImg);
//	}
//}
//int main()
//{
//	cv::utils::logging::setLogLevel(utils::logging::LOG_LEVEL_SILENT);
//
//	//读取所有图像
//	vector<Mat> imgs;
//	string imageName;
//	ifstream fin("./images/calibdata.txt");
//	while (getline(fin, imageName))
//	{
//		Mat img = imread("./images/" + imageName);
//		imgs.push_back(img);
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
//	vector<Mat> undistImgs;
//
//	//用undistort()函数直接计算校正图像，下一行取消注释即可
//	undist(imgs, cameraMatrix, distCoeffs, undistImgs);
//
//	//显示校正前后的图像
//	for (int i = 0; i < imgs.size(); i++)
//	{
//		string windowNumber = to_string(i);a
//		imshow("未校正图像" + windowNumber, imgs[i]);
//		imshow("校正后图像" + windowNumber, undistImgs[i]);
//		waitKey(0);
//		destroyWindow("未校正图像" + windowNumber);
//		destroyWindow("校正后图像" + windowNumber);
//	}
//
//
//	waitKey(0);
//	return 0;
//}