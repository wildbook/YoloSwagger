#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatGroupResource_t {
    bool isMetaGroup;
    std::string name;
    uint32_t id;
    bool collapsed;
    int32_t priority;
  };

  inline void to_json(nlohmann::json& j, const LolChatGroupResource_t& v) {
    j["isMetaGroup"] = v.isMetaGroup;
    j["name"] = v.name;
    j["id"] = v.id;
    j["collapsed"] = v.collapsed;
    j["priority"] = v.priority;
  }

  inline void from_json(const nlohmann::json& j, LolChatGroupResource_t& v) {
    v.isMetaGroup = j.at("isMetaGroup").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<uint32_t>();
    v.collapsed = j.at("collapsed").get<bool>();
    v.priority = j.at("priority").get<int32_t>();
  }
  inline std::string to_string(const LolChatGroupResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
