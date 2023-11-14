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
//	Mat img = imread("./images/key.jpg");
//
//	imshow("ԭͼ", img);
//
//	Mat gray, binary;
//	cvtColor(img, gray, COLOR_BGR2GRAY);
//	GaussianBlur(gray, gray, Size(13, 13), 4, 4); //ƽ���˲�
//	threshold(gray, binary, 170, 255, THRESH_BINARY | THRESH_OTSU); //����Ӧ��ֵ��
//
//	//�������������
//	vector<vector<Point>> contours; //����
//	vector<Vec4i> hierarchy;	//��������ṹ����
//
//	findContours(binary, contours, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point());
//
//	//��������
//	for (int i = 0; i < hierarchy.size(); i++)
//	{
//		cout << hierarchy[i] << endl;
//	}
//
//	for (int i = 0; i < contours.size(); i++)
//	{
//		drawContours(img, contours, i, Scalar(0, 0, 255), 2, 8);
//		imshow("���������", img);
//		waitKey(0);
//	}
//	//��������ṹ������
//
//	waitKey(0);
//	return 0;
//}