#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginLcdsServiceProxyResponse_t {
    bool compressedPayload;
    std::string methodName;
    std::string serviceName;
    std::string payload;
    std::string messageId;
    std::string status;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLcdsServiceProxyResponse_t& v) {
    j["compressedPayload"] = v.compressedPayload;
    j["methodName"] = v.methodName;
    j["serviceName"] = v.serviceName;
    j["payload"] = v.payload;
    j["messageId"] = v.messageId;
    j["status"] = v.status;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLcdsServiceProxyResponse_t& v) {
    v.compressedPayload = j.at("compressedPayload").get<bool>();
    v.methodName = j.at("methodName").get<std::string>();
    v.serviceName = j.at("serviceName").get<std::string>();
    v.payload = j.at("payload").get<std::string>();
    v.messageId = j.at("messageId").get<std::string>();
    v.status = j.at("status").get<std::string>();
  }
  inline std::string to_string(const LolLoginLcdsServiceProxyResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
