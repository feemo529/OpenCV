//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	//��ȡͼ�񣬺ڰ�ͼ���Ե�������Ϊ����
//	Mat img = imread("./images/Lena.bmp", IMREAD_ANYCOLOR);
//	Mat result, result_g, result_G;
//
//
//	//δ�˲���ȡ��Ե
//	Laplacian(img, result, CV_16S, 3, 1, 0);
//	convertScaleAbs(result, result);
//
//	//�˲�����ȡLaplacian��Ե
//	GaussianBlur(img, result_g, Size(3, 3), 5, 0);	//��˹�˲�
//	Laplacian(result_g, result_G, CV_16S, 3, 1, 0);
//	convertScaleAbs(result_G, result_G);
//
//	//��ʾͼ��
//	imshow("result", result);
//	imshow("result_G", result_G);
//
//	cout << "����������Canny��Ե���" << endl;
//	waitKey(0);
//
//	Mat resultHigh, resultLow, resultG;
//
//	//����ֵ���ͼ���Ե
//	Canny(img, resultHigh, 100, 200, 3);
//
//	//С��ֵ���ͼ���Ե
//	Canny(img, resultLow, 20, 40, 3);
//
//	//��˹ģ������ͼ���Ե
//	GaussianBlur(img, resultG, Size(3, 3), 5);
//	Canny(resultG, resultG, 100, 200, 3);
//
//	//��ʾͼ��
//	imshow("resultHigh", resultHigh);
//	imshow("resultLow", resultLow);
//	imshow("resultG", resultG);
//
//
//	waitKey(0);
//
//	return 0;
//} 