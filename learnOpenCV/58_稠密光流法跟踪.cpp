//#include <opencv2/opencv.hpp>
//#include <fstream>
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
//	//��ȡ����ͼ��
//	VideoCapture capture("./images/vtest.avi");
//	Mat preFrame, preGray;
//	if (!capture.read(preFrame))
//	{
//		cout << "��ȷ����Ƶ�ļ��Ƿ���ȷ" << endl;
//		return -1;
//	}
//	
//	//�����Ƶ�����Ϣ
//	int fps = capture.get(CAP_PROP_FPS);
//	int width = capture.get(CAP_PROP_FRAME_WIDTH);
//	int height = capture.get(CAP_PROP_FRAME_HEIGHT);
//	int num_of_frame = capture.get(CAP_PROP_FRAME_COUNT);
//	cout << "��Ƶ��ȣ�" << width << " ��Ƶ�߶ȣ�" << height << " ��Ƶ֡�ʣ�" << fps << " ��Ƶ��֡��" << num_of_frame << endl;
//
//	//��ȡ��Ƶ�е�һ֡ͼ����Ϊǰһ֡ͼ�񣬲����лҶȱ仯
//	cvtColor(preFrame, preGray, COLOR_BGR2GRAY);
//
//	while (true)
//	{
//		Mat nextFrame, nextGray;
//		//��Ƶ������ͼ��������˳�ѭ��
//		if (!capture.read(nextFrame))
//		{
//			break;
//		}
//		imshow("��Ƶͼ��", nextFrame);
//		Mat_<Point2f> flow;	//����������˶��ٶ�
//		calcOpticalFlowFarneback(preGray, nextGray, flow, 0.5, 3, 15, 3, 5, 1.2, 0);
//
//		Mat xV = Mat::zeros(preFrame.size(), CV_32FC1);	//x�����ƶ��ٶ�
//		Mat yV = Mat::zeros(preFrame.size(), CV_32FC1);	//y�����ƶ��ٶ�
//
//		for (int row = 0; row < flow.rows; row++)
//		{
//			for (int col = 0; col < flow.cols; col++)
//			{
//				const Point2f& flow_xy = flow.at<Point2f>(row, col);
//				xV.at<float>(row, col) = flow_xy.x;
//				yV.at<float>(row, col) = flow_xy.y;
//			}
//		}
//
//		//���������ǶȺͷ�ֵ
//		Mat magnitude, angle;
//		cartToPolar(xV, yV, magnitude, angle);
//
//		//�Ƕ�ת���ɽǶ���
//		angle = angle * 180.0 / CV_PI / 2.0;
//
//		//�ѷ�ֵ��һ����0-255���������ʾ���
//		normalize(magnitude, magnitude, 0, 255, NORM_MINMAX);
//
//		//����ǶȺͷ�ֵ�ľ���ֵ
//		convertScaleAbs(magnitude, magnitude);
//		convertScaleAbs(angle, angle);
//
//		//�˶��ķ�ֵ�ͽǶ�����HSV��ɫ�ռ��ͼ��
//		Mat HSV = Mat::zeros(preFrame.size(), preFrame.type());
//		vector<Mat> result;
//		split(HSV, result);
//		result[0] = angle;	//������ɫ
//		result[1] = Scalar(255);
//		result[2] = magnitude;	//������̬
//								//��������ͨ��ͼ��ϲ���ͨ��ͼ��
//		merge(result, HSV);
//
//		//��HSV��ɫ�ռ�ͼ��ת����RGB��ɫ�ռ���
//		Mat rgbImg;
//		cvtColor(HSV, rgbImg, COLOR_HSV2BGR);
//
//		//��ʾ�����
//		imshow("�˶������", rgbImg);
//
//		//5������ʱ�ж��Ƿ��Ƴ����򣬰�ESC���˳�;
//		char c = waitKey(5);
//		if (c == 27)
//		{
//			break;
//		}
//	}
//
//	waitKey(0);
//	return 0;
//}