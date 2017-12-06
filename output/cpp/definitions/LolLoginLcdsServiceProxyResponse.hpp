#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginLcdsServiceProxyResponse_t {
    bool compressedPayload;
    std::string messageId;
    std::string methodName;
    std::string payload;
    std::string serviceName;
    std::string status;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLcdsServiceProxyResponse_t& v) {
    j["compressedPayload"] = v.compressedPayload;
    j["messageId"] = v.messageId;
    j["methodName"] = v.methodName;
    j["payload"] = v.payload;
    j["serviceName"] = v.serviceName;
    j["status"] = v.status;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLcdsServiceProxyResponse_t& v) {
    v.compressedPayload = j.at("compressedPayload").get<bool>();
    v.messageId = j.at("messageId").get<std::string>();
    v.methodName = j.at("methodName").get<std::string>();
    v.payload = j.at("payload").get<std::string>();
    v.serviceName = j.at("serviceName").get<std::string>();
    v.status = j.at("status").get<std::string>();
  }
}
