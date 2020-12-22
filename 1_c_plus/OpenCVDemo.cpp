#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace cv;

int main(int argc,const char* argv[]){
    // 图片用绝对路径，注意更改为存在的图片！
    Mat srclmage = imread("/home/darling/sakura.jpg");
    imshow("[ 原图 ] ",srclmage);
    //进行均值滤波操作
    Mat dstlmage;
    blur(srclmage, dstlmage, Size(7, 7));
    imshow ("[ 均值滤波器效果图 ] ", dstlmage);
    waitKey(0);
    return 0;
}
