#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatGroupResource_t {
    int32_t priority;
    bool collapsed;
    uint32_t id;
    std::string name;
    bool isMetaGroup;
  };

  inline void to_json(nlohmann::json& j, const LolChatGroupResource_t& v) {
    j["priority"] = v.priority;
    j["collapsed"] = v.collapsed;
    j["id"] = v.id;
    j["name"] = v.name;
    j["isMetaGroup"] = v.isMetaGroup;
  }

  inline void from_json(const nlohmann::json& j, LolChatGroupResource_t& v) {
    v.priority = j.at("priority").get<int32_t>();
    v.collapsed = j.at("collapsed").get<bool>();
    v.id = j.at("id").get<uint32_t>();
    v.name = j.at("name").get<std::string>();
    v.isMetaGroup = j.at("isMetaGroup").get<bool>();
  }
  inline std::string to_string(const LolChatGroupResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
