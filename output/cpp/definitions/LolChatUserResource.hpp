#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatUserResource_t {
    std::string_t name;
    std::map<std::string, std::string> lol;
    std::string_t availability;
    std::optional<std::string_t> lastSeenOnlineTimestamp;
    uint64_t_t id;
    std::optional<std::string_t> statusMessage;
    int32_t_t icon;
  };

  inline void to_json(nlohmann::json& j, const LolChatUserResource_t& v) {
    j["name"] = v.name;
    j["lol"] = v.lol;
    j["availability"] = v.availability;
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["id"] = v.id;
    if(v.statusMessage)
      j["statusMessage"] = *v.statusMessage;
    j["icon"] = v.icon;
  }

  inline void from_json(const nlohmann::json& j, LolChatUserResource_t& v) {
    v.name = j.at("name").get<std::string_t>();
    v.lol = j.at("lol").get<std::map<std::string, std::string>>();
    v.availability = j.at("availability").get<std::string_t>();
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::string_t>();
    v.id = j.at("id").get<uint64_t_t>();
    if(auto it = j.find("statusMessage"); it != j.end() && !it->is_null())
      v.statusMessage = it->get<std::string_t>();
    v.icon = j.at("icon").get<int32_t_t>();
  }
  inline std::string to_string(const LolChatUserResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
