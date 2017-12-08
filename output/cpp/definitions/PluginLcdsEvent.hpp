#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PluginLcdsEvent_t {
    std::string clientId;
    std::string subtopic;
    nlohmann::json body;
    std::string typeName;
  };

  inline void to_json(nlohmann::json& j, const PluginLcdsEvent_t& v) {
    j["clientId"] = v.clientId;
    j["subtopic"] = v.subtopic;
    j["body"] = v.body;
    j["typeName"] = v.typeName;
  }

  inline void from_json(const nlohmann::json& j, PluginLcdsEvent_t& v) {
    v.clientId = j.at("clientId").get<std::string>();
    v.subtopic = j.at("subtopic").get<std::string>();
    v.body = j.at("body").get<nlohmann::json>();
    v.typeName = j.at("typeName").get<std::string>();
  }
  inline std::string to_string(const PluginLcdsEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
