#ifndef SWAGGER_TYPES_LolClubsPublicUserResource_HPP
#define SWAGGER_TYPES_LolClubsPublicUserResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClubsPublicUserResource {
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
    int32_t icon;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicUserResource& v) {
    j["name"] = v.name;
    j["lol"] = v.lol;
    j["availability"] = v.availability;
    j["lastSeenOnlineTimestamp"] = v.lastSeenOnlineTimestamp;
    j["id"] = v.id;
    j["icon"] = v.icon;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicUserResource& v) {
    v.name = j.at("name").get<std::string>;
    v.lol = j.at("lol").get<std::map<std::string, std::string>>;
    v.availability = j.at("availability").get<std::string>;
    v.lastSeenOnlineTimestamp = j.at("lastSeenOnlineTimestamp").get<std::string>;
    v.id = j.at("id").get<uint64_t>;
    v.icon = j.at("icon").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolClubsPublicUserResource_HPP
