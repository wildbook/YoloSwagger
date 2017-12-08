#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderGatekeeperRestriction.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderGatekeeperRestricted_t {
    std::vector<LolLobbyTeamBuilderGatekeeperRestriction_t> gatekeeperRestrictions;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderGatekeeperRestricted_t& v) {
    j["gatekeeperRestrictions"] = v.gatekeeperRestrictions;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderGatekeeperRestricted_t& v) {
    v.gatekeeperRestrictions = j.at("gatekeeperRestrictions").get<std::vector<LolLobbyTeamBuilderGatekeeperRestriction_t>>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderGatekeeperRestricted_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
