#include "v2x_msg_converter.hpp"

V2xMsgConverter::V2xMsgConverter()
{
}

V2xMsgConverter::~V2xMsgConverter()
{
}

/// V2X messages C <-> C++ converter -- START

/* ItsPduHeader */

void V2xMsgConverter::its_pdu_header_c_to_cpp(const v2x_msgs__msg__ItsPduHeader *its_pdu_header_c, v2x_msgs::msg::ItsPduHeader *its_pdu_header_cpp)
{
    its_pdu_header_cpp->message_id = its_pdu_header_c->message_id;
    its_pdu_header_cpp->station_id.station_id = its_pdu_header_c->station_id.station_id;
    its_pdu_header_cpp->protocol_version = its_pdu_header_c->protocol_version;
}

void V2xMsgConverter::its_pdu_header_cpp_to_c(const v2x_msgs::msg::ItsPduHeader::SharedPtr its_pdu_header_cpp, v2x_msgs__msg__ItsPduHeader *its_pdu_header_c)
{
    its_pdu_header_c->message_id = its_pdu_header_cpp->message_id;
    its_pdu_header_c->station_id.station_id = its_pdu_header_cpp->station_id.station_id;
    its_pdu_header_c->protocol_version = its_pdu_header_cpp->protocol_version;
}

/* CAM */

void V2xMsgConverter::cam__c_to_cpp(const v2x_msgs__msg__CAM *cam_c, v2x_msgs::msg::CAM *cam_cpp)
{

    // Header
    its_pdu_header_c_to_cpp(&cam_c->header, &cam_cpp->header);

    // CAM
    cam_cpp->cam.generation_delta_time.generation_delta_time = cam_c->cam.generation_delta_time.generation_delta_time;

    // CAM Basic Container
    cam_cpp->cam.cam_parameters.basic_container.station_type.station_type =
        cam_c->cam.cam_parameters.basic_container.station_type.station_type;

    cam_cpp->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.altitude_value =
        cam_c->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.altitude_value;

    cam_cpp->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.altitude_confidence =
        cam_c->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.altitude_confidence;

    cam_cpp->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.altitude_confidence =
        cam_c->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.altitude_confidence;

    cam_cpp->cam.cam_parameters.basic_container.reference_position.latitude.latitude =
        cam_c->cam.cam_parameters.basic_container.reference_position.latitude.latitude;

    cam_cpp->cam.cam_parameters.basic_container.reference_position.longitude.longitude =
        cam_c->cam.cam_parameters.basic_container.reference_position.longitude.longitude;

    cam_cpp->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.semi_axis_length =
        cam_c->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.semi_axis_length;

    cam_cpp->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.semi_axis_length =
        cam_c->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.semi_axis_length;

    cam_cpp->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.heading_value =
        cam_c->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.heading_value;

    // CAM High Frequency Container

    cam_cpp->cam.cam_parameters.high_frequency_container.high_frequency_container_container_select =
        cam_c->cam.cam_parameters.high_frequency_container.high_frequency_container_container_select;

    // basic_vehicle_container_high_frequency

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.acceleration_control.acceleration_control =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.acceleration_control.acceleration_control;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.acceleration_control_present =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.acceleration_control_present;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.heading.heading_value.heading_value =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.heading.heading_value.heading_value;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.heading.heading_confidence.heading_confidence =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.heading.heading_confidence.heading_confidence;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.speed.speed_value.speed_value =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.speed.speed_value.speed_value;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.speed.speed_confidence.speed_confidence =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.speed.speed_confidence.speed_confidence;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.drive_direction.drive_direction =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.drive_direction.drive_direction;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.vehicle_length_value =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.vehicle_length_value;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.vehicle_length_confidence_indication =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.vehicle_length_confidence_indication;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vehicle_width.vehicle_width =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vehicle_width.vehicle_width;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.longitudinal_acceleration_value =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.longitudinal_acceleration_value;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.acceleration_confidence =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.acceleration_confidence;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.curvature.curvature_value.curvature_value =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.curvature.curvature_value.curvature_value;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.curvature.curvature_confidence.curvature_confidence =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.curvature.curvature_confidence.curvature_confidence;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.curvature_calculation_mode.curvature_calculation_mode =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.curvature_calculation_mode.curvature_calculation_mode;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.yaw_rate_value =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.yaw_rate_value;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.yaw_rate_confidence =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.yaw_rate_confidence;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.acceleration_control_present =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.acceleration_control_present;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.acceleration_control.acceleration_control =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.acceleration_control.acceleration_control;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.lane_position_present =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.lane_position_present;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.lane_position.lane_position =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.lane_position.lane_position;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.steering_wheel_angle_present =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.steering_wheel_angle_present;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.steering_wheel_angle.steering_wheel_angle_value.steering_wheel_angle_value =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.steering_wheel_angle.steering_wheel_angle_value.steering_wheel_angle_value;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.steering_wheel_angle.steering_wheel_angle_confidence.steering_wheel_angle_confidence =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.steering_wheel_angle.steering_wheel_angle_confidence.steering_wheel_angle_confidence;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.lateral_acceleration_present =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.lateral_acceleration_present;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.lateral_acceleration.lateral_acceleration_value.lateral_acceleration_value =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.lateral_acceleration.lateral_acceleration_value.lateral_acceleration_value;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.lateral_acceleration.lateral_acceleration_confidence.acceleration_confidence =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.lateral_acceleration.lateral_acceleration_confidence.acceleration_confidence;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vertical_acceleration_present =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vertical_acceleration_present;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vertical_acceleration.vertical_acceleration_value.vertical_acceleration_value =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vertical_acceleration.vertical_acceleration_value.vertical_acceleration_value;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vertical_acceleration.vertical_acceleration_confidence.acceleration_confidence =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vertical_acceleration.vertical_acceleration_confidence.acceleration_confidence;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.performance_class_present =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.performance_class_present;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.performance_class.performance_class =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.performance_class.performance_class;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone_present =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone_present;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.cen_dsrc_tolling_zone_id.cen_dsrc_tolling_zone_id.protected_zone_id =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.cen_dsrc_tolling_zone_id.cen_dsrc_tolling_zone_id.protected_zone_id;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.protected_zone_latitude.latitude =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.protected_zone_latitude.latitude;

    cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.protected_zone_longitude.longitude =
        cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.protected_zone_longitude.longitude;

    // rsu_container_high_frequency

    cam_cpp->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu_present =
        cam_c->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu_present;

    // cam_cpp->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu vector
    for (size_t j = 0; j < cam_c->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu.size; j++)
    {
        v2x_msgs::msg::ProtectedCommunicationZone protected_communication_zone_cpp;

        protected_communication_zone_cpp.expiry_time.timestamp_its =
            cam_c->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu.data[j].expiry_time.timestamp_its;
        protected_communication_zone_cpp.expiry_time_present =
            cam_c->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu.data[j].expiry_time_present;
        protected_communication_zone_cpp.protected_zone_id.protected_zone_id =
            cam_c->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu.data[j].protected_zone_id.protected_zone_id;
        protected_communication_zone_cpp.protected_zone_id_present =
            cam_c->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu.data[j].protected_zone_id_present;
        protected_communication_zone_cpp.protected_zone_latitude.latitude =
            cam_c->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu.data[j].protected_zone_latitude.latitude;
        protected_communication_zone_cpp.protected_zone_longitude.longitude =
            cam_c->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu.data[j].protected_zone_longitude.longitude;
        protected_communication_zone_cpp.protected_zone_radius.protected_zone_radius =
            cam_c->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu.data[j].protected_zone_radius.protected_zone_radius;
        protected_communication_zone_cpp.protected_zone_radius_present =
            cam_c->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu.data[j].protected_zone_radius_present;
        protected_communication_zone_cpp.protected_zone_type.protected_zone_type =
            cam_c->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu.data[j].protected_zone_type.protected_zone_type;

        cam_cpp->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu.push_back(protected_communication_zone_cpp);
    }

    // CAM Low Frequency Container

    cam_cpp->cam.cam_parameters.low_frequency_container_present =
        cam_c->cam.cam_parameters.low_frequency_container_present;

    cam_cpp->cam.cam_parameters.low_frequency_container.low_frequency_container_container_select =
        cam_c->cam.cam_parameters.low_frequency_container.low_frequency_container_container_select;

    cam_cpp->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.vehicle_role.vehicle_role =
        cam_c->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.vehicle_role.vehicle_role;

    cam_cpp->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.exterior_lights.exterior_lights =
        cam_c->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.exterior_lights.exterior_lights;

    // cam_cpp->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.path_history.history vector
    for (size_t j = 0; j < cam_c->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.path_history.history.size; j++)
    {
        v2x_msgs::msg::PathPoint path_point_cpp;

        path_point_cpp.path_delta_time.path_delta_time =
            cam_c->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.path_history.history.data[j].path_delta_time.path_delta_time;
        path_point_cpp.path_delta_time_present =
            cam_c->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.path_history.history.data[j].path_delta_time_present;
        path_point_cpp.path_position.delta_altitude.delta_altitude =
            cam_c->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.path_history.history.data[j].path_position.delta_altitude.delta_altitude;
        path_point_cpp.path_position.delta_latitude.delta_latitude =
            cam_c->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.path_history.history.data[j].path_position.delta_latitude.delta_latitude;
        path_point_cpp.path_position.delta_longitude.delta_longitude =
            cam_c->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.path_history.history.data[j].path_position.delta_longitude.delta_longitude;

        cam_cpp->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.path_history.history.push_back(path_point_cpp);
    }

    cam_cpp->cam.cam_parameters.special_vehicle_container_present =
        cam_c->cam.cam_parameters.special_vehicle_container_present;

    cam_cpp->cam.cam_parameters.special_vehicle_container.special_vehicle_container_container_select =
        cam_c->cam.cam_parameters.special_vehicle_container.special_vehicle_container_container_select;

    // public_transport_container
    cam_cpp->cam.cam_parameters.special_vehicle_container.public_transport_container.embarkation_status.embarkation_status =
        cam_c->cam.cam_parameters.special_vehicle_container.public_transport_container.embarkation_status.embarkation_status;

    cam_cpp->cam.cam_parameters.special_vehicle_container.public_transport_container.pt_activation_present =
        cam_c->cam.cam_parameters.special_vehicle_container.public_transport_container.pt_activation_present;

    cam_cpp->cam.cam_parameters.special_vehicle_container.public_transport_container.pt_activation.pt_activation_type.pt_activation_type =
        cam_c->cam.cam_parameters.special_vehicle_container.public_transport_container.pt_activation.pt_activation_type.pt_activation_type;

    // cam_cpp->cam.cam_parameters.special_vehicle_container.public_transport_container.pt_activation.pt_activation_data.pt_activation_data vector
    for (size_t j = 0; j < cam_c->cam.cam_parameters.special_vehicle_container.public_transport_container.pt_activation.pt_activation_data.pt_activation_data.size; j++)
    {
        int64_t data;
        data = cam_c->cam.cam_parameters.special_vehicle_container.public_transport_container.pt_activation.pt_activation_data.pt_activation_data.data[j];
        cam_cpp->cam.cam_parameters.special_vehicle_container.public_transport_container.pt_activation.pt_activation_data.pt_activation_data.push_back(data);
    }

    // special_transport_container
    cam_cpp->cam.cam_parameters.special_vehicle_container.special_transport_container.special_transport_type.special_transport_type =
        cam_c->cam.cam_parameters.special_vehicle_container.special_transport_container.special_transport_type.special_transport_type;

    cam_cpp->cam.cam_parameters.special_vehicle_container.special_transport_container.light_bar_siren_in_use.light_bar_siren_in_use =
        cam_c->cam.cam_parameters.special_vehicle_container.special_transport_container.light_bar_siren_in_use.light_bar_siren_in_use;

    // dangerous_goods_container

    cam_cpp->cam.cam_parameters.special_vehicle_container.dangerous_goods_container.dangerous_goods_basic.dangerous_goods_basic =
        cam_c->cam.cam_parameters.special_vehicle_container.dangerous_goods_container.dangerous_goods_basic.dangerous_goods_basic;

    // road_works_container_basic
    cam_cpp->cam.cam_parameters.special_vehicle_container.road_works_container_basic.roadworks_sub_cause_code_present =
        cam_c->cam.cam_parameters.special_vehicle_container.road_works_container_basic.roadworks_sub_cause_code_present;

    cam_cpp->cam.cam_parameters.special_vehicle_container.road_works_container_basic.roadworks_sub_cause_code.roadworks_sub_cause_code =
        cam_c->cam.cam_parameters.special_vehicle_container.road_works_container_basic.roadworks_sub_cause_code.roadworks_sub_cause_code;

    cam_cpp->cam.cam_parameters.special_vehicle_container.road_works_container_basic.light_bar_siren_in_use.light_bar_siren_in_use =
        cam_c->cam.cam_parameters.special_vehicle_container.road_works_container_basic.light_bar_siren_in_use.light_bar_siren_in_use;

    cam_cpp->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes_present =
        cam_c->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes_present;

    cam_cpp->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.innerhard_shoulder_status_present =
        cam_c->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.innerhard_shoulder_status_present;

    cam_cpp->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.innerhard_shoulder_status.hard_shoulder_status =
        cam_c->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.innerhard_shoulder_status.hard_shoulder_status;

    cam_cpp->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.outerhard_shoulder_status_present =
        cam_c->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.outerhard_shoulder_status_present;

    cam_cpp->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.outerhard_shoulder_status.hard_shoulder_status =
        cam_c->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.outerhard_shoulder_status.hard_shoulder_status;

    cam_cpp->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.driving_lane_status_present =
        cam_c->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.driving_lane_status_present;

    cam_cpp->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.driving_lane_status.driving_lane_status =
        cam_c->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.driving_lane_status.driving_lane_status;

    // rescue_container
    cam_cpp->cam.cam_parameters.special_vehicle_container.rescue_container.light_bar_siren_in_use.light_bar_siren_in_use =
        cam_c->cam.cam_parameters.special_vehicle_container.rescue_container.light_bar_siren_in_use.light_bar_siren_in_use;

    // emergency_container
    cam_cpp->cam.cam_parameters.special_vehicle_container.emergency_container.light_bar_siren_in_use.light_bar_siren_in_use =
        cam_c->cam.cam_parameters.special_vehicle_container.emergency_container.light_bar_siren_in_use.light_bar_siren_in_use;

    cam_cpp->cam.cam_parameters.special_vehicle_container.emergency_container.incident_indication_present =
        cam_c->cam.cam_parameters.special_vehicle_container.emergency_container.incident_indication_present;

    cam_cpp->cam.cam_parameters.special_vehicle_container.emergency_container.incident_indication.cause_code.cause_code_type =
        cam_c->cam.cam_parameters.special_vehicle_container.emergency_container.incident_indication.cause_code.cause_code_type;

    cam_cpp->cam.cam_parameters.special_vehicle_container.emergency_container.incident_indication.sub_cause_code.sub_cause_code_type =
        cam_c->cam.cam_parameters.special_vehicle_container.emergency_container.incident_indication.sub_cause_code.sub_cause_code_type;

    cam_cpp->cam.cam_parameters.special_vehicle_container.emergency_container.emergency_priority_present =
        cam_c->cam.cam_parameters.special_vehicle_container.emergency_container.emergency_priority_present;

    cam_cpp->cam.cam_parameters.special_vehicle_container.emergency_container.emergency_priority.emergency_priority =
        cam_c->cam.cam_parameters.special_vehicle_container.emergency_container.emergency_priority.emergency_priority;

    // safety_car_container

    cam_cpp->cam.cam_parameters.special_vehicle_container.safety_car_container.light_bar_siren_in_use.light_bar_siren_in_use =
        cam_c->cam.cam_parameters.special_vehicle_container.safety_car_container.light_bar_siren_in_use.light_bar_siren_in_use;

    cam_cpp->cam.cam_parameters.special_vehicle_container.safety_car_container.incident_indication_present =
        cam_c->cam.cam_parameters.special_vehicle_container.safety_car_container.incident_indication_present;

    cam_cpp->cam.cam_parameters.special_vehicle_container.safety_car_container.incident_indication.cause_code.cause_code_type =
        cam_c->cam.cam_parameters.special_vehicle_container.safety_car_container.incident_indication.cause_code.cause_code_type;

    cam_cpp->cam.cam_parameters.special_vehicle_container.safety_car_container.incident_indication.sub_cause_code.sub_cause_code_type =
        cam_c->cam.cam_parameters.special_vehicle_container.safety_car_container.incident_indication.sub_cause_code.sub_cause_code_type;

    cam_cpp->cam.cam_parameters.special_vehicle_container.safety_car_container.traffic_rule_present =
        cam_c->cam.cam_parameters.special_vehicle_container.safety_car_container.traffic_rule_present;

    cam_cpp->cam.cam_parameters.special_vehicle_container.safety_car_container.traffic_rule.traffic_rule =
        cam_c->cam.cam_parameters.special_vehicle_container.safety_car_container.traffic_rule.traffic_rule;

    cam_cpp->cam.cam_parameters.special_vehicle_container.safety_car_container.speed_limit_present =
        cam_c->cam.cam_parameters.special_vehicle_container.safety_car_container.speed_limit_present;

    cam_cpp->cam.cam_parameters.special_vehicle_container.safety_car_container.speed_limit.speed_limit =
        cam_c->cam.cam_parameters.special_vehicle_container.safety_car_container.speed_limit.speed_limit;
}

void V2xMsgConverter::cam__cpp_to_c(const v2x_msgs::msg::CAM::SharedPtr cam_cpp, v2x_msgs__msg__CAM *cam_c)
{
    // Header
    its_pdu_header_cpp_to_c(std::make_shared<v2x_msgs::msg::ItsPduHeader>(cam_cpp->header), &cam_c->header);

    // CAM
    cam_c->cam.generation_delta_time.generation_delta_time = cam_cpp->cam.generation_delta_time.generation_delta_time;

    // CAM Basic Container
    cam_c->cam.cam_parameters.basic_container.station_type.station_type =
        cam_cpp->cam.cam_parameters.basic_container.station_type.station_type;

    cam_c->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.altitude_value =
        cam_cpp->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.altitude_value;

    cam_c->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.altitude_confidence =
        cam_cpp->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.altitude_confidence;

    cam_c->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.altitude_confidence =
        cam_cpp->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.altitude_confidence;

    cam_c->cam.cam_parameters.basic_container.reference_position.latitude.latitude =
        cam_cpp->cam.cam_parameters.basic_container.reference_position.latitude.latitude;

    cam_c->cam.cam_parameters.basic_container.reference_position.longitude.longitude =
        cam_cpp->cam.cam_parameters.basic_container.reference_position.longitude.longitude;

    cam_c->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.semi_axis_length =
        cam_cpp->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.semi_axis_length;

    cam_c->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.semi_axis_length =
        cam_cpp->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.semi_axis_length;

    cam_c->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.heading_value =
        cam_cpp->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.heading_value;

    // CAM High Frequency Container

    cam_c->cam.cam_parameters.high_frequency_container.high_frequency_container_container_select =
        cam_cpp->cam.cam_parameters.high_frequency_container.high_frequency_container_container_select;

    // basic_vehicle_container_high_frequency

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.acceleration_control.acceleration_control =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.acceleration_control.acceleration_control;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.acceleration_control_present =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.acceleration_control_present;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.heading.heading_value.heading_value =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.heading.heading_value.heading_value;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.heading.heading_confidence.heading_confidence =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.heading.heading_confidence.heading_confidence;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.speed.speed_value.speed_value =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.speed.speed_value.speed_value;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.speed.speed_confidence.speed_confidence =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.speed.speed_confidence.speed_confidence;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.drive_direction.drive_direction =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.drive_direction.drive_direction;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.vehicle_length_value =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.vehicle_length_value;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.vehicle_length_confidence_indication =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.vehicle_length_confidence_indication;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vehicle_width.vehicle_width =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vehicle_width.vehicle_width;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.longitudinal_acceleration_value =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.longitudinal_acceleration_value;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.acceleration_confidence =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.acceleration_confidence;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.curvature.curvature_value.curvature_value =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.curvature.curvature_value.curvature_value;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.curvature.curvature_confidence.curvature_confidence =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.curvature.curvature_confidence.curvature_confidence;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.curvature_calculation_mode.curvature_calculation_mode =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.curvature_calculation_mode.curvature_calculation_mode;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.yaw_rate_value =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.yaw_rate_value;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.yaw_rate_confidence =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.yaw_rate_confidence;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.acceleration_control_present =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.acceleration_control_present;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.acceleration_control.acceleration_control =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.acceleration_control.acceleration_control;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.lane_position_present =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.lane_position_present;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.lane_position.lane_position =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.lane_position.lane_position;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.steering_wheel_angle_present =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.steering_wheel_angle_present;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.steering_wheel_angle.steering_wheel_angle_value.steering_wheel_angle_value =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.steering_wheel_angle.steering_wheel_angle_value.steering_wheel_angle_value;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.steering_wheel_angle.steering_wheel_angle_confidence.steering_wheel_angle_confidence =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.steering_wheel_angle.steering_wheel_angle_confidence.steering_wheel_angle_confidence;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.lateral_acceleration_present =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.lateral_acceleration_present;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.lateral_acceleration.lateral_acceleration_value.lateral_acceleration_value =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.lateral_acceleration.lateral_acceleration_value.lateral_acceleration_value;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.lateral_acceleration.lateral_acceleration_confidence.acceleration_confidence =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.lateral_acceleration.lateral_acceleration_confidence.acceleration_confidence;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vertical_acceleration_present =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vertical_acceleration_present;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vertical_acceleration.vertical_acceleration_value.vertical_acceleration_value =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vertical_acceleration.vertical_acceleration_value.vertical_acceleration_value;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vertical_acceleration.vertical_acceleration_confidence.acceleration_confidence =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.vertical_acceleration.vertical_acceleration_confidence.acceleration_confidence;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.performance_class_present =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.performance_class_present;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.performance_class.performance_class =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.performance_class.performance_class;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone_present =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone_present;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.cen_dsrc_tolling_zone_id.cen_dsrc_tolling_zone_id.protected_zone_id =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.cen_dsrc_tolling_zone_id.cen_dsrc_tolling_zone_id.protected_zone_id;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.protected_zone_latitude.latitude =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.protected_zone_latitude.latitude;

    cam_c->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.protected_zone_longitude.longitude =
        cam_cpp->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.protected_zone_longitude.longitude;

    // rsu_container_high_frequency

    cam_c->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu_present =
        cam_cpp->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu_present;

    v2x_msgs__msg__ProtectedCommunicationZone__Sequence__init(
        &cam_c->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu,
        cam_cpp->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu.size());

    // cam_c->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu vector
    for (size_t j = 0; j < cam_c->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu.size; j++)
    {
        v2x_msgs__msg__ProtectedCommunicationZone protected_communication_zone_cpp;

        protected_communication_zone_cpp.expiry_time.timestamp_its =
            cam_cpp->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu[j].expiry_time.timestamp_its;
        protected_communication_zone_cpp.expiry_time_present =
            cam_cpp->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu[j].expiry_time_present;
        protected_communication_zone_cpp.protected_zone_id.protected_zone_id =
            cam_cpp->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu[j].protected_zone_id.protected_zone_id;
        protected_communication_zone_cpp.protected_zone_id_present =
            cam_cpp->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu[j].protected_zone_id_present;
        protected_communication_zone_cpp.protected_zone_latitude.latitude =
            cam_cpp->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu[j].protected_zone_latitude.latitude;
        protected_communication_zone_cpp.protected_zone_longitude.longitude =
            cam_cpp->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu[j].protected_zone_longitude.longitude;
        protected_communication_zone_cpp.protected_zone_radius.protected_zone_radius =
            cam_cpp->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu[j].protected_zone_radius.protected_zone_radius;
        protected_communication_zone_cpp.protected_zone_radius_present =
            cam_cpp->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu[j].protected_zone_radius_present;
        protected_communication_zone_cpp.protected_zone_type.protected_zone_type =
            cam_cpp->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu[j].protected_zone_type.protected_zone_type;

        cam_c->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.protected_communication_zones_rsu.zonesrsu.data[j] = protected_communication_zone_cpp;
    }

    // CAM Low Frequency Container

    cam_c->cam.cam_parameters.low_frequency_container_present =
        cam_cpp->cam.cam_parameters.low_frequency_container_present;

    cam_c->cam.cam_parameters.low_frequency_container.low_frequency_container_container_select =
        cam_cpp->cam.cam_parameters.low_frequency_container.low_frequency_container_container_select;

    cam_c->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.vehicle_role.vehicle_role =
        cam_cpp->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.vehicle_role.vehicle_role;

    cam_c->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.exterior_lights.exterior_lights =
        cam_cpp->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.exterior_lights.exterior_lights;

    v2x_msgs__msg__PathPoint__Sequence__init(
        &cam_c->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.path_history.history,
        cam_cpp->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.path_history.history.size());

    // cam_c->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.path_history.history vector
    for (size_t j = 0; j < cam_c->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.path_history.history.size; j++)
    {
        v2x_msgs__msg__PathPoint path_point_cpp;

        path_point_cpp.path_delta_time.path_delta_time =
            cam_cpp->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.path_history.history[j].path_delta_time.path_delta_time;
        path_point_cpp.path_delta_time_present =
            cam_cpp->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.path_history.history[j].path_delta_time_present;
        path_point_cpp.path_position.delta_altitude.delta_altitude =
            cam_cpp->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.path_history.history[j].path_position.delta_altitude.delta_altitude;
        path_point_cpp.path_position.delta_latitude.delta_latitude =
            cam_cpp->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.path_history.history[j].path_position.delta_latitude.delta_latitude;
        path_point_cpp.path_position.delta_longitude.delta_longitude =
            cam_cpp->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.path_history.history[j].path_position.delta_longitude.delta_longitude;

        cam_c->cam.cam_parameters.low_frequency_container.basic_vehicle_container_low_frequency.path_history.history.data[j] = path_point_cpp;
    }

    cam_c->cam.cam_parameters.special_vehicle_container_present =
        cam_cpp->cam.cam_parameters.special_vehicle_container_present;

    cam_c->cam.cam_parameters.special_vehicle_container.special_vehicle_container_container_select =
        cam_cpp->cam.cam_parameters.special_vehicle_container.special_vehicle_container_container_select;

    // public_transport_container
    cam_c->cam.cam_parameters.special_vehicle_container.public_transport_container.embarkation_status.embarkation_status =
        cam_cpp->cam.cam_parameters.special_vehicle_container.public_transport_container.embarkation_status.embarkation_status;

    cam_c->cam.cam_parameters.special_vehicle_container.public_transport_container.pt_activation_present =
        cam_cpp->cam.cam_parameters.special_vehicle_container.public_transport_container.pt_activation_present;

    cam_c->cam.cam_parameters.special_vehicle_container.public_transport_container.pt_activation.pt_activation_type.pt_activation_type =
        cam_cpp->cam.cam_parameters.special_vehicle_container.public_transport_container.pt_activation.pt_activation_type.pt_activation_type;

    rosidl_runtime_c__int64__Sequence__init(
        &cam_c->cam.cam_parameters.special_vehicle_container.public_transport_container.pt_activation.pt_activation_data.pt_activation_data,
        cam_cpp->cam.cam_parameters.special_vehicle_container.public_transport_container.pt_activation.pt_activation_data.pt_activation_data.size());

    // cam_c->cam.cam_parameters.special_vehicle_container.public_transport_container.pt_activation.pt_activation_data.pt_activation_data.data vector
    for (size_t j = 0; j < cam_c->cam.cam_parameters.special_vehicle_container.public_transport_container.pt_activation.pt_activation_data.pt_activation_data.size; j++)
    {
        cam_c->cam.cam_parameters.special_vehicle_container.public_transport_container.pt_activation.pt_activation_data.pt_activation_data.data[j] =
            cam_cpp->cam.cam_parameters.special_vehicle_container.public_transport_container.pt_activation.pt_activation_data.pt_activation_data[j];
    }

    // special_transport_container
    cam_c->cam.cam_parameters.special_vehicle_container.special_transport_container.special_transport_type.special_transport_type =
        cam_cpp->cam.cam_parameters.special_vehicle_container.special_transport_container.special_transport_type.special_transport_type;

    cam_c->cam.cam_parameters.special_vehicle_container.special_transport_container.light_bar_siren_in_use.light_bar_siren_in_use =
        cam_cpp->cam.cam_parameters.special_vehicle_container.special_transport_container.light_bar_siren_in_use.light_bar_siren_in_use;

    // dangerous_goods_container

    cam_c->cam.cam_parameters.special_vehicle_container.dangerous_goods_container.dangerous_goods_basic.dangerous_goods_basic =
        cam_cpp->cam.cam_parameters.special_vehicle_container.dangerous_goods_container.dangerous_goods_basic.dangerous_goods_basic;

    // road_works_container_basic
    cam_c->cam.cam_parameters.special_vehicle_container.road_works_container_basic.roadworks_sub_cause_code_present =
        cam_cpp->cam.cam_parameters.special_vehicle_container.road_works_container_basic.roadworks_sub_cause_code_present;

    cam_c->cam.cam_parameters.special_vehicle_container.road_works_container_basic.roadworks_sub_cause_code.roadworks_sub_cause_code =
        cam_cpp->cam.cam_parameters.special_vehicle_container.road_works_container_basic.roadworks_sub_cause_code.roadworks_sub_cause_code;

    cam_c->cam.cam_parameters.special_vehicle_container.road_works_container_basic.light_bar_siren_in_use.light_bar_siren_in_use =
        cam_cpp->cam.cam_parameters.special_vehicle_container.road_works_container_basic.light_bar_siren_in_use.light_bar_siren_in_use;

    cam_c->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes_present =
        cam_cpp->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes_present;

    cam_c->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.innerhard_shoulder_status_present =
        cam_cpp->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.innerhard_shoulder_status_present;

    cam_c->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.innerhard_shoulder_status.hard_shoulder_status =
        cam_cpp->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.innerhard_shoulder_status.hard_shoulder_status;

    cam_c->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.outerhard_shoulder_status_present =
        cam_cpp->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.outerhard_shoulder_status_present;

    cam_c->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.outerhard_shoulder_status.hard_shoulder_status =
        cam_cpp->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.outerhard_shoulder_status.hard_shoulder_status;

    cam_c->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.driving_lane_status_present =
        cam_cpp->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.driving_lane_status_present;

    cam_c->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.driving_lane_status.driving_lane_status =
        cam_cpp->cam.cam_parameters.special_vehicle_container.road_works_container_basic.closed_lanes.driving_lane_status.driving_lane_status;

    // rescue_container
    cam_c->cam.cam_parameters.special_vehicle_container.rescue_container.light_bar_siren_in_use.light_bar_siren_in_use =
        cam_cpp->cam.cam_parameters.special_vehicle_container.rescue_container.light_bar_siren_in_use.light_bar_siren_in_use;

    // emergency_container
    cam_c->cam.cam_parameters.special_vehicle_container.emergency_container.light_bar_siren_in_use.light_bar_siren_in_use =
        cam_cpp->cam.cam_parameters.special_vehicle_container.emergency_container.light_bar_siren_in_use.light_bar_siren_in_use;

    cam_c->cam.cam_parameters.special_vehicle_container.emergency_container.incident_indication_present =
        cam_cpp->cam.cam_parameters.special_vehicle_container.emergency_container.incident_indication_present;

    cam_c->cam.cam_parameters.special_vehicle_container.emergency_container.incident_indication.cause_code.cause_code_type =
        cam_cpp->cam.cam_parameters.special_vehicle_container.emergency_container.incident_indication.cause_code.cause_code_type;

    cam_c->cam.cam_parameters.special_vehicle_container.emergency_container.incident_indication.sub_cause_code.sub_cause_code_type =
        cam_cpp->cam.cam_parameters.special_vehicle_container.emergency_container.incident_indication.sub_cause_code.sub_cause_code_type;

    cam_c->cam.cam_parameters.special_vehicle_container.emergency_container.emergency_priority_present =
        cam_cpp->cam.cam_parameters.special_vehicle_container.emergency_container.emergency_priority_present;

    cam_c->cam.cam_parameters.special_vehicle_container.emergency_container.emergency_priority.emergency_priority =
        cam_cpp->cam.cam_parameters.special_vehicle_container.emergency_container.emergency_priority.emergency_priority;

    // safety_car_container

    cam_c->cam.cam_parameters.special_vehicle_container.safety_car_container.light_bar_siren_in_use.light_bar_siren_in_use =
        cam_cpp->cam.cam_parameters.special_vehicle_container.safety_car_container.light_bar_siren_in_use.light_bar_siren_in_use;

    cam_c->cam.cam_parameters.special_vehicle_container.safety_car_container.incident_indication_present =
        cam_cpp->cam.cam_parameters.special_vehicle_container.safety_car_container.incident_indication_present;

    cam_c->cam.cam_parameters.special_vehicle_container.safety_car_container.incident_indication.cause_code.cause_code_type =
        cam_cpp->cam.cam_parameters.special_vehicle_container.safety_car_container.incident_indication.cause_code.cause_code_type;

    cam_c->cam.cam_parameters.special_vehicle_container.safety_car_container.incident_indication.sub_cause_code.sub_cause_code_type =
        cam_cpp->cam.cam_parameters.special_vehicle_container.safety_car_container.incident_indication.sub_cause_code.sub_cause_code_type;

    cam_c->cam.cam_parameters.special_vehicle_container.safety_car_container.traffic_rule_present =
        cam_cpp->cam.cam_parameters.special_vehicle_container.safety_car_container.traffic_rule_present;

    cam_c->cam.cam_parameters.special_vehicle_container.safety_car_container.traffic_rule.traffic_rule =
        cam_cpp->cam.cam_parameters.special_vehicle_container.safety_car_container.traffic_rule.traffic_rule;

    cam_c->cam.cam_parameters.special_vehicle_container.safety_car_container.speed_limit_present =
        cam_cpp->cam.cam_parameters.special_vehicle_container.safety_car_container.speed_limit_present;

    cam_c->cam.cam_parameters.special_vehicle_container.safety_car_container.speed_limit.speed_limit =
        cam_cpp->cam.cam_parameters.special_vehicle_container.safety_car_container.speed_limit.speed_limit;
}

/// V2X messages C <-> C++ converter -- END
