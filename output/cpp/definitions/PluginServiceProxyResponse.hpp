#ifndef SWAGGER_TYPES_PluginServiceProxyResponse_HPP
#define SWAGGER_TYPES_PluginServiceProxyResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PluginServiceProxyResponse {
    // 
    std::string status;
    // 
    std::string methodName;
    // 
    std::string uuid;
    // 
    std::string serviceName;
    // 
    std::string error;
    // 
    std::string payload;
  };

  inline void to_json(nlohmann::json& j, const PluginServiceProxyResponse& v) {
    j["status"] = v.status;
    j["methodName"] = v.methodName;
    j["uuid"] = v.uuid;
    j["serviceName"] = v.serviceName;
    j["error"] = v.error;
    j["payload"] = v.payload;
  }

  inline void from_json(const nlohmann::json& j, PluginServiceProxyResponse& v) {
    v.status = j.at("status").get<std::string>;
    v.methodName = j.at("methodName").get<std::string>;
    v.uuid = j.at("uuid").get<std::string>;
    v.serviceName = j.at("serviceName").get<std::string>;
    v.error = j.at("error").get<std::string>;
    v.payload = j.at("payload").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PluginServiceProxyResponse_HPP
