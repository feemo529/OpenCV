//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	//�������ڸ�ʴ��ԭͼ��
//	Mat src = (Mat_<uchar>(6, 6) << 0, 0, 0, 0, 255, 0,
//		0, 255, 255, 255, 255, 255,
//		0, 255, 255, 255, 255, 0,
//		0, 255, 255, 255, 255, 0,
//		0, 255, 255, 255, 255, 0,
//		0, 0, 0, 0, 0, 0);
//	Mat struct1, struct2;
//	struct1 = getStructuringElement(0, Size(3, 3)); //���νṹԪ��
//	struct2 = getStructuringElement(1, Size(3, 3));	//ʮ�ֽṹԪ��
//
//	Mat dilateSrc; //��Ÿ�ʴ���ͼ��
//	dilate(src, dilateSrc, struct2);
//	namedWindow("src", WINDOW_GUI_NORMAL);
//	namedWindow("dilateSrc", WINDOW_GUI_NORMAL);
//	imshow("src", src);
//	imshow("dilateSrc", dilateSrc);
//
//	cout << "����������֤" << endl;
//	waitKey(0);
//
//	Mat LearnCV_black = imread("./images/black.jpg", IMREAD_ANYCOLOR);
//
//	Mat dilate_black1, dilate_black2;
//	//�ڱ���ͼ��ʴ
//	dilate(LearnCV_black, dilate_black1, struct1);
//	dilate(LearnCV_black, dilate_black2, struct2);
//	imshow("LearnCV_black", LearnCV_black);
//	imshow("dilate_black1", dilate_black1);
//	imshow("dilate_black2", dilate_black2);
//
//	waitKey(0);
//	return 0;
//}