#ifndef SWAGGER_TYPES_LolChatUserResource_HPP
#define SWAGGER_TYPES_LolChatUserResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatUserResource {
    // 
    std::string name;
    // 
    std::map<std::string, std::string> lol;
    // 
    std::string availability;
    // 
    std::string lastSeenOnlineTimestamp;
    // 
    uint64_t id;
    // 
    std::string statusMessage;
    // 
    int32_t icon;
  };

  inline void to_json(nlohmann::json& j, const LolChatUserResource& v) {
    j["name"] = v.name;
    j["lol"] = v.lol;
    j["availability"] = v.availability;
    j["lastSeenOnlineTimestamp"] = v.lastSeenOnlineTimestamp;
    j["id"] = v.id;
    j["statusMessage"] = v.statusMessage;
    j["icon"] = v.icon;
  }

  inline void from_json(const nlohmann::json& j, LolChatUserResource& v) {
    v.name = j.at("name").get<std::string>;
    v.lol = j.at("lol").get<std::map<std::string, std::string>>;
    v.availability = j.at("availability").get<std::string>;
    v.lastSeenOnlineTimestamp = j.at("lastSeenOnlineTimestamp").get<std::string>;
    v.id = j.at("id").get<uint64_t>;
    v.statusMessage = j.at("statusMessage").get<std::string>;
    v.icon = j.at("icon").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolChatUserResource_HPP
