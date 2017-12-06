#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthRegionStatus_t {
    bool enabled;
    bool isLQFallbackAllowed;
    std::string platformId;
    bool isUserInfoEnabled;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthRegionStatus_t& v) {
    j["enabled"] = v.enabled;
    j["isLQFallbackAllowed"] = v.isLQFallbackAllowed;
    j["platformId"] = v.platformId;
    j["isUserInfoEnabled"] = v.isUserInfoEnabled;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthRegionStatus_t& v) {
    v.enabled = j.at("enabled").get<bool>();
    v.isLQFallbackAllowed = j.at("isLQFallbackAllowed").get<bool>();
    v.platformId = j.at("platformId").get<std::string>();
    v.isUserInfoEnabled = j.at("isUserInfoEnabled").get<bool>();
  }
}
