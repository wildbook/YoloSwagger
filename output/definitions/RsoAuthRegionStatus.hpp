#ifndef SWAGGER_TYPES_RsoAuthRegionStatus_HPP
#define SWAGGER_TYPES_RsoAuthRegionStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RsoAuthRegionStatus {
    // 
    bool enabled;
    // 
    bool isLQFallbackAllowed;
    // 
    bool isUserInfoEnabled;
    // 
    std::string platformId;
  };

  void to_json(nlohmann::json& j, const RsoAuthRegionStatus& v) {
    j["enabled"] = v.enabled;
    j["isLQFallbackAllowed"] = v.isLQFallbackAllowed;
    j["isUserInfoEnabled"] = v.isUserInfoEnabled;
    j["platformId"] = v.platformId;
  }

  void from_json(const nlohmann::json& j, RsoAuthRegionStatus& v) {
    v.enabled = j.at("enabled").get<bool>;
    v.isLQFallbackAllowed = j.at("isLQFallbackAllowed").get<bool>;
    v.isUserInfoEnabled = j.at("isUserInfoEnabled").get<bool>;
    v.platformId = j.at("platformId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RsoAuthRegionStatus_HPP
