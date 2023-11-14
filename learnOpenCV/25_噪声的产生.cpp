//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
////��������
//void saltAndPepper(Mat image,int n)
//{
//	for (int k = 0; k < n / 2; k++)
//	{
//		//���ȷ��ͼ����λ��
//		int i, j;
//		i = rand() % image.cols;	//ȡ�������㣬��֤��ͼ�������
//		j = rand() % image.rows;	//ȡ�������㣬��֤��ͼ�������
//		int write_black = rand() % 2;	//�ж�Ϊ��ɫ�������Ǻ�ɫ�����ı���
//
//		if (write_black == 0)	//��Ӱ�ɫ����
//		{
//			if (image.type() == CV_8UC1)	//����Ҷ�ͼ��
//			{
//				image.at<uchar>(j, i) = 255;	//��ɫ����
//			}
//			else if (image.type() == CV_8UC3)	//�����ɫͼ��
//			{
//				image.at<Vec3b>(j, i)[0] = 255;	//Vec3bΪopenCV�����һ��3��ֵ����������
//				image.at<Vec3b>(j, i)[1] = 255;	//[]ָ��ͨ����B:0,G:1,R:2
//				image.at<Vec3b>(j, i)[2] = 255;
//			}
//		}
//		else //��Ӻ�ɫ����
//		{
//			if (image.type() == CV_8UC1)
//			{
//				image.at<uchar>(j, i) = 0;
//			}
//			else if (image.type() == CV_8UC3)
//			{
//				image.at<Vec3b>(j, i)[0] = 0;	//Vec3bΪopenCV�����һ��3��ֵ����������
//				image.at<Vec3b>(j, i)[1] = 0; //[]ָ��ͨ����B:0,G:1,R:2
//				image.at<Vec3b>(j, i)[2] = 0;
//			}
//		}
//	}
//}
//
//int main()
//{
//	Mat lena = imread("./images/lena.jpg");
//	Mat equalLena = imread("./images/Lena.bmp");
//
//	Mat lena_G, equalLena_G;
//	lena.copyTo(lena_G);
//	equalLena.copyTo(equalLena_G);
//
//	imshow("lenaԭͼ", lena);
//	imshow("equalLenaԭͼ", equalLena);
//
//	saltAndPepper(lena, 10000);	//��ɫͼ����ӽ�������
//	saltAndPepper(equalLena, 10000);	//�Ҷ�ͼ����ӽ�������
//
//	imshow("lena�������", lena);
//	imshow("equalLena�������", equalLena);
//	//imwrite("lena_salt.jpg", lena);
//
//	cout << "�����Ǹ�˹����" << endl;
//
//
//	Mat lena_noise = Mat::zeros(lena.rows, lena.cols, lena.type());
//	Mat equalLena_noise = Mat::zeros(lena.rows, lena.cols, equalLena.type());
//
//	imshow("lenaԭͼ", lena_G);
//	imshow("equalLenaԭͼ", equalLena_G);
//
//	RNG rng; //����һ��RNG��
//	rng.fill(lena_noise, RNG::NORMAL, 10, 20); //������ͨ���ĸ�˹�ֲ������
//	rng.fill(equalLena_noise, RNG::NORMAL, 15, 30); //���ɵ�ͨ���ĸ�˹�ֲ������
//
//	imshow("��ͨ����˹����", lena_noise);
//	imshow("��ͨ����˹����", equalLena_noise);
//
//	lena_G = lena_G + lena_noise; //�ڲ�ɫͼ������Ӹ�˹����
//	equalLena_G = equalLena_G + equalLena_noise; //�ڻҶ�ͼ������Ӹ�˹����
//
//	//��ʾ��Ӹ�˹�������ͼ��
//	imshow("lena�������", lena_G);
//	imshow("equalLena�������", equalLena_G);
//
//	//imwrite("equalLena_gauss.jpg", equalLena_G);
//
//
//	waitKey(0);
//	return 0;
//
//}