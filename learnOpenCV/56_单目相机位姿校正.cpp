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
//	//��ȡ����ͼ��
//	Mat img = imread("./images/left01.jpg");
//	Mat gray;
//	cvtColor(img, gray, COLOR_BGR2GRAY);
//	vector<Point2f> imgPoints;
//	Size boardSize = Size(9, 6);
//	findChessboardCorners(gray, boardSize, imgPoints);	//���㷽��궨��ǵ�
//	find4QuadCornerSubpix(gray, imgPoints, Size(5, 5)); //ϸ������궨��ǵ�����
//
//														//�������̸�ÿ���ڽǵ�Ŀռ���ά����
//	Size squareSize = Size(10, 10);	//���̸�ÿ���������ʵ�ߴ�
//	vector<Point3f> PointSets;
//	for (int j = 0; j < boardSize.height; j++)
//	{
//		for (int k = 0; k < boardSize.width; k++)
//		{
//			Point3f realPoint;
//			//����궨��λ��������ϵ��zƽ�棬��z=0
//			realPoint.x = j * squareSize.width;
//			realPoint.y = k * squareSize.height;
//			realPoint.z = 0;
//			PointSets.push_back(realPoint);
//		}
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
//	//��Pnp�㷨������ת��ƽ����
//	Mat rvec, tvec;
//	solvePnP(PointSets, imgPoints, cameraMatrix, distCoeffs, rvec, tvec);
//	cout << "��������ϵ�任���������ϵ����ת������" << rvec << endl;
//
//	//��ת����ת����ת����
//	Mat R;
//	Rodrigues(rvec, R);
//	cout << "��ת����ת������ת����" << endl << R << endl;
//
//	//��PnP+Ransac�㷨������ת������ƽ������
//	Mat rvecRansac, tvecRansac;
//	solvePnPRansac(PointSets, imgPoints, cameraMatrix, distCoeffs, rvecRansac, tvecRansac);
//	Mat RRsansac;
//	Rodrigues(rvecRansac, RRsansac);
//	cout << "��ת����ת������ת����" << endl << RRsansac << endl;
//
//	waitKey(0);
//	return 0;
//}