#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthDeviceId_t {
    std::string sessionId;
    std::string frameUrl;
    std::string installId;
    std::string merchantId;
    std::string collectorServerName;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthDeviceId_t& v) {
    j["sessionId"] = v.sessionId;
    j["frameUrl"] = v.frameUrl;
    j["installId"] = v.installId;
    j["merchantId"] = v.merchantId;
    j["collectorServerName"] = v.collectorServerName;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthDeviceId_t& v) {
    v.sessionId = j.at("sessionId").get<std::string>();
    v.frameUrl = j.at("frameUrl").get<std::string>();
    v.installId = j.at("installId").get<std::string>();
    v.merchantId = j.at("merchantId").get<std::string>();
    v.collectorServerName = j.at("collectorServerName").get<std::string>();
  }
  inline std::string to_string(const RsoAuthDeviceId_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
