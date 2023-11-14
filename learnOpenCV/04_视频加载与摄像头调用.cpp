//#include <opencv2/opencv.hpp>
//#include <iostream>
//#include <vector>
//#include <opencv2/core/utils/logger.hpp>
//
//using namespace std;
//using namespace cv;
//
//int main01() //��Ƶ����
//{
//	cv::utils::logging::setLogLevel(utils::logging::LOG_LEVEL_SILENT);
//	VideoCapture video;
//	video.open("test.mp4");
//
//	if (!video.isOpened())
//	{
//		cout << "������Ƶ�ļ�" << endl;
//		return -1;
//	}
//
//	cout << "��Ƶ֡��:" << video.get(CAP_PROP_FPS) << endl;
//	cout << "��Ƶ��ȣ�" << video.get(CAP_PROP_FRAME_WIDTH) << endl;
//
//	while (1)
//	{
//		Mat frame; //�洢��ǰ֡
//		video >> frame; //������Ƶ��
//
//		if (frame.empty())
//		{
//			break;
//		}
//		imshow("video", frame);
//
//		uchar c = waitKey(1000 / video.get(CAP_PROP_FPS));
//
//		if (c == 'q')
//		{
//			break;
//		}
//	}
//
//	waitKey(0);
//
//	return 0;
//}
//
//int main() //��������ͷ
//{
//	Mat img;
//	VideoCapture video(0); //ʹ��ĳ������ͷ 
//	video.set(CAP_PROP_FRAME_WIDTH, 1280);
//	video.set(CAP_PROP_FRAME_HEIGHT, 720);
//	video.set(CAP_PROP_FPS, 30);
//
//	if (!video.isOpened())
//	{
//		cout << "������ͷʧ�ܣ���ȷ������ͷ�Ƿ�װ�ɹ�" << endl;
//		return -1;
//	}
//	cout << "��Ƶ֡��:" << video.get(CAP_PROP_FPS) << endl;
//	cout << "��Ƶ��ȣ�" << video.get(CAP_PROP_FRAME_WIDTH) << endl;
//
//	video >> img;	//��ȡͼ��
//	//����Ƿ�ɹ���ȡͼ��
//
//	if (img.empty())
//	{
//		cout << "û�л�ȡ��ͼ��" << endl;
//		return -1;
//	}
//
//	bool isColor = (img.type() == CV_8UC3);
//
//	VideoWriter writer;
//	//int codec = VideoWriter::fourcc('M', 'J', 'P', 'G'); //ѡ������ʽ
//
//	double fps = 30.0; //������Ƶ֡��
//
//	//string filename = "live.avi"; //�������Ƶ�ļ�����
//	//writer.open(filename, codec, fps, img.size(), isColor); //����������Ƶ�ļ�����Ƶ��
//
//	//if (!writer.isOpened())	//�ж���Ƶ���Ƿ񴴽��ɹ�
//	//{
//	//	cout << "����Ƶ�ļ�ʧ��,��ȷ���Ƿ�λ�Ϸ�����" << endl;
//	//	return -1;
//	//}
//
//	while (1)
//	{
//		//����Ƿ�ִ�����
//		if (!video.read(img))
//		{
//			cout << "����ͷ�Ͽ����ӻ�����Ƶ��ȡ���" << endl;
//			break;
//		}
//		writer.write(img);	//��ͼ��д����Ƶ��
//
//		imshow("Live", img); //��ʾͼ��
//		if (32 == waitKey(20))
//		{
//			imwrite("test.jpg", img);
//		}
//		char c = waitKey(100);
//		if (c == 27) //esc�˳�
//		{
//			break;
//		}
//	}
//	//�˳�����ʱ�Զ��ر���Ƶ��
//	video.release();
//	//writer.release();
//
//	waitKey(0);
//
//	return 0;
//}