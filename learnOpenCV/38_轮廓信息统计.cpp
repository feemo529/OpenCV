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
//	system("color F0"); //�޸Ľ�����ɫ
//
//	//���ĸ���ʾ����������
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
//	cout << "ͼ���������" << endl;
//	waitKey(0);
//
//	Mat img = imread("./images/key.jpg");
//	
//	Mat gray, binary;
//	cvtColor(img, gray, COLOR_BGR2GRAY);
//	GaussianBlur(gray, gray, Size(13, 13), 4, 4); //ƽ���˲�
//	threshold(gray, binary, 170, 255, THRESH_BINARY | THRESH_OTSU); //����Ӧ��ֵ��
//	
//	//�������������
//	vector<vector<Point>> contours; //����
//	vector<Vec4i> hierarchy;	//��������ṹ����
//	findContours(binary, contours, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point());
//
//
//	//����������
//	for (int i = 0; i < contours.size(); i++)
//	{
//		double area1 = contourArea(contours[i]);
//		cout << "��" << i << "�������: " << area1 << endl;
//	}
//
//	//�����������
//	for (int i = 0; i < contour.size(); i++)
//	{
//		double length2 = arcLength(contours[i], true);
//		cout << "��" << i << "����������=" << length2 << endl;
//	}
//
//	waitKey(0);
//	return 0;
//}