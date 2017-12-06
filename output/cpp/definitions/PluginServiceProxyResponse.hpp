#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PluginServiceProxyResponse_t {
    std::string uuid;
    std::string error;
    std::string serviceName;
    std::string methodName;
    std::string payload;
    std::string status;
  };

  inline void to_json(nlohmann::json& j, const PluginServiceProxyResponse_t& v) {
    j["uuid"] = v.uuid;
    j["error"] = v.error;
    j["serviceName"] = v.serviceName;
    j["methodName"] = v.methodName;
    j["payload"] = v.payload;
    j["status"] = v.status;
  }

  inline void from_json(const nlohmann::json& j, PluginServiceProxyResponse_t& v) {
    v.uuid = j.at("uuid").get<std::string>();
    v.error = j.at("error").get<std::string>();
    v.serviceName = j.at("serviceName").get<std::string>();
    v.methodName = j.at("methodName").get<std::string>();
    v.payload = j.at("payload").get<std::string>();
    v.status = j.at("status").get<std::string>();
  }
}
