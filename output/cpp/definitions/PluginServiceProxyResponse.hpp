#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PluginServiceProxyResponse_t {
    std::string payload;
    std::string status;
    std::string methodName;
    std::string serviceName;
    std::string error;
    std::string uuid;
  };

  inline void to_json(nlohmann::json& j, const PluginServiceProxyResponse_t& v) {
    j["payload"] = v.payload;
    j["status"] = v.status;
    j["methodName"] = v.methodName;
    j["serviceName"] = v.serviceName;
    j["error"] = v.error;
    j["uuid"] = v.uuid;
  }

  inline void from_json(const nlohmann::json& j, PluginServiceProxyResponse_t& v) {
    v.payload = j.at("payload").get<std::string>();
    v.status = j.at("status").get<std::string>();
    v.methodName = j.at("methodName").get<std::string>();
    v.serviceName = j.at("serviceName").get<std::string>();
    v.error = j.at("error").get<std::string>();
    v.uuid = j.at("uuid").get<std::string>();
  }
  inline std::string to_string(const PluginServiceProxyResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
