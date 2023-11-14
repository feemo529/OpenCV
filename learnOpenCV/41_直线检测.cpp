//#include <opencv2/opencv.hpp>
//#include <iostream>
//#include <vector>
//#include <opencv2/core/utils/logger.hpp>
//
//using namespace std;
//using namespace cv;
//
//void drawLine(Mat& img, //Ҫ���ֱ�ߵ�ͼ��
//	vector<Vec2f> lines,	//����ֱ������
//	double rows,	//ԭͼ����������ߣ�
//	double cols,	//ԭͼ�����������
//	Scalar scalar,	//����ֱ�ߵ���ɫ
//	int n	//����ֱ�ߵ��߿�
//)
//{
//	Point pt1, pt2;
//	for (size_t i = 0; i < lines.size(); i++)
//	{
//		float rho = lines[i][0]; //ֱ�߾��������ԭ��ľ���
//		float theta = lines[i][1];	//ֱ�߹�����ԭ�㴹����x��н�
//		double a = cos(theta); //�нǵ���tֵ
//		double b = sin(theta); //�нǵ����tֵ
//		double x0 = a * rho, y0 = b * rho; //ֱ���������ԭ��Ĵ��ߵĽ���
//		double length = max(rows, cols); //ͼ��߿�����ֵ
//		
//		pt1.x = cvRound(x0 + length * (-b));
//		pt1.y = cvRound(y0 + length * (a));
//		//����ֱ������һ��
//		pt2.x = cvRound(x0 - length * (-b));
//		pt2.y = cvRound(y0 - length * (a));
//		//�������һ��ֱ��
//		line(img, pt1, pt2, scalar, n);
//	}
//}
//
////int main01()
////{
////	cv::utils::logging::setLogLevel(utils::logging::LOG_LEVEL_SILENT);
////
////	Mat img = imread("./images/HoughLines.jpg", IMREAD_GRAYSCALE);
////
////	Mat edge;
////	//����Եͼ�񣬲���ֵ��
////	Canny(img, edge, 80, 180, 3, false);
////
////	//�ò�ͬ���ۼ������м��ֱ��
////	vector<Vec2f> lines1, lines2;
////	HoughLines(edge, lines1, 1, CV_PI / 180, 50, 0, 0);
////	HoughLines(edge, lines2, 1, CV_PI / 180, 150, 0, 0);
////
////	//��ԭͼ���м��ֱ��
////	Mat img1, img2;
////	img.copyTo(img1);
////	img.copyTo(img2);
////	drawLine(img1, lines1, edge.rows, edge.cols, Scalar(255), 2);
////	drawLine(img2, lines2, edge.rows, edge.cols, Scalar(255), 2);
////
////	imshow("img", img);
////	waitKey(0);
////	imshow("edge", edge);
////	waitKey(0);
////	imshow("img1", img1);
////	waitKey(0);
////	imshow("img2", img2);
////	waitKey(0);
////
////	return 0;
////}
//
//int main()
//{
//	cv::utils::logging::setLogLevel(utils::logging::LOG_LEVEL_SILENT);
//
//	Mat img = imread("./images/HoughLines.jpg", IMREAD_GRAYSCALE);
//
//	Mat edge;
//	//����Եͼ�񣬲���ֵ��
//	Canny(img, edge, 80, 180, 3, false);
//
//	//�ò�ͬ���ۼ������м��ֱ��
//	vector<Vec4i> linesP1, linesP2;
//	HoughLinesP(edge, linesP1, 1, CV_PI / 180, 150, 30, 10);	//����������������10
//	HoughLinesP(edge, linesP2, 1, CV_PI / 180, 150, 30, 30);	//����������������30
//
//	//��������������������10ֱ�߼����
//	Mat img1, img2;
//	img.copyTo(img1);
//	for (size_t i = 0; i < linesP1.size(); i++)
//	{
//		line(img1, Point(linesP1[i][0], linesP1[i][1]), Point(linesP1[i][2], linesP1[i][3]), Scalar(255), 3);
//	}
//
//	//��������������������30ֱ�߼����
//	img.copyTo(img2);
//	for (size_t i = 0; i < linesP2.size(); i++)
//	{
//		line(img2, Point(linesP2[i][0], linesP2[i][1]), Point(linesP2[i][2], linesP2[i][3]), Scalar(255), 3);
//	}
//
//	imshow("img1", img1);
//	imshow("img2", img2);
//	waitKey(0);
//
//	return 0;
//}