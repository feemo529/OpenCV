//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat equalLena = imread("./images/noise.bmp");
//	Mat equalLena_gauss = imread("./images/equalLena_gauss.jpg");
//	Mat equalLena_salt = imread("./images/equalLena_salt.jpg");
//
//	Mat result_3, result_9;	//��Ų��������˲�������������ִ����˲����ߴ�
//	Mat result_3gauss, result_9gauss;	//��ź��и�˹�����˲�������������ִ����˲����ߴ�
//	Mat result_3salt, result_9salt;	//��ź��н��������˲�������������ִ����˲����ߴ�
//
//	//���þ�ֵ�˲�����blur()�����˲�
//	blur(equalLena, result_3, Size(3, 3));
//	blur(equalLena, result_9, Size(9, 9));
//	blur(equalLena_gauss, result_3gauss, Size(3, 3));
//	blur(equalLena_gauss, result_9gauss, Size(9, 9));
//	blur(equalLena_salt, result_3salt, Size(3, 3));
//	blur(equalLena_salt, result_9salt, Size(9, 9));
//
//	//��ʾ��������ͼ��
//	imshow("equalLena", equalLena);
//	imshow("result_3", result_3);
//	imshow("result_9", result_9);
//	//��ʾ���и�˹����ͼ��
//	imshow("equalLena_gauss", equalLena_gauss);
//	imshow("result_3gauss", result_3gauss);
//	imshow("result_9gauss", result_9gauss);
//	//��ʾ���н�������ͼ��
//	imshow("equalLena_salt", equalLena_salt);
//	imshow("result_3salt", result_3salt);
//	imshow("result_9salt", result_9salt);
//
//	cout << "�������Ƿ����˲�" << endl;
//	waitKey(0);
//
//	Mat resultNorm, result;
//	//�����˲�boxFilter() ��sqrBoxFilter()
//	boxFilter(equalLena, resultNorm, -1, Size(3, 3), Point(-1, -1), true);	//���й�һ��
//	boxFilter(equalLena, result, -1, Size(3, 3), Point(-1, -1), false);	//�����й�һ��
//
//	//��ʾ������
//	imshow("resultNorm", resultNorm);
//	imshow("result", result);
//
//	cout << "�������Ǹ�˹�˲�" << endl;
//	waitKey(0);
//
//	Mat result_5_G, result_9_G;	//��Ų��������˲�������������ִ����˲����ߴ�
//	Mat result_5gauss_G, result_9gauss_G;	//��ź��и�˹�����˲�������������ִ����˲����ߴ�
//	Mat result_5salt_G, result_9salt_G;	//��ź��н��������˲�������������ִ����˲����ߴ�
//
//	//���ø�˹�˲�����GaussianBlur()�����˲�
//	GaussianBlur(equalLena, result_5_G, Size(5, 5), 10, 20);
//	GaussianBlur(equalLena, result_9_G, Size(9, 9), 10, 20);
//	GaussianBlur(equalLena_gauss, result_5gauss_G, Size(5, 5), 10, 20);
//	GaussianBlur(equalLena_gauss, result_9gauss_G, Size(9, 9), 10, 20);
//	GaussianBlur(equalLena_salt, result_5salt_G, Size(5, 5), 10, 20);
//	GaussianBlur(equalLena_salt, result_9salt_G, Size(9, 9), 10, 20);
//
//	//��ʾ��������ͼ��
//	imshow("equalLena", equalLena);
//	imshow("result_5_G", result_5_G);
//	imshow("result_9_G", result_9_G);
//	//��ʾ���и�˹����ͼ��
//	imshow("equalLena_gauss", equalLena_gauss);
//	imshow("result_5gauss_G", result_5gauss_G);
//	imshow("result_9gauss_G", result_9gauss_G);
//	//��ʾ���н�������ͼ��
//	imshow("equalLena_salt", equalLena_salt);
//	imshow("result_5salt_G", result_5salt_G);
//	imshow("result_9salt_G", result_9salt_G);
//
//	waitKey(0);
//
//	return 0;
//}