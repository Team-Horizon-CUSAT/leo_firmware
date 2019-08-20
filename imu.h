#ifndef _IMU_H_
#define _IMU_H_

#include <vector>

class IMU
{
public:
    void begin();
    void update();
    std::vector<float> getAccel();
    std::vector<float> getGyro();
    std::vector<float> getQuaternion();

private:
    void updateLoop();
};

#endif