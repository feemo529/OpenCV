//#include <opencv2/opencv.hpp>
//#include <fstream>
//#include <iostream>
//#include <vector>
//#include <opencv2/core/utils/logger.hpp>
//
//using namespace std;
//using namespace cv;
//
////��undistort()����ֱ�Ӽ���У��ͼ��
//void undist(vector<Mat> imgs,		//����ԭͼ������
//	Mat cameraMatrix,		//����õ�������ڲ�
//	Mat distCoeffs,			//����õ����������ϵ��
//	vector<Mat>& undistImgs)//У��������ͼ��
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
//	//��ȡ����ͼ��
//	vector<Mat> imgs;
//	string imageName;
//	ifstream fin("./images/calibdata.txt");
//	while (getline(fin, imageName))
//	{
//		Mat img = imread("./images/" + imageName);
//		imgs.push_back(img);
//	}
//
//	//����ǰ�ļ���õ����ڲξ���
//	Mat cameraMatrix = (Mat_<float>(3, 3) << 532.0162975598544, 0, 332.1725192543111,
//	0, 531.5651587613252, 233.3880747966261,
//	0, 0, 1);
//
//	//����ǰ�ļ���õ��Ļ������
//	Mat distCoeffs = (Mat_<float>(1, 5) << -0.2851884065844763, 0.08009721372372534, 0.001274031472818525, -0.002415106474400813, 0.1065791118222285);
//	
//	vector<Mat> undistImgs;
//
//	//��undistort()����ֱ�Ӽ���У��ͼ����һ��ȡ��ע�ͼ���
//	undist(imgs, cameraMatrix, distCoeffs, undistImgs);
//
//	//��ʾУ��ǰ���ͼ��
//	for (int i = 0; i < imgs.size(); i++)
//	{
//		string windowNumber = to_string(i);a
//		imshow("δУ��ͼ��" + windowNumber, imgs[i]);
//		imshow("У����ͼ��" + windowNumber, undistImgs[i]);
//		waitKey(0);
//		destroyWindow("δУ��ͼ��" + windowNumber);
//		destroyWindow("У����ͼ��" + windowNumber);
//	}
//
//
//	waitKey(0);
//	return 0;
//}