#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyGatekeeperRestrictionDto.hpp"
namespace leagueapi {
  struct LolLobbyQueueRestrictionDto_t {
    std::vector<LolLobbyGatekeeperRestrictionDto_t> gatekeeperRestrictions;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyQueueRestrictionDto_t& v) {
    j["gatekeeperRestrictions"] = v.gatekeeperRestrictions;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyQueueRestrictionDto_t& v) {
    v.gatekeeperRestrictions = j.at("gatekeeperRestrictions").get<std::vector<LolLobbyGatekeeperRestrictionDto_t>>();
  }
}
