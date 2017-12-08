#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatUserResource_t {
    uint64_t id;
    std::optional<std::string> statusMessage;
    std::map<std::string, std::string> lol;
    std::optional<std::string> lastSeenOnlineTimestamp;
    int32_t icon;
    std::string availability;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolChatUserResource_t& v) {
    j["id"] = v.id;
    if(v.statusMessage)
      j["statusMessage"] = *v.statusMessage;
    j["lol"] = v.lol;
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["icon"] = v.icon;
    j["availability"] = v.availability;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolChatUserResource_t& v) {
    v.id = j.at("id").get<uint64_t>();
    if(auto it = j.find("statusMessage"); it != j.end() && !it->is_null())
      v.statusMessage = it->get<std::string>();
    v.lol = j.at("lol").get<std::map<std::string, std::string>>();
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::string>();
    v.icon = j.at("icon").get<int32_t>();
    v.availability = j.at("availability").get<std::string>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolChatUserResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
