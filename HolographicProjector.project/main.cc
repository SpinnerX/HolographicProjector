#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "Video.h"
using namespace std;
using namespace cv;

/*
int main(){
    string filename1 = "fresh-healthy-food-in-paper-bag-and-bowl.mp4";
    string filename2 = "kawaii-cartoon-food-fried-egg-and-bacon.mp4";

    VideoCapture cam1(filename1);
    VideoCapture cam2(filename2);
    Mat frame1, frame2;

    while(true){
        
        cam1 >> frame1;
        cam2 >> frame2;

        if (waitKey(30) >= 0) break;
        int w = 1500;
        int h = 1500;

        cout << "Frame 1: " << frame1.size() << endl;
        cout << "Frame 2: " << frame2.size() << endl;

        if(!frame1.empty()) imshow("Window 1", frame1);
        if(!frame2.empty()) imshow("Window 2", frame2);
    }

}*/

string commands(int size, char** arguments){
    
}

int main(int argv, char** argc){
    string filename1 = "fresh-healthy-food-in-paper-bag-and-bowl.mp4";
    string filename2 = "kawaii-cartoon-food-fried-egg-and-bacon.mp4";
    string filename3 = "metabolism-body-converts-food-to-energy.mov";

    vector<string> vec;
    string sentence = "";

    if(argv <= 1){
        cout << "No" << endl;
        return -1;
    }

    for(int i = 1; i < argv; i++){
        string words = (string)argc[i] + " ";
        sentence = sentence + words; // Adds a space
    }
    sentence.erase(sentence.end()-1);

    if(sentence == "Play video 1"){
        MyVideos video1 = MyVideos(filename1, "Window 1");
        video1.run();
    }
    if(sentence == "Play video 2"){
        MyVideos video2 = MyVideos(filename2, "Window 2");
        video2.run();
    }
    if(sentence == "Play video 3"){
        MyVideos video3 = MyVideos(filename3, "Window 3");
        video3.run();
    }
    

}