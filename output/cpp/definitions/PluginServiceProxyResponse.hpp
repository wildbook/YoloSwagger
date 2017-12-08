#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PluginServiceProxyResponse_t {
    std::string_t status;
    std::string_t methodName;
    std::string_t uuid;
    std::string_t serviceName;
    std::string_t error;
    std::string_t payload;
  };

  inline void to_json(nlohmann::json& j, const PluginServiceProxyResponse_t& v) {
    j["status"] = v.status;
    j["methodName"] = v.methodName;
    j["uuid"] = v.uuid;
    j["serviceName"] = v.serviceName;
    j["error"] = v.error;
    j["payload"] = v.payload;
  }

  inline void from_json(const nlohmann::json& j, PluginServiceProxyResponse_t& v) {
    v.status = j.at("status").get<std::string_t>();
    v.methodName = j.at("methodName").get<std::string_t>();
    v.uuid = j.at("uuid").get<std::string_t>();
    v.serviceName = j.at("serviceName").get<std::string_t>();
    v.error = j.at("error").get<std::string_t>();
    v.payload = j.at("payload").get<std::string_t>();
  }
  inline std::string to_string(const PluginServiceProxyResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
