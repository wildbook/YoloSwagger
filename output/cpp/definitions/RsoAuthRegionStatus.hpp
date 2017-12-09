#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthRegionStatus_t {
    bool isUserInfoEnabled;
    std::string platformId;
    bool enabled;
    bool isLQFallbackAllowed;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthRegionStatus_t& v) {
    j["isUserInfoEnabled"] = v.isUserInfoEnabled;
    j["platformId"] = v.platformId;
    j["enabled"] = v.enabled;
    j["isLQFallbackAllowed"] = v.isLQFallbackAllowed;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthRegionStatus_t& v) {
    v.isUserInfoEnabled = j.at("isUserInfoEnabled").get<bool>();
    v.platformId = j.at("platformId").get<std::string>();
    v.enabled = j.at("enabled").get<bool>();
    v.isLQFallbackAllowed = j.at("isLQFallbackAllowed").get<bool>();
  }
  inline std::string to_string(const RsoAuthRegionStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
