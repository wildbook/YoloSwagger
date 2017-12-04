#ifndef SWAGGER_TYPES_RsoAuthDeviceId_HPP
#define SWAGGER_TYPES_RsoAuthDeviceId_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RsoAuthDeviceId {
    // 
    std::string collectorServerName;
    // 
    std::string frameUrl;
    // 
    std::string installId;
    // 
    std::string merchantId;
    // 
    std::string sessionId;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthDeviceId& v) {
    j["collectorServerName"] = v.collectorServerName;
    j["frameUrl"] = v.frameUrl;
    j["installId"] = v.installId;
    j["merchantId"] = v.merchantId;
    j["sessionId"] = v.sessionId;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthDeviceId& v) {
    v.collectorServerName = j.at("collectorServerName").get<std::string>;
    v.frameUrl = j.at("frameUrl").get<std::string>;
    v.installId = j.at("installId").get<std::string>;
    v.merchantId = j.at("merchantId").get<std::string>;
    v.sessionId = j.at("sessionId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RsoAuthDeviceId_HPP
