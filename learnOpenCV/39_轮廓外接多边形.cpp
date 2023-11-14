//#include <opencv2/opencv.hpp>
//#include <iostream>
//#include <vector>
//#include <opencv2/core/utils/logger.hpp>
//
//using namespace std;
//using namespace cv;
//
//void drawapp(Mat result, Mat img2)
//{
//	for (int i = 0; i < result.rows; i++)
//	{
//		//���һ����������һ�����������
//		if (i == result.rows - 1)
//		{
//			Vec2i point1 = result.at<Vec2i>(i);
//			Vec2i point2 = result.at<Vec2i>(0);
//			line(img2, point1, point2, Scalar(0, 0, 255), 2, 8, 0);
//			break;
//		}
//		Vec2i point1 = result.at<Vec2i>(i);
//		Vec2i point2 = result.at<Vec2i>(i + 1);
//		line(img2, point1, point2, Scalar(0, 0, 255), 2, 8, 0);
//	}
//}
//
//int main()
//{
//	cv::utils::logging::setLogLevel(utils::logging::LOG_LEVEL_SILENT);
//
//	Mat img = imread("./images/stuff.jpg");
//	Mat img1, img2;
//	img.copyTo(img1);
//	img.copyTo(img2);
//	imshow("img", img);
//
//	//ȥ�������ֵ��
//	Mat canny;
//	Canny(img, canny, 80, 160, 3, false);
//	imshow("", canny);
//
//	//�������㣬��ϸС��϶����
//	Mat kernel = getStructuringElement(0, Size(3, 3));
//	dilate(canny, canny, kernel);
//
//	//�������������
//	vector<vector<Point>> contours; //����
//	vector<Vec4i> hierarchy;		//��������ṹ����
//	findContours(canny, contours, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point());
//
//	//Ѱ����������Ӿ���
//	for (int n = 0; n < contours.size(); n++)
//	{
//		//�����Ӿ���
//		Rect rect = boundingRect(contours[n]);
//		rectangle(img1, rect, Scalar(0, 0, 255), 2, 8, 0);
//
//		//��С��Ӿ���
//		RotatedRect rrect = minAreaRect(contours[n]);
//		Point2f points[4];
//		rrect.points(points);	//��ȡ��С��Ӿ��ε��ĸ�����
//		Point2f cpt = rrect.center;	//��С��Ӿ��ε�����
//
//		//������ת����������λ��
//		for (int i = 0; i < 4; i++)
//		{
//			if (i == 3)
//			{
//				line(img2, points[i], points[0], Scalar(0, 255, 0), 2, 8, 0);
//				break;
//			}
//			line(img2, points[i], points[i + 1], Scalar(0, 255, 0), 2, 8, 0);
//		}
//		//���ƾ��ε�����
//		circle(img2, cpt, 4, Scalar(255, 0, 0), -1, 8, 0);
//	}
//	
//	imshow("max", img1);
//	imshow("min", img2);
//
//	cout << "�����Ƕ�������" << endl;
//	waitKey(0);
//
//
//	Mat approx = imread("./images/approx.jpg");
//	//ȥ�������ֵ��
//	Mat canny2;
//	Canny(approx, canny2, 80, 160, 3, false);
//
//	//�������㣬��ϸС��϶����
//	Mat kernel2 = getStructuringElement(0, Size(3, 3));
//	dilate(canny2, canny2, kernel2);
//
//	//�������������
//	vector<vector<Point>> contours2; //����
//	vector<Vec4i> hierarchy2;	//��������ṹ����
//	findContours(canny2, contours2, hierarchy2, 0, CHAIN_APPROX_SIMPLE, Point());
//
//	//Ѱ����������Ӿ���
//	for (int n = 0; n < contours2.size(); n++)
//	{
//		//��С��Ӿ���
//		RotatedRect rrect = minAreaRect(contours2[n]);
//		Point2f center = rrect.center;	//��С��Ӿ��ε�����
//		circle(approx, center, 2, Scalar(0, 255, 0), 2, 8, 0);
//
//		Mat result;
//		approxPolyDP(contours2[n], result, 4, true);  //��������
//		drawapp(result, approx);
//		cout << "corners: " << result.rows << endl;
//
//		//�ж���״�ͻ�������
//		if (result.rows == 3)
//		{
//			putText(approx, "triangle", center, 0, 1, Scalar(0, 255, 0), 1, 8);
//		}
//		else if (result.rows == 4)
//		{
//			putText(approx, "rectangle", center, 0, 1, Scalar(0, 255, 0), 1, 8);
//		}
//		else if (result.rows == 8)
//		{
//			putText(approx, "poly-8", center, 0, 1, Scalar(0, 255, 0), 1, 8);
//		}
//		else if (result.rows > 12)
//		{
//			putText(approx, "circle", center, 0, 1, Scalar(0, 255, 0), 1, 8);
//		}
//	}
//
//	imshow("result", approx);
//
//	//���������Ӷ����εĽ��
//	imshow("max", img1);
//	imshow("min", img2);
//
//	waitKey(0);
//	return 0;
//}