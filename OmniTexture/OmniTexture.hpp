//
//  OmniTexture.hpp
//  testOpenGL
//
//  Created by takujifunao on 2016/08/08.
//  Copyright © 2016年 takujifunao. All rights reserved.
//

#ifndef OmniTexture_hpp
#define OmniTexture_hpp

////////////////////////////////////
//          import libs
////////////////////////////////////

// standard
#include <iostream>
#include <stdio.h>
#include <unistd.h>

// asynchronous
#include <thread>
#include <future>
#include <functional>

// opencv
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>

// opengl
#include <GLUT/glut.h>
#include <OpenGL/gl.h>


////////////////////////////////////
//          name spaces
////////////////////////////////////


using namespace cv;
using namespace std;


//////////////////////////////////////////////////////////////////////

extern "C" {
        
    void GetTextureByOpenCV(void);
    void static LoopGet(int value);
    void static Display(void);
    void static DisplayTexture(void);
    
    int GlutInit(int argc, char* argv[]);
    int GetTexturePtr(void);
    void TestStart(void);
    int Test(void);
    
}


#endif /* OmniTexture_hpp */
