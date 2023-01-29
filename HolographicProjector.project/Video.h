#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;

/*
    Handles playing videos for us.
*/

class MyVideos{
public:
    MyVideos(string filename, string label){
        this->filename = filename;
        this->label = label;
    }

    void run(){
        VideoCapture cam(filename);

        if(!cam.isOpened()){
            cout << "Cannot find that camera index!" << endl;
            return;
        }

        Mat frame;

        while(true){
            cam >> frame;

            if (frame.empty()){
                cam.set(cv::CAP_PROP_POS_AVI_RATIO, 0);
                continue;
            }
            imshow(label, frame);

            if(waitKey(30) >= 0) break;
        }

        cam.release();
    }

private:
    string filename;
    string label;
};