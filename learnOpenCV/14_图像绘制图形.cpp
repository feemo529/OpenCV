//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat img = Mat::zeros(Size(512, 512), CV_8UC3); //����һ����ɫͼ�����ڻ��Ƽ���ͼ��
//
//	//����Բ��
//	circle(img, Point(50, 50), 25, Scalar(255, 255, 255), -1); //����һ��ʵ��Բ
//	circle(img, Point(100, 50), 20, Scalar(255, 255, 255), 4); //����һ������Բ
//
//	//����ֱ��
//	line(img, Point(100, 100), Point(200, 100), Scalar(255, 255, 255), 2, LINE_4, 0); //����һ��ֱ��
//
//	//������Բ
//	ellipse(img, Point(300, 255), Size(100, 70), 0, 0, 100, Scalar(255, 255, 255), -1); //����ʵ����Բ��һ����
//
//	//���ƾ���
//	rectangle(img, Point(50, 400), Point(100, 450), Scalar(125, 125, 125), -1); 
//
//	//���ƶ����
//	Point pp[2][6];
//	pp[0][0] = Point(72, 200);
//	pp[0][1] = Point(142, 204);
//	pp[0][2] = Point(226, 263);
//	pp[0][3] = Point(172, 310);
//	pp[0][4] = Point(117, 319);
//	pp[0][5] = Point(15, 260);
//	pp[1][0] = Point(359, 339);
//	pp[1][1] = Point(447, 351);
//	pp[1][2] = Point(504, 349);
//	pp[1][3] = Point(484, 433);
//	pp[1][4] = Point(418, 449);
//	pp[1][5] = Point(354, 402);
//
//	Point pp2[5];
//	pp2[0] = Point(350, 83);
//	pp2[1] = Point(463, 90);
//	pp2[2] = Point(500, 171);
//	pp2[3] = Point(421, 194);
//	pp2[4] = Point(338, 141);
//
//	const Point* pts[3] = { pp[0],pp[1],pp2 }; //pts����������
//	int npts[] = { 6,6,5 }; //����������������
//	fillPoly(img, pts, npts, 3, Scalar(125, 125, 125), 8); //����3�������
//
//	putText(img, "Lena OpenCV 4", Point(100, 400), 2, 1, Scalar(255, 255, 255));
//	imshow("", img);
//
//	waitKey(0);
//
//	return 0;
//}