#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PluginServiceProxyResponse_t {
    std::string error;
    std::string methodName;
    std::string payload;
    std::string serviceName;
    std::string status;
    std::string uuid;
  };

  inline void to_json(nlohmann::json& j, const PluginServiceProxyResponse_t& v) {
    j["error"] = v.error;
    j["methodName"] = v.methodName;
    j["payload"] = v.payload;
    j["serviceName"] = v.serviceName;
    j["status"] = v.status;
    j["uuid"] = v.uuid;
  }

  inline void from_json(const nlohmann::json& j, PluginServiceProxyResponse_t& v) {
    v.error = j.at("error").get<std::string>();
    v.methodName = j.at("methodName").get<std::string>();
    v.payload = j.at("payload").get<std::string>();
    v.serviceName = j.at("serviceName").get<std::string>();
    v.status = j.at("status").get<std::string>();
    v.uuid = j.at("uuid").get<std::string>();
  }
}
