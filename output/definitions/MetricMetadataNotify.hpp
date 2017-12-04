#ifndef SWAGGER_TYPES_MetricMetadataNotify_HPP
#define SWAGGER_TYPES_MetricMetadataNotify_HPP
#include <json.hpp>
#include "MetricMetadataPagerDutyNotification.hpp"
#include "MetricMetadataHipchatNotification.hpp"
namespace leagueapi {
  // 
  struct MetricMetadataNotify {
    // 
    std::vector<std::string> email;
    // 
    std::vector<MetricMetadataHipchatNotification> hipchat;
    // 
    std::vector<MetricMetadataPagerDutyNotification> pagerduty;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadataNotify& v) {
    j["email"] = v.email;
    j["hipchat"] = v.hipchat;
    j["pagerduty"] = v.pagerduty;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadataNotify& v) {
    v.email = j.at("email").get<std::vector<std::string>>;
    v.hipchat = j.at("hipchat").get<std::vector<MetricMetadataHipchatNotification>>;
    v.pagerduty = j.at("pagerduty").get<std::vector<MetricMetadataPagerDutyNotification>>;
  }

}
#endif // SWAGGER_TYPES_MetricMetadataNotify_HPP
