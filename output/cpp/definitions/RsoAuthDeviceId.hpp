#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthDeviceId_t {
    std::string frameUrl;
    std::string installId;
    std::string collectorServerName;
    std::string sessionId;
    std::string merchantId;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthDeviceId_t& v) {
    j["frameUrl"] = v.frameUrl;
    j["installId"] = v.installId;
    j["collectorServerName"] = v.collectorServerName;
    j["sessionId"] = v.sessionId;
    j["merchantId"] = v.merchantId;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthDeviceId_t& v) {
    v.frameUrl = j.at("frameUrl").get<std::string>();
    v.installId = j.at("installId").get<std::string>();
    v.collectorServerName = j.at("collectorServerName").get<std::string>();
    v.sessionId = j.at("sessionId").get<std::string>();
    v.merchantId = j.at("merchantId").get<std::string>();
  }
  inline std::string to_string(const RsoAuthDeviceId_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
