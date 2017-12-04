#ifndef SWAGGER_TYPES_LolChatGroupResource_HPP
#define SWAGGER_TYPES_LolChatGroupResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatGroupResource {
    // 
    int32_t priority;
    // 
    bool collapsed;
    // 
    uint32_t id;
    // 
    std::string name;
    // 
    bool isMetaGroup;
  };

  inline void to_json(nlohmann::json& j, const LolChatGroupResource& v) {
    j["priority"] = v.priority;
    j["collapsed"] = v.collapsed;
    j["id"] = v.id;
    j["name"] = v.name;
    j["isMetaGroup"] = v.isMetaGroup;
  }

  inline void from_json(const nlohmann::json& j, LolChatGroupResource& v) {
    v.priority = j.at("priority").get<int32_t>;
    v.collapsed = j.at("collapsed").get<bool>;
    v.id = j.at("id").get<uint32_t>;
    v.name = j.at("name").get<std::string>;
    v.isMetaGroup = j.at("isMetaGroup").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolChatGroupResource_HPP
