#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyCustomJoinParameters_t {
    std::optional<bool> asSpectator;
    std::optional<std::string> password;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomJoinParameters_t& v) {
    if(v.asSpectator)
      j["asSpectator"] = *v.asSpectator;
    if(v.password)
      j["password"] = *v.password;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomJoinParameters_t& v) {
    if(auto it = j.find("asSpectator"); it != j.end() !it->is_null())
      v.asSpectator = it->get<bool>();
    if(auto it = j.find("password"); it != j.end() !it->is_null())
      v.password = it->get<std::string>();
  }
}
