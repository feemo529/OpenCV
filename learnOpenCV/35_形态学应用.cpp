//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	//�������ڸ�ʴ��ԭͼ��
//	Mat src = (Mat_<uchar>(9, 12) <<
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 255, 255, 255, 255, 255, 255, 255, 0, 0, 255, 0,
//		0, 255, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0,
//		0, 255, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0,
//		0, 255, 255, 255, 0, 255, 255, 255, 0, 0, 0, 0,
//		0, 255, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0,
//		0, 255, 255, 255, 255, 255, 255, 255, 0, 0, 255, 0,
//		0, 255, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
//
//	namedWindow("src", WINDOW_NORMAL);	//�������ɵ�����ʾͼ��ĳߴ�
//	imshow("src", src);
//	//3X3���νṹԪ��
//	Mat kernel = getStructuringElement(0, Size(3, 3));
//
//	//�Զ�ֵ�����������̬ѧ����
//	Mat open, close, gradient, tophat, blackhat, hitmiss;
//
//	//�Զ�ֵ��������п�����
//	morphologyEx(src, open, MORPH_OPEN, kernel);
//	namedWindow("open", WINDOW_NORMAL); //�������ɵ�����ʾͼ��ĳߴ�
//	imshow("open", open);
//
//	//�Զ�ֵ��������б�����
//	morphologyEx(src, close, MORPH_CLOSE, kernel);
//	namedWindow("close", WINDOW_NORMAL); //�������ɵ�����ʾͼ��ĳߴ�
//	imshow("close", close);
//
//	//�Զ�ֵ����������ݶ�����
//	morphologyEx(src, gradient, MORPH_GRADIENT, kernel);
//	namedWindow("gradient", WINDOW_NORMAL); //�������ɵ�����ʾͼ��ĳߴ�
//	imshow("gradient", gradient);
//
//	//�Զ�ֵ��������ж�ñ����
//	morphologyEx(src, tophat, MORPH_TOPHAT, kernel);
//	namedWindow("tophat", WINDOW_NORMAL); //�������ɵ�����ʾͼ��ĳߴ�
//	imshow("tophat", tophat);
//
//	//�Զ�ֵ��������к�ñ����
//	morphologyEx(src, blackhat, MORPH_BLACKHAT, kernel);
//	namedWindow("blackhat", WINDOW_NORMAL); //�������ɵ�����ʾͼ��ĳߴ�
//	imshow("blackhat", blackhat);
//
//	//�Զ�ֵ��������л��л����б任
//	morphologyEx(src, hitmiss, MORPH_HITMISS, kernel);
//	namedWindow("hitmiss", WINDOW_NORMAL); //�������ɵ�����ʾͼ��ĳߴ�
//	imshow("hitmiss", hitmiss);
//
//	cout << "��ͼ����֤��̬ѧ����Ч��" << endl;
//	waitKey(0);
//
//	Mat key = imread("./images/key.jpg",IMREAD_GRAYSCALE);
//	imshow("ԭͼ��", key);
//	threshold(key, key, 50, 255, THRESH_BINARY);
//	imshow("��ֵ�����key", key);
//
//	//5X5���νṹԪ��
//	Mat kernel_keys = getStructuringElement(0, Size(5, 5));
//	Mat open_keys, close_keys, gradient_keys, tophat_keys, balckhat_keys, hitmiss_keys;
//
//	//�Զ�ֵ��������п�����
//	morphologyEx(key, open_keys, MORPH_OPEN, kernel_keys);
//	imshow("open_keys", open_keys);
//
//	//�Զ�ֵ��������б�����
//	morphologyEx(key, close_keys, MORPH_CLOSE, kernel_keys);
//	imshow("close_keys", close_keys);
//
//	//�Զ�ֵ����������ݶ�����
//	morphologyEx(key, gradient_keys, MORPH_GRADIENT, kernel_keys);
//	imshow("gradient_keys", gradient_keys);
//
//	//�Զ�ֵ��������ж�ñ����
//	morphologyEx(key, tophat_keys, MORPH_TOPHAT, kernel_keys);
//	imshow("tophat_keys", tophat_keys);
//
//	//�Զ�ֵ��������к�ñ����
//	morphologyEx(key, balckhat_keys, MORPH_BLACKHAT, kernel_keys);
//	imshow("balckhat_keys", balckhat_keys);
//
//	//�Զ�ֵ��������л��л����б任
//	morphologyEx(key, hitmiss_keys, MORPH_HITMISS, kernel_keys);
//	imshow("hitmiss_keys", hitmiss_keys);
//
//	waitKey(0);
//	return 0;
//}