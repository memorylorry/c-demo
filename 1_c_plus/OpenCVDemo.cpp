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

    // Because we want our window to be displayed until the user presses a key (otherwise the program would end far too quickly),
    // we use the cv::waitKey function whose only parameter is just how long should it wait for a user input (measured in milliseconds).
    // Zero means to wait forever. The return value is the key that was pressed.
    int k = waitKey(0);
    // 如果按了键盘上的s键，则保存图片
    if(k == 's'){
        imwrite("blur_sakura.png", dstlmage);
    }
    return 0;
}
