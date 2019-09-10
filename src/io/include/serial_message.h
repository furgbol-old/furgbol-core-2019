#ifndef SERIAL_MESSAGE_H
#define SERIAL_MESSAGE_H

#include <iostream>
#include <stdint.h>
#include <vector>

namespace furgbol {
namespace io {

enum SerialMessageHeaderFlags {
    ROBOT_ID = 0, VEL_X = 1, VEL_Y = 2, VEL_THETA = 3, DIR_X = 4, DIR_Y = 5, DIR_THETA = 6, 
    DRIBBLER = 7, KICK = 8
};

class SerialMessage {
    private:
        uint16_t pkg_id_;
        uint8_t msg_type_;
        uint8_t robot_id_;
        uint8_t velocity_x_;
        uint8_t velocity_y_;
        uint8_t velocity_theta_;
        uint8_t direction_x_;
        uint8_t direction_y_;
        uint8_t direction_theta_;
        uint8_t dribbler_;
        uint8_t kick_;

    public:
        SerialMessage();
        ~SerialMessage();

        void serialize(std::vector<uint8_t> &buffer);

        void clear();

        friend std::ostream &operator <<(std::ostream &, SerialMessage const &);

        void setRobotId(uint8_t robot_id);
        void setVelocityX(uint8_t velocity_x);
        void setVelocityY(uint8_t velocity_y);
        void setVelocityTheta(uint8_t velocity_theta);
        void setDirectionX(uint8_t direction_x);
        void setDirectionY(uint8_t direction_y);
        void setDirectionTheta(uint8_t direction_theta);
        void setDribbler(uint8_t dribbler);
        void setKick(uint8_t kick);

        uint16_t getPkgId();
        uint8_t getMsgType();
        uint8_t getRobotId();
        uint8_t getVelocityX();
        uint8_t getVelocityY();
        uint8_t getVelocityTheta();
        uint8_t getDirectionX();
        uint8_t getDirectionY();
        uint8_t getDirectionTheta();
        uint8_t getDribbler();
        uint8_t getKick();
};

}  // namespace io
}  // namespace furgbol

#endif // SERIAL_MESSAGE_H