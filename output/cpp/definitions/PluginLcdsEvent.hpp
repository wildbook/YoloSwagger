#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PluginLcdsEvent_t {
    nlohmann::json_t body;
    std::string_t typeName;
    std::string_t clientId;
    std::string_t subtopic;
  };

  inline void to_json(nlohmann::json& j, const PluginLcdsEvent_t& v) {
    j["body"] = v.body;
    j["typeName"] = v.typeName;
    j["clientId"] = v.clientId;
    j["subtopic"] = v.subtopic;
  }

  inline void from_json(const nlohmann::json& j, PluginLcdsEvent_t& v) {
    v.body = j.at("body").get<nlohmann::json_t>();
    v.typeName = j.at("typeName").get<std::string_t>();
    v.clientId = j.at("clientId").get<std::string_t>();
    v.subtopic = j.at("subtopic").get<std::string_t>();
  }
  inline std::string to_string(const PluginLcdsEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
