#ifndef SWAGGER_TYPES_RsoAuthDeviceId_HPP
#define SWAGGER_TYPES_RsoAuthDeviceId_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RsoAuthDeviceId {
    // 
    std::string sessionId;
    // 
    std::string frameUrl;
    // 
    std::string installId;
    // 
    std::string merchantId;
    // 
    std::string collectorServerName;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthDeviceId& v) {
    j["sessionId"] = v.sessionId;
    j["frameUrl"] = v.frameUrl;
    j["installId"] = v.installId;
    j["merchantId"] = v.merchantId;
    j["collectorServerName"] = v.collectorServerName;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthDeviceId& v) {
    v.sessionId = j.at("sessionId").get<std::string>;
    v.frameUrl = j.at("frameUrl").get<std::string>;
    v.installId = j.at("installId").get<std::string>;
    v.merchantId = j.at("merchantId").get<std::string>;
    v.collectorServerName = j.at("collectorServerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RsoAuthDeviceId_HPP
