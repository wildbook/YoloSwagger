#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PluginLcdsEvent_t {
    nlohmann::json body;
    std::string clientId;
    std::string subtopic;
    std::string typeName;
  };

  inline void to_json(nlohmann::json& j, const PluginLcdsEvent_t& v) {
    j["body"] = v.body;
    j["clientId"] = v.clientId;
    j["subtopic"] = v.subtopic;
    j["typeName"] = v.typeName;
  }

  inline void from_json(const nlohmann::json& j, PluginLcdsEvent_t& v) {
    v.body = j.at("body").get<nlohmann::json>();
    v.clientId = j.at("clientId").get<std::string>();
    v.subtopic = j.at("subtopic").get<std::string>();
    v.typeName = j.at("typeName").get<std::string>();
  }
}
