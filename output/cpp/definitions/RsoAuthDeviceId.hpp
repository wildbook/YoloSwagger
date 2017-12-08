#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthDeviceId_t {
    std::string_t sessionId;
    std::string_t frameUrl;
    std::string_t installId;
    std::string_t merchantId;
    std::string_t collectorServerName;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthDeviceId_t& v) {
    j["sessionId"] = v.sessionId;
    j["frameUrl"] = v.frameUrl;
    j["installId"] = v.installId;
    j["merchantId"] = v.merchantId;
    j["collectorServerName"] = v.collectorServerName;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthDeviceId_t& v) {
    v.sessionId = j.at("sessionId").get<std::string_t>();
    v.frameUrl = j.at("frameUrl").get<std::string_t>();
    v.installId = j.at("installId").get<std::string_t>();
    v.merchantId = j.at("merchantId").get<std::string_t>();
    v.collectorServerName = j.at("collectorServerName").get<std::string_t>();
  }
  inline std::string to_string(const RsoAuthDeviceId_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
