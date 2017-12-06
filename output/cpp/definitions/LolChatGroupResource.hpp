#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatGroupResource_t {
    bool collapsed;
    uint32_t id;
    bool isMetaGroup;
    std::string name;
    int32_t priority;
  };

  inline void to_json(nlohmann::json& j, const LolChatGroupResource_t& v) {
    j["collapsed"] = v.collapsed;
    j["id"] = v.id;
    j["isMetaGroup"] = v.isMetaGroup;
    j["name"] = v.name;
    j["priority"] = v.priority;
  }

  inline void from_json(const nlohmann::json& j, LolChatGroupResource_t& v) {
    v.collapsed = j.at("collapsed").get<bool>();
    v.id = j.at("id").get<uint32_t>();
    v.isMetaGroup = j.at("isMetaGroup").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.priority = j.at("priority").get<int32_t>();
  }
}
