//
//  AccuraSDK.h
//  DocRecog
//
//  Created by Apple on 02/05/20.
//  Copyright © 2020 apple. All rights reserved.
//

#ifndef AccuraSDK_h
#define AccuraSDK_h

#import <Foundation/Foundation.h>
#include <string>

using namespace std;

class ImageOpenCv {

public:
    ImageOpenCv(const std::string &message, bool isSucess, bool isChangeCard, int cardPos,
                int resultCode, float ratioOut) : message(message), isSucess(isSucess),
    isChangeCard(isChangeCard), cardPos(cardPos),
    resultCode(resultCode), ratioOut(ratioOut) {
    }

    std::string message = "";
    bool isSucess = false;
    bool isChangeCard = false;
    int cardPos = 0;
    int resultCode = 0;
    float ratioOut;
    std::string croppedRect;
};

int docrecog_scan_RecogEngine_loadDictionary(std::string path_file, NSString* path, std::string directorypath);

string docrecog_scan_RecogEngine_loadData(int *jint1);
string docrecog_scan_RecogEngine_loadOCR(int countrytype_, int cardtype_, int jint1, string dairectorypath);
string docrecog_scan_RecogEngine_loadScanner(int countrytype_, string dairectorypath);
ImageOpenCv docrecog_scan_RecogEngine_checkDocument(cv::Mat src, cv::Mat &resultMat, cv::Mat &showResult);
string docrecog_scan_RecogEngine_recognizeData(cv::Mat &src,/* float *imageHeightWidth, */int **boxBounds, int elementsLength, string *textArray, string facePath);
int docrecog_scan_RecogEngine_setBlurPercentage(int jint1);
int docrecog_scan_RecogEngine_setGlarePercentage(int jintMin, int jintMax);
int docrecog_scan_RecogEngine_isCheckPhotoCopy(BOOL jint1);
int docrecog_scan_RecogEngine_SetHologramDetection(bool jint1);
int docrecog_scan_RecogEngine_setFaceBlurPercentage(int jint1);
int docrecog_scan_RecogEngine_setLowLightTolerance(int tolerance);
int docrecog_scan_RecogEngine_setMotionThreshold(int motionTolerance, string jstringMessage);
std::string filterFace(cv::Mat opencvFace);
void updatedata(string s);

string docrecog_scan_RecogEngine_doCheckData(cv::Mat yuvData, int w, int h);
//void Logger(string logMsg, bool isPrint = false);

#endif /* AccuraSDK_h */
