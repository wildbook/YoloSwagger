#ifndef SWAGGER_TYPES_PluginServiceProxyResponse_HPP
#define SWAGGER_TYPES_PluginServiceProxyResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PluginServiceProxyResponse {
    // 
    std::string error;
    // 
    std::string methodName;
    // 
    std::string payload;
    // 
    std::string serviceName;
    // 
    std::string status;
    // 
    std::string uuid;
  };

  inline void to_json(nlohmann::json& j, const PluginServiceProxyResponse& v) {
    j["error"] = v.error;
    j["methodName"] = v.methodName;
    j["payload"] = v.payload;
    j["serviceName"] = v.serviceName;
    j["status"] = v.status;
    j["uuid"] = v.uuid;
  }

  inline void from_json(const nlohmann::json& j, PluginServiceProxyResponse& v) {
    v.error = j.at("error").get<std::string>;
    v.methodName = j.at("methodName").get<std::string>;
    v.payload = j.at("payload").get<std::string>;
    v.serviceName = j.at("serviceName").get<std::string>;
    v.status = j.at("status").get<std::string>;
    v.uuid = j.at("uuid").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PluginServiceProxyResponse_HPP
