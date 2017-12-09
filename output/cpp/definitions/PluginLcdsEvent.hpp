#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PluginLcdsEvent_t {
    std::string typeName;
    std::string subtopic;
    nlohmann::json body;
    std::string clientId;
  };

  inline void to_json(nlohmann::json& j, const PluginLcdsEvent_t& v) {
    j["typeName"] = v.typeName;
    j["subtopic"] = v.subtopic;
    j["body"] = v.body;
    j["clientId"] = v.clientId;
  }

  inline void from_json(const nlohmann::json& j, PluginLcdsEvent_t& v) {
    v.typeName = j.at("typeName").get<std::string>();
    v.subtopic = j.at("subtopic").get<std::string>();
    v.body = j.at("body").get<nlohmann::json>();
    v.clientId = j.at("clientId").get<std::string>();
  }
  inline std::string to_string(const PluginLcdsEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
