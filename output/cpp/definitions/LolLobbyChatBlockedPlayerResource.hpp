#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyChatBlockedPlayerResource_t {
    uint64_t_t id;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyChatBlockedPlayerResource_t& v) {
    j["id"] = v.id;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyChatBlockedPlayerResource_t& v) {
    v.id = j.at("id").get<uint64_t_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const LolLobbyChatBlockedPlayerResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
