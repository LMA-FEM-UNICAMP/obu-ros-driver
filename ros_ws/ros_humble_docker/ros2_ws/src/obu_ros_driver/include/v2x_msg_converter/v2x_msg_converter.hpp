#include <memory>

#include "v2x_msgs/msg/cam.hpp"
#include "v2x_msgs/msg/cam.h"

class V2xMsgConverter
{
public:
    V2xMsgConverter();
    ~V2xMsgConverter();

    static v2x_msgs::msg::CAM cam__c_to_cpp(const v2x_msgs__msg__CAM *cam_c);
    static v2x_msgs__msg__CAM cam__cpp_to_c(const v2x_msgs::msg::CAM::SharedPtr cam_cpp);

    static v2x_msgs::msg::ItsPduHeader its_pdu_header_c_to_cpp(const v2x_msgs__msg__ItsPduHeader *its_pdu_header_c);
    static v2x_msgs__msg__ItsPduHeader its_pdu_header_cpp_to_c(const v2x_msgs::msg::ItsPduHeader::SharedPtr its_pdu_header_cpp);
};

