#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatGroupResource_t {
    std::string name;
    int32_t priority;
    uint32_t id;
    bool isMetaGroup;
    bool collapsed;
  };

  inline void to_json(nlohmann::json& j, const LolChatGroupResource_t& v) {
    j["name"] = v.name;
    j["priority"] = v.priority;
    j["id"] = v.id;
    j["isMetaGroup"] = v.isMetaGroup;
    j["collapsed"] = v.collapsed;
  }

  inline void from_json(const nlohmann::json& j, LolChatGroupResource_t& v) {
    v.name = j.at("name").get<std::string>();
    v.priority = j.at("priority").get<int32_t>();
    v.id = j.at("id").get<uint32_t>();
    v.isMetaGroup = j.at("isMetaGroup").get<bool>();
    v.collapsed = j.at("collapsed").get<bool>();
  }
  inline std::string to_string(const LolChatGroupResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
