#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthDeviceId_t {
    std::string collectorServerName;
    std::string frameUrl;
    std::string merchantId;
    std::string sessionId;
    std::string installId;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthDeviceId_t& v) {
    j["collectorServerName"] = v.collectorServerName;
    j["frameUrl"] = v.frameUrl;
    j["merchantId"] = v.merchantId;
    j["sessionId"] = v.sessionId;
    j["installId"] = v.installId;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthDeviceId_t& v) {
    v.collectorServerName = j.at("collectorServerName").get<std::string>();
    v.frameUrl = j.at("frameUrl").get<std::string>();
    v.merchantId = j.at("merchantId").get<std::string>();
    v.sessionId = j.at("sessionId").get<std::string>();
    v.installId = j.at("installId").get<std::string>();
  }
  inline std::string to_string(const RsoAuthDeviceId_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
