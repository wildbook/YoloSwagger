#ifndef SWAGGER_TYPES_LolLoginLcdsServiceProxyResponse_HPP
#define SWAGGER_TYPES_LolLoginLcdsServiceProxyResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLoginLcdsServiceProxyResponse {
    // 
    std::string status;
    // 
    std::string methodName;
    // 
    std::string serviceName;
    // 
    std::string messageId;
    // 
    std::string payload;
    // 
    bool compressedPayload;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLcdsServiceProxyResponse& v) {
    j["status"] = v.status;
    j["methodName"] = v.methodName;
    j["serviceName"] = v.serviceName;
    j["messageId"] = v.messageId;
    j["payload"] = v.payload;
    j["compressedPayload"] = v.compressedPayload;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLcdsServiceProxyResponse& v) {
    v.status = j.at("status").get<std::string>;
    v.methodName = j.at("methodName").get<std::string>;
    v.serviceName = j.at("serviceName").get<std::string>;
    v.messageId = j.at("messageId").get<std::string>;
    v.payload = j.at("payload").get<std::string>;
    v.compressedPayload = j.at("compressedPayload").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLoginLcdsServiceProxyResponse_HPP
