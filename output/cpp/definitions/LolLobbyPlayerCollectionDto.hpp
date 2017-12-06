#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyPlayerDto.hpp"
namespace leagueapi {
  struct LolLobbyPlayerCollectionDto_t {
    std::vector<LolLobbyPlayerDto_t> players;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyPlayerCollectionDto_t& v) {
    j["players"] = v.players;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyPlayerCollectionDto_t& v) {
    v.players = j.at("players").get<std::vector<LolLobbyPlayerDto_t>>();
  }
}
