//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//Mat img, imgPoint; //ȫ��ͼ��
//Point prePoint; //ǰһʱ���������꣬���ڻ���ֱ��
//
//void mouse(int event, int x, int y, int flags, void*)
//{
//
//	if (event == EVENT_RBUTTONDOWN)
//	{
//		cout << "����������ſ��Ի��ƹ켣" << endl;
//	}
//	if (event == EVENT_LBUTTONDOWN)
//	{
//		prePoint = Point(x, y);
//		cout << "�켣��ʼ����" << prePoint << endl;
//	}
//	if (event == EVENT_MOUSEMOVE && (flags & EVENT_FLAG_LBUTTON)) //��갴ס����ƶ�
//	{
//		//ͨ������ֱ����ʾ����ƶ��켣
//		Point pt(x, y);
//		line(img, prePoint, pt, Scalar(255, 255, 255), 2, 5, 0);
//		prePoint = pt;
//		imshow("ͼ�񴰿� 1", img);
//
//		//ͨ���ı�ͼ��������ʾ����ƶ��켣
//		imgPoint.at<Vec3b>(y, x) = Vec3b(255, 255, 255);
//		imgPoint.at<Vec3b>(y, x - 1) = Vec3b(255, 255, 255);
//		imgPoint.at<Vec3b>(y, x + 1) = Vec3b(255, 255, 255);
//		imgPoint.at<Vec3b>(y + 1, x) = Vec3b(255, 255, 255);
//		imgPoint.at<Vec3b>(y + 1, x) = Vec3b(255, 255, 255);
//		imshow("ͼ�񴰿� 2", imgPoint);
//	}
//}
//
//int main()
//{
//	img = imread("./images/LenaRGB.bmp");
//
//	img.copyTo(imgPoint);
//	imshow("ͼ�񴰿� 1", img);
//	imshow("ͼ�񴰿� 2", imgPoint);
//	setMouseCallback("ͼ�񴰿� 1", mouse, 0);	  //���Ӱ��
//
//	waitKey(0);
//
//	return 0;
//}