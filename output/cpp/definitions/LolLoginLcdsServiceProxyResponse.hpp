#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginLcdsServiceProxyResponse_t {
    std::string_t status;
    std::string_t methodName;
    std::string_t serviceName;
    std::string_t messageId;
    std::string_t payload;
    bool_t compressedPayload;
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
    v.status = j.at("status").get<std::string_t>();
    v.methodName = j.at("methodName").get<std::string_t>();
    v.serviceName = j.at("serviceName").get<std::string_t>();
    v.messageId = j.at("messageId").get<std::string_t>();
    v.payload = j.at("payload").get<std::string_t>();
    v.compressedPayload = j.at("compressedPayload").get<bool_t>();
  }
  inline std::string to_string(const LolLoginLcdsServiceProxyResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
