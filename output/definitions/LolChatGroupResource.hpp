#ifndef SWAGGER_TYPES_LolChatGroupResource_HPP
#define SWAGGER_TYPES_LolChatGroupResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatGroupResource {
    // 
    bool collapsed;
    // 
    uint32_t id;
    // 
    bool isMetaGroup;
    // 
    std::string name;
    // 
    int32_t priority;
  };

  void to_json(nlohmann::json& j, const LolChatGroupResource& v) {
    j["collapsed"] = v.collapsed;
    j["id"] = v.id;
    j["isMetaGroup"] = v.isMetaGroup;
    j["name"] = v.name;
    j["priority"] = v.priority;
  }

  void from_json(const nlohmann::json& j, LolChatGroupResource& v) {
    v.collapsed = j.at("collapsed").get<bool>;
    v.id = j.at("id").get<uint32_t>;
    v.isMetaGroup = j.at("isMetaGroup").get<bool>;
    v.name = j.at("name").get<std::string>;
    v.priority = j.at("priority").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolChatGroupResource_HPP
