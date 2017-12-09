#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthRegionStatus_t {
    bool enabled;
    bool isUserInfoEnabled;
    bool isLQFallbackAllowed;
    std::string platformId;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthRegionStatus_t& v) {
    j["enabled"] = v.enabled;
    j["isUserInfoEnabled"] = v.isUserInfoEnabled;
    j["isLQFallbackAllowed"] = v.isLQFallbackAllowed;
    j["platformId"] = v.platformId;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthRegionStatus_t& v) {
    v.enabled = j.at("enabled").get<bool>();
    v.isUserInfoEnabled = j.at("isUserInfoEnabled").get<bool>();
    v.isLQFallbackAllowed = j.at("isLQFallbackAllowed").get<bool>();
    v.platformId = j.at("platformId").get<std::string>();
  }
  inline std::string to_string(const RsoAuthRegionStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
