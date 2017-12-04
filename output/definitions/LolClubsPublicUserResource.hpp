#ifndef SWAGGER_TYPES_LolClubsPublicUserResource_HPP
#define SWAGGER_TYPES_LolClubsPublicUserResource_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolClubsPublicUserResource {
'    // 
    std::string availability;
    // 
    int32_t icon;
    // 
    uint64_t id;
    // 
    std::string lastSeenOnlineTimestamp;
    // 
    std::map<std::string, std::string> lol;
    // 
    std::string name;
  };

  void to_json(nlohmann::json& j, const LolClubsPublicUserResource& v) {
    j["availability"] = v.availability;
    j["icon"] = v.icon;
    j["id"] = v.id;
    j["lastSeenOnlineTimestamp"] = v.lastSeenOnlineTimestamp;
    j["lol"] = v.lol;
    j["name"] = v.name;
  }

  void from_json(const nlohmann::json& j, LolClubsPublicUserResource& v) {
    v.availability = j.at("availability").get<std::string>;
    v.icon = j.at("icon").get<int32_t>;
    v.id = j.at("id").get<uint64_t>;
    v.lastSeenOnlineTimestamp = j.at("lastSeenOnlineTimestamp").get<std::string>;
    v.lol = j.at("lol").get<std::map<std::string, std::string>>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolClubsPublicUserResource_HPP
