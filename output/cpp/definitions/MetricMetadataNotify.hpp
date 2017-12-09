#pragma once
#include <json.hpp>
#include <optional>
#include "MetricMetadataPagerDutyNotification.hpp"
#include "MetricMetadataHipchatNotification.hpp"
namespace leagueapi {
  struct MetricMetadataNotify_t {
    std::vector<std::string> email;
    std::vector<MetricMetadataHipchatNotification_t> hipchat;
    std::vector<MetricMetadataPagerDutyNotification_t> pagerduty;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadataNotify_t& v) {
    j["email"] = v.email;
    j["hipchat"] = v.hipchat;
    j["pagerduty"] = v.pagerduty;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadataNotify_t& v) {
    v.email = j.at("email").get<std::vector<std::string>>();
    v.hipchat = j.at("hipchat").get<std::vector<MetricMetadataHipchatNotification_t>>();
    v.pagerduty = j.at("pagerduty").get<std::vector<MetricMetadataPagerDutyNotification_t>>();
  }
  inline std::string to_string(const MetricMetadataNotify_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
