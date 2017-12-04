#ifndef SWAGGER_TYPES_LolLoginLcdsServiceProxyResponse_HPP
#define SWAGGER_TYPES_LolLoginLcdsServiceProxyResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLoginLcdsServiceProxyResponse {
    // 
    bool compressedPayload;
    // 
    std::string messageId;
    // 
    std::string methodName;
    // 
    std::string payload;
    // 
    std::string serviceName;
    // 
    std::string status;
  };

  void to_json(nlohmann::json& j, const LolLoginLcdsServiceProxyResponse& v) {
    j["compressedPayload"] = v.compressedPayload;
    j["messageId"] = v.messageId;
    j["methodName"] = v.methodName;
    j["payload"] = v.payload;
    j["serviceName"] = v.serviceName;
    j["status"] = v.status;
  }

  void from_json(const nlohmann::json& j, LolLoginLcdsServiceProxyResponse& v) {
    v.compressedPayload = j.at("compressedPayload").get<bool>;
    v.messageId = j.at("messageId").get<std::string>;
    v.methodName = j.at("methodName").get<std::string>;
    v.payload = j.at("payload").get<std::string>;
    v.serviceName = j.at("serviceName").get<std::string>;
    v.status = j.at("status").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLoginLcdsServiceProxyResponse_HPP
