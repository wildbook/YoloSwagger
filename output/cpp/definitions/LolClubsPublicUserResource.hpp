#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClubsPublicUserResource_t {
    std::string name;
    std::map<std::string, std::string> lol;
    std::string availability;
    std::optional<std::string> lastSeenOnlineTimestamp;
    uint64_t id;
    int32_t icon;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicUserResource_t& v) {
    j["name"] = v.name;
    j["lol"] = v.lol;
    j["availability"] = v.availability;
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["id"] = v.id;
    j["icon"] = v.icon;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicUserResource_t& v) {
    v.name = j.at("name").get<std::string>();
    v.lol = j.at("lol").get<std::map<std::string, std::string>>();
    v.availability = j.at("availability").get<std::string>();
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.icon = j.at("icon").get<int32_t>();
  }
  inline std::string to_string(const LolClubsPublicUserResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
