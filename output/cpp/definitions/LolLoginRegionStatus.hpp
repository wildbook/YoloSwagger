#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginRegionStatus_t {
    bool isLQFallbackAllowed;
    bool isUserInfoEnabled;
    bool enabled;
    std::string platformId;
  };

  inline void to_json(nlohmann::json& j, const LolLoginRegionStatus_t& v) {
    j["isLQFallbackAllowed"] = v.isLQFallbackAllowed;
    j["isUserInfoEnabled"] = v.isUserInfoEnabled;
    j["enabled"] = v.enabled;
    j["platformId"] = v.platformId;
  }

  inline void from_json(const nlohmann::json& j, LolLoginRegionStatus_t& v) {
    v.isLQFallbackAllowed = j.at("isLQFallbackAllowed").get<bool>();
    v.isUserInfoEnabled = j.at("isUserInfoEnabled").get<bool>();
    v.enabled = j.at("enabled").get<bool>();
    v.platformId = j.at("platformId").get<std::string>();
  }
  inline std::string to_string(const LolLoginRegionStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
