#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PluginServiceProxyResponse_t {
    std::string methodName;
    std::string error;
    std::string serviceName;
    std::string payload;
    std::string uuid;
    std::string status;
  };

  inline void to_json(nlohmann::json& j, const PluginServiceProxyResponse_t& v) {
    j["methodName"] = v.methodName;
    j["error"] = v.error;
    j["serviceName"] = v.serviceName;
    j["payload"] = v.payload;
    j["uuid"] = v.uuid;
    j["status"] = v.status;
  }

  inline void from_json(const nlohmann::json& j, PluginServiceProxyResponse_t& v) {
    v.methodName = j.at("methodName").get<std::string>();
    v.error = j.at("error").get<std::string>();
    v.serviceName = j.at("serviceName").get<std::string>();
    v.payload = j.at("payload").get<std::string>();
    v.uuid = j.at("uuid").get<std::string>();
    v.status = j.at("status").get<std::string>();
  }
  inline std::string to_string(const PluginServiceProxyResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
