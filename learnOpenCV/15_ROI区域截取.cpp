//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat img = imread("./images/LenaRGB.bmp");
//	Mat noobcv = imread("./images/Lena.bmp");
//
//	Mat ROI1, ROI2, ROI2_copy, mask, img2, img_copy;
//	resize(noobcv, mask, Size(200, 200));
//	img2 = img;	//ǳ����
//
//	//��������ַ�ʽ
//	img.copyTo(img_copy);
//
//	//������ͼ�н�ȡROI����ķ�ʽ
//	Rect rect(206, 206, 200, 200);	//����ROI����
//	ROI1 = img(rect);	///��ͼ
//
//	ROI2 = img(Range(300, 500), Range(300, 500));	//�ڶ��ֽ�ͼ��ʽ
//
//	img(Range(300, 500), Range(300, 500)).copyTo(ROI2_copy);	//���
//
//	mask.copyTo(ROI1);	//��ͼ���м��벿��ͼ��
//
//	imshow("����noobcv��ͼ��", img);
//	imshow("�����img_copy", img_copy);
//
//	imshow("ROI��ROI2��Ӱ��", ROI2);
//	imshow("�����ROI2_copy",ROI2_copy);
//
//	circle(img, Point(300, 300), 20, Scalar(0, 0, 255), -1);	//����һ��Բ��
//
//	imshow("ǳ������img2", img2);
//
//	imshow("��Բ��ROI1��Ӱ��", ROI1);
//
//	waitKey(0);
//
//	return 0;
//}