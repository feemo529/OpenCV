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
//	system("color F0");
//	Vec4f lines; //�����ϵ�ֱ��
//	vector<Point2f> point;	//������Ƿ����ֱ�ߵ����е�
//	const static float Points[20][2] = {
//		{0.0f, 0.0f },{10.0f, 11.0f },{21.0f, 20.0f},{30.0f, 30.0f},
//		{40.0f, 42.0f },{50.0f, 50.0f },{60.0f, 60.0f},{70.0f, 70.0f},
//		{80.0f, 80.0f },{90.0f, 92.0f },{100.0f, 100.0f},{110.0f, 110.0f},
//		{120.0f, 120.0f },{136.0f, 130.0f },{138.0f, 140.0f},{150.0f, 150.0f},
//		{160.0f, 163.0f },{175.0f, 170.0f },{181.0f, 180.0f},{200.0f, 190.0f},
//	};
//	//�����е�����vector�У��������뺯����
//	for (int i = 0; i < 20; i++)
//	{
//		point.push_back(Point2f(Points[i][0], Points[i][1]));
//	}
//	//��������
//	double param = 0; //����ģ���е���ֵ����C
//	double reps = 0.01;	//����ԭ����ֱ��֮��ľ��뾫��
//	double aeps = 0.01;	//�ǶȾ���
//	fitLine(point, lines, DIST_L1, 0, 0.01, 0.01);
//	double k = lines[1] / lines[0];	//ֱ��б��
//
//	cout << "ֱ��б��: " << k << endl;
//	cout << "ֱ����һ������x: " << lines[2] << ", y:" << lines[3] << endl;
//	cout << "ֱ�߽���ʽ��y=" << k << "(x-" << lines[2] << ")+" << lines[3] << endl;
//
//	waitKey(0);
//
//	Mat img(500, 500, CV_8UC3, Scalar::all(0));
//	RNG& rng = theRNG();	//���������
//
//	while (true)
//	{
//		int i, count = rng.uniform(1, 101);
//		vector<Point> points;
//		//���������
//		for ( i = 0; i < count; i++)
//		{
//			Point pt;
//			pt.x = rng.uniform(img.cols / 4, img.cols * 3 / 4);
//			pt.y = rng.uniform(img.rows / 4, img.rows * 3 / 4);
//			points.push_back(pt);
//		}
//		
//		//Ѱ�Ұ�Χ�㼯��������
//		vector<Point2f> triangle;
//		double area = minEnclosingTriangle(points, triangle);
//
//		//Ѱ�Ұ�Χ�㼯��Բ��
//		Point2f center;
//		float radius = 0;
//		minEnclosingCircle(points, center, radius);
//
//		//��������ͼƬ����������
//		img = Scalar::all(0);
//		Mat img2;
//		img.copyTo(img2);
//
//		//��ͼ���ܻ��������
//		for (i = 0; i < count; i++)
//		{
//			circle(img, points[i], 3, Scalar(255, 255, 255), FILLED, LINE_AA);
//			circle(img2, points[i], 3, Scalar(255, 255, 255), FILLED, LINE_AA);
//		}
//		
//		//����������
//		for ( i = 0; i < 3; i++)
//		{
//			if (i == 2)
//			{
//				line(img, triangle[i], triangle[0], Scalar(255, 255, 255), 1, 16);
//				break;
//			}
//			line(img, triangle[i], triangle[i + 1], Scalar(255, 255, 255), 1, 16);
//		}
//
//		//����Բ��
//		circle(img2, center, cvRound(radius), Scalar(255, 255, 255), 1, LINE_AA);
//
//		//������
//		imshow("triangle", img);
//		imshow("circle", img2);
//
//		//��q������ESC�˳�����
//		char key = (char)waitKey();
//		if (key == 27 || key == 'q' || key == 'Q')
//		{
//			break;
//		}
//	}
//	return 0;
//}