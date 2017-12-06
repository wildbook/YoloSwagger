#pragma once
#include <json.hpp>
#include <optional>
#include "FellowPlayerInfo.hpp"
namespace leagueapi {
  struct PlayerGameStats_t {
    std::vector<FellowPlayerInfo_t> fellowPlayers;
    uint64_t gameId;
    uint64_t userId;
    uint64_t createDate;
  };

  inline void to_json(nlohmann::json& j, const PlayerGameStats_t& v) {
    j["fellowPlayers"] = v.fellowPlayers;
    j["gameId"] = v.gameId;
    j["userId"] = v.userId;
    j["createDate"] = v.createDate;
  }

  inline void from_json(const nlohmann::json& j, PlayerGameStats_t& v) {
    v.fellowPlayers = j.at("fellowPlayers").get<std::vector<FellowPlayerInfo_t>>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.userId = j.at("userId").get<uint64_t>();
    v.createDate = j.at("createDate").get<uint64_t>();
  }
}
