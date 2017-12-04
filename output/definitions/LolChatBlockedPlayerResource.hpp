#ifndef SWAGGER_TYPES_LolChatBlockedPlayerResource_HPP
#define SWAGGER_TYPES_LolChatBlockedPlayerResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatBlockedPlayerResource {
    // 
    uint64_t id;
    // 
    std::string name;
  };

  void to_json(nlohmann::json& j, const LolChatBlockedPlayerResource& v) {
    j["id"] = v.id;
    j["name"] = v.name;
  }

  void from_json(const nlohmann::json& j, LolChatBlockedPlayerResource& v) {
    v.id = j.at("id").get<uint64_t>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChatBlockedPlayerResource_HPP
