#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PluginLcdsEvent_t {
    nlohmann::json body;
    std::string subtopic;
    std::string typeName;
    std::string clientId;
  };

  inline void to_json(nlohmann::json& j, const PluginLcdsEvent_t& v) {
    j["body"] = v.body;
    j["subtopic"] = v.subtopic;
    j["typeName"] = v.typeName;
    j["clientId"] = v.clientId;
  }

  inline void from_json(const nlohmann::json& j, PluginLcdsEvent_t& v) {
    v.body = j.at("body").get<nlohmann::json>();
    v.subtopic = j.at("subtopic").get<std::string>();
    v.typeName = j.at("typeName").get<std::string>();
    v.clientId = j.at("clientId").get<std::string>();
  }
  inline std::string to_string(const PluginLcdsEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
