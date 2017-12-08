#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginLcdsServiceProxyResponse_t {
    std::string status;
    std::string methodName;
    std::string serviceName;
    std::string messageId;
    std::string payload;
    bool compressedPayload;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLcdsServiceProxyResponse_t& v) {
    j["status"] = v.status;
    j["methodName"] = v.methodName;
    j["serviceName"] = v.serviceName;
    j["messageId"] = v.messageId;
    j["payload"] = v.payload;
    j["compressedPayload"] = v.compressedPayload;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLcdsServiceProxyResponse_t& v) {
    v.status = j.at("status").get<std::string>();
    v.methodName = j.at("methodName").get<std::string>();
    v.serviceName = j.at("serviceName").get<std::string>();
    v.messageId = j.at("messageId").get<std::string>();
    v.payload = j.at("payload").get<std::string>();
    v.compressedPayload = j.at("compressedPayload").get<bool>();
  }
  inline std::string to_string(const LolLoginLcdsServiceProxyResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
