#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginLcdsServiceProxyResponse_t {
    std::string methodName;
    std::string serviceName;
    std::string messageId;
    bool compressedPayload;
    std::string status;
    std::string payload;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLcdsServiceProxyResponse_t& v) {
    j["methodName"] = v.methodName;
    j["serviceName"] = v.serviceName;
    j["messageId"] = v.messageId;
    j["compressedPayload"] = v.compressedPayload;
    j["status"] = v.status;
    j["payload"] = v.payload;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLcdsServiceProxyResponse_t& v) {
    v.methodName = j.at("methodName").get<std::string>();
    v.serviceName = j.at("serviceName").get<std::string>();
    v.messageId = j.at("messageId").get<std::string>();
    v.compressedPayload = j.at("compressedPayload").get<bool>();
    v.status = j.at("status").get<std::string>();
    v.payload = j.at("payload").get<std::string>();
  }
}
