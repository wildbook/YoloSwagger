#pragma once
#include <json.hpp>
#include <optional>
#include "LolSuggestedPlayersSuggestedPlayersConfig.hpp"
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersDynamicClientConfig_t {
    LolSuggestedPlayersSuggestedPlayersConfig_t SuggestedPlayers;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersDynamicClientConfig_t& v) {
    j["SuggestedPlayers"] = v.SuggestedPlayers;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersDynamicClientConfig_t& v) {
    v.SuggestedPlayers = j.at("SuggestedPlayers").get<LolSuggestedPlayersSuggestedPlayersConfig_t>();
  }
}
