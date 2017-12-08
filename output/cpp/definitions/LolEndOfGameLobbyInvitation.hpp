#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameLobbyInvitation_t {
    std::string state;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameLobbyInvitation_t& v) {
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameLobbyInvitation_t& v) {
    v.state = j.at("state").get<std::string>();
  }
  inline std::string to_string(const LolEndOfGameLobbyInvitation_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
