//#include <opencv2/opencv.hpp>
//#include <iostream>
//#include <vector>
//#include <opencv2/core/utils/logger.hpp>
//
//using namespace std;
//using namespace cv;
//
//int main01() //视频加载
//{
//	cv::utils::logging::setLogLevel(utils::logging::LOG_LEVEL_SILENT);
//	VideoCapture video;
//	video.open("test.mp4");
//
//	if (!video.isOpened())
//	{
//		cout << "请检查视频文件" << endl;
//		return -1;
//	}
//
//	cout << "视频帧率:" << video.get(CAP_PROP_FPS) << endl;
//	cout << "视频宽度：" << video.get(CAP_PROP_FRAME_WIDTH) << endl;
//
//	while (1)
//	{
//		Mat frame; //存储当前帧
//		video >> frame; //赋予视频流
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
//int main() //调用摄像头
//{
//	Mat img;
//	VideoCapture video(0); //使用某个摄像头 
//	video.set(CAP_PROP_FRAME_WIDTH, 1280);
//	video.set(CAP_PROP_FRAME_HEIGHT, 720);
//	video.set(CAP_PROP_FPS, 30);
//
//	if (!video.isOpened())
//	{
//		cout << "打开摄像头失败，请确认摄像头是否安装成功" << endl;
//		return -1;
//	}
//	cout << "视频帧率:" << video.get(CAP_PROP_FPS) << endl;
//	cout << "视频宽度：" << video.get(CAP_PROP_FRAME_WIDTH) << endl;
//
//	video >> img;	//获取图像
//	//检测是否成功获取图像
//
//	if (img.empty())
//	{
//		cout << "没有获取到图像" << endl;
//		return -1;
//	}
//
//	bool isColor = (img.type() == CV_8UC3);
//
//	VideoWriter writer;
//	//int codec = VideoWriter::fourcc('M', 'J', 'P', 'G'); //选择编码格式
//
//	double fps = 30.0; //设置视频帧率
//
//	//string filename = "live.avi"; //保存的视频文件名称
//	//writer.open(filename, codec, fps, img.size(), isColor); //创建保存视频文件的视频流
//
//	//if (!writer.isOpened())	//判断视频流是否创建成功
//	//{
//	//	cout << "打开视频文件失败,请确认是否位合法输入" << endl;
//	//	return -1;
//	//}
//
//	while (1)
//	{
//		//检测是否执行完毕
//		if (!video.read(img))
//		{
//			cout << "摄像头断开连接或者视频读取完成" << endl;
//			break;
//		}
//		writer.write(img);	//把图像写入视频流
//
//		imshow("Live", img); //显示图像
//		if (32 == waitKey(20))
//		{
//			imwrite("test.jpg", img);
//		}
//		char c = waitKey(100);
//		if (c == 27) //esc退出
//		{
//			break;
//		}
//	}
//	//退出程序时自动关闭视频流
//	video.release();
//	//writer.release();
//
//	waitKey(0);
//
//	return 0;
//}