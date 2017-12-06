#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatUserResource_t {
    std::string availability;
    int32_t icon;
    uint64_t id;
    std::optional<std::string> lastSeenOnlineTimestamp;
    std::map<std::string, std::string> lol;
    std::string name;
    std::optional<std::string> statusMessage;
  };

  inline void to_json(nlohmann::json& j, const LolChatUserResource_t& v) {
    j["availability"] = v.availability;
    j["icon"] = v.icon;
    j["id"] = v.id;
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["lol"] = v.lol;
    j["name"] = v.name;
    if(v.statusMessage)
      j["statusMessage"] = *v.statusMessage;
  }

  inline void from_json(const nlohmann::json& j, LolChatUserResource_t& v) {
    v.availability = j.at("availability").get<std::string>();
    v.icon = j.at("icon").get<int32_t>();
    v.id = j.at("id").get<uint64_t>();
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::string>();
    v.lol = j.at("lol").get<std::map<std::string, std::string>>();
    v.name = j.at("name").get<std::string>();
    if(auto it = j.find("statusMessage"); it != j.end() !it->is_null())
      v.statusMessage = it->get<std::string>();
  }
}
