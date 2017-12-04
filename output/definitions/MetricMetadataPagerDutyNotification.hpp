#ifndef SWAGGER_TYPES_MetricMetadataPagerDutyNotification_HPP
#define SWAGGER_TYPES_MetricMetadataPagerDutyNotification_HPP
#include <json.hpp>
namespace test {
  // 
  struct MetricMetadataPagerDutyNotification {
'    // 
    std::string apikey;
  };

  void to_json(nlohmann::json& j, const MetricMetadataPagerDutyNotification& v) {
    j["apikey"] = v.apikey;
  }

  void from_json(const nlohmann::json& j, MetricMetadataPagerDutyNotification& v) {
    v.apikey = j.at("apikey").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_MetricMetadataPagerDutyNotification_HPP
