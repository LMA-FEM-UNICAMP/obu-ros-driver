#include <memory>

#include "v2x_msgs/msg/cam.hpp"

extern "C"
{
#include "v2x_msgs/msg/cam.h"
#include "v2x_msgs/msg/its_pdu_header.h"
#include "v2x_msgs/msg/protected_communication_zone.h"
#include "v2x_msgs/msg/path_point.h"
#include "v2x_msgs/msg/pt_activation_data.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"
}

class V2xMsgConverter
{
public:
    V2xMsgConverter();
    ~V2xMsgConverter();

    static void cam__c_to_cpp(const v2x_msgs__msg__CAM *cam_c, v2x_msgs::msg::CAM *cam_cpp);
    static void cam__cpp_to_c(const v2x_msgs::msg::CAM::SharedPtr cam_cpp, v2x_msgs__msg__CAM *cam_c);

    static void its_pdu_header_c_to_cpp(const v2x_msgs__msg__ItsPduHeader *its_pdu_header_c, v2x_msgs::msg::ItsPduHeader * its_pdu_header_cpp);
    static void its_pdu_header_cpp_to_c(const v2x_msgs::msg::ItsPduHeader::SharedPtr its_pdu_header_cpp, v2x_msgs__msg__ItsPduHeader * its_pdu_header_c);
};
