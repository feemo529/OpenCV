//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat gray = imread("./images/LenaRGB.bmp", IMREAD_GRAYSCALE);
//
//
//	Mat smallImg, bigImg0, bigImg1, bigImg2;
//	resize(gray, smallImg, Size(15, 15), 0, 0, INTER_AREA);	//�Ƚ�ͼ����С
//	resize(smallImg, bigImg0, Size(30, 30), 0, 0, INTER_NEAREST);	//����ڲ�ֵ
//	resize(smallImg, bigImg1, Size(30, 30), 0, 0, INTER_LINEAR);	//˫���Բ�ֵ
//	resize(smallImg, bigImg2, Size(30, 30), 0, 0, INTER_CUBIC);	//˫���β�ֵ
//
//	Mat img_x, img_y, img_xy;
//	flip(gray, img_x, 0);	//��x��Գ�
//	flip(gray, img_y, 1);	//��y��Գ�
//	flip(gray, img_xy, -1);	//��x��Գƣ���y��Գ�
//
//	Mat img00 = imread("./images/lena00.png");
//	Mat img01 = imread("./images/lena01.png");
//	Mat img10 = imread("./images/lena10.png");
//	Mat img11 = imread("./images/lena11.png");
//
//	//��ʾ4����ͼ��
//
//	//ͼ������
//	Mat img, img0, img1;
//	//ͼ���������
//	hconcat(img00, img01, img0);
//	hconcat(img10, img11, img1);
//	//�������ӽ���ٽ�����������
//	vconcat(img0, img1, img);
//
//	//��ʾ����ͼ����
//
//	waitKey(0);
//
//	return 0;
//}