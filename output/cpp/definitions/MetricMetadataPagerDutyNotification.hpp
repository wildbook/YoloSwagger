#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MetricMetadataPagerDutyNotification_t {
    std::string_t apikey;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadataPagerDutyNotification_t& v) {
    j["apikey"] = v.apikey;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadataPagerDutyNotification_t& v) {
    v.apikey = j.at("apikey").get<std::string_t>();
  }
  inline std::string to_string(const MetricMetadataPagerDutyNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
