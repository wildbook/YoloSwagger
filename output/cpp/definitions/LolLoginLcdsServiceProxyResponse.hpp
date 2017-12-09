#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginLcdsServiceProxyResponse_t {
    std::string serviceName;
    bool compressedPayload;
    std::string messageId;
    std::string status;
    std::string payload;
    std::string methodName;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLcdsServiceProxyResponse_t& v) {
    j["serviceName"] = v.serviceName;
    j["compressedPayload"] = v.compressedPayload;
    j["messageId"] = v.messageId;
    j["status"] = v.status;
    j["payload"] = v.payload;
    j["methodName"] = v.methodName;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLcdsServiceProxyResponse_t& v) {
    v.serviceName = j.at("serviceName").get<std::string>();
    v.compressedPayload = j.at("compressedPayload").get<bool>();
    v.messageId = j.at("messageId").get<std::string>();
    v.status = j.at("status").get<std::string>();
    v.payload = j.at("payload").get<std::string>();
    v.methodName = j.at("methodName").get<std::string>();
  }
  inline std::string to_string(const LolLoginLcdsServiceProxyResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
