#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>



int main()
{


	cv::Mat image = cv::imread("C:/OpenCVProjects/cam01/1.png");
	cv::namedWindow("My Image");

	cv::namedWindow("Original Image"); // define the window
	cv::imshow("Original Image", image); // show the image

	cv::Mat result;
	cv::flip(image, result, 1); // positive for horizontal
								// 0 for vertical,
								// negative for both
	cv::namedWindow("Output Image");
	cv::imshow("Output Image", result);
	cv::imwrite("output.png", result);
	cv::waitKey(0);

	return 1;
}