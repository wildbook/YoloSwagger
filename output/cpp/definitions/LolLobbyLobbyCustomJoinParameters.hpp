#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyCustomJoinParameters_t {
    std::optional<std::string> password;
    std::optional<bool> asSpectator;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyCustomJoinParameters_t& v) {
    if(v.password)
      j["password"] = *v.password;
    if(v.asSpectator)
      j["asSpectator"] = *v.asSpectator;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyCustomJoinParameters_t& v) {
    if(auto it = j.find("password"); it != j.end() && !it->is_null())
      v.password = it->get<std::string>();
    if(auto it = j.find("asSpectator"); it != j.end() && !it->is_null())
      v.asSpectator = it->get<bool>();
  }
  inline std::string to_string(const LolLobbyLobbyCustomJoinParameters_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
