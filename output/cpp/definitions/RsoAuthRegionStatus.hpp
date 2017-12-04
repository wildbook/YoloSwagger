#ifndef SWAGGER_TYPES_RsoAuthRegionStatus_HPP
#define SWAGGER_TYPES_RsoAuthRegionStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RsoAuthRegionStatus {
    // 
    std::string platformId;
    // 
    bool isLQFallbackAllowed;
    // 
    bool enabled;
    // 
    bool isUserInfoEnabled;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthRegionStatus& v) {
    j["platformId"] = v.platformId;
    j["isLQFallbackAllowed"] = v.isLQFallbackAllowed;
    j["enabled"] = v.enabled;
    j["isUserInfoEnabled"] = v.isUserInfoEnabled;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthRegionStatus& v) {
    v.platformId = j.at("platformId").get<std::string>;
    v.isLQFallbackAllowed = j.at("isLQFallbackAllowed").get<bool>;
    v.enabled = j.at("enabled").get<bool>;
    v.isUserInfoEnabled = j.at("isUserInfoEnabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_RsoAuthRegionStatus_HPP
