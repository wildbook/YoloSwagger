#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthRegionStatus_t {
    std::string_t platformId;
    bool_t isLQFallbackAllowed;
    bool_t enabled;
    bool_t isUserInfoEnabled;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthRegionStatus_t& v) {
    j["platformId"] = v.platformId;
    j["isLQFallbackAllowed"] = v.isLQFallbackAllowed;
    j["enabled"] = v.enabled;
    j["isUserInfoEnabled"] = v.isUserInfoEnabled;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthRegionStatus_t& v) {
    v.platformId = j.at("platformId").get<std::string_t>();
    v.isLQFallbackAllowed = j.at("isLQFallbackAllowed").get<bool_t>();
    v.enabled = j.at("enabled").get<bool_t>();
    v.isUserInfoEnabled = j.at("isUserInfoEnabled").get<bool_t>();
  }
  inline std::string to_string(const RsoAuthRegionStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
