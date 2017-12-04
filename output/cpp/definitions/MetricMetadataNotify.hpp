#ifndef SWAGGER_TYPES_MetricMetadataNotify_HPP
#define SWAGGER_TYPES_MetricMetadataNotify_HPP
#include <json.hpp>
#include "MetricMetadataHipchatNotification.hpp"
#include "MetricMetadataPagerDutyNotification.hpp"
namespace leagueapi {
  // 
  struct MetricMetadataNotify {
    // 
    std::vector<MetricMetadataHipchatNotification> hipchat;
    // 
    std::vector<MetricMetadataPagerDutyNotification> pagerduty;
    // 
    std::vector<std::string> email;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadataNotify& v) {
    j["hipchat"] = v.hipchat;
    j["pagerduty"] = v.pagerduty;
    j["email"] = v.email;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadataNotify& v) {
    v.hipchat = j.at("hipchat").get<std::vector<MetricMetadataHipchatNotification>>;
    v.pagerduty = j.at("pagerduty").get<std::vector<MetricMetadataPagerDutyNotification>>;
    v.email = j.at("email").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_MetricMetadataNotify_HPP
