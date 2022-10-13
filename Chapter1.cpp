#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

/*using namespace cv; | std;
std::string
cv::imread
*/

//////// Read Images Videos and Webcams ////////

///////////////////  Images  ///////////////////
//
//void main()
//{
//	string path = "d:\\test11\\test11\\Resources\\test.png";//give the path to find the picture in the computer
//
//	Mat img = imread(path);//read the image path
//
//	imshow("Image", img);//show the image and name the shown picture,"img" point to the one above
//
//	waitKey(0);//wait for some time,"0" means infinite, it is not to close
//
//}



///////////////////  Video  ////////////////////
//
//void main()
//{
//	string path = "d:\\test11\\test11\\Resources\\test_video.mp4";//define the path
// 
//	VideoCapture cap(path);//capture the image and name it 'cap'
// 
//	Mat img;//declare a maths image(Êý×ÖÍ¼Ïñ)
//
//	while (true)//a serious of images, so we use the "while" circulation 
//	{
//		cap.read(img);//read image data
//
//		imshow("Image", img);
// 
//		waitKey(20);//delay 20 milliseconds
//	}
//}



////////////////////  Webcam  //////////////////
//
//void main()
//{
//
//	VideoCapture cap(0);//write an id of your camera, now it is No.0, which is the computer camera itself.
// 
//	Mat img;//
//
//	while (true)//
//	{
//		cap.read(img);//
//
//		imshow("Image", img);//
// 
//		waitKey(1);//
//	}
//}



/////////////Practice/////////////
//
//
//void main()
//{
//
//	VideoCapture cap(0);//write an id of your camera, now it is No.0, which is the computer camera itself.
//
//	Mat img;//, kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
//
//	while (true)//
//	{
//		cap.read(img);//
//		Mat imgVideoCrop, imgGray, imgBlur, imgCanny, imgErode, imgDil;//
//
//		resize(img, imgVideoCrop, Size(), 0.8, 0.8);
//		cvtColor(imgVideoCrop, imgGray, COLOR_BGR2GRAY);
//		GaussianBlur(imgGray, imgBlur, Size(5, 5), 5, 0);
//		Canny(imgBlur, imgCanny,20,45);
////		dilate(imgErode, imgDil, kernel);
////		erode(imgCanny, imgErode, kernel);
//
////		imshow("Image Video Crop", imgVideoCrop);//
//
//		imshow("Image Video Dilation", imgCanny);//
//
//		waitKey(1);//
//	}
//}
