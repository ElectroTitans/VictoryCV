#include "ScaleDetector.h"
void ScaleDetector::Init(){

}

void ScaleDetector::Process(cv::Mat* inputMat, cv::Mat* outputMat)
{
    cv::Mat temp;
    inputMat->copyTo(temp);
    cv::putText(temp,"Scale Detector", cv::Point(50,50),0,1.0,cv::Scalar(0,255,255));
    temp.copyTo(*outputMat);
    temp.release();
}

void ScaleDetector::Stop()
{

}