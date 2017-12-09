#pragma once
#include <json.hpp>
#include <optional>
#include "FellowPlayerInfo.hpp"
namespace leagueapi {
  struct PlayerGameStats_t {
    uint64_t userId;
    uint64_t createDate;
    uint64_t gameId;
    std::vector<FellowPlayerInfo_t> fellowPlayers;
  };

  inline void to_json(nlohmann::json& j, const PlayerGameStats_t& v) {
    j["userId"] = v.userId;
    j["createDate"] = v.createDate;
    j["gameId"] = v.gameId;
    j["fellowPlayers"] = v.fellowPlayers;
  }

  inline void from_json(const nlohmann::json& j, PlayerGameStats_t& v) {
    v.userId = j.at("userId").get<uint64_t>();
    v.createDate = j.at("createDate").get<uint64_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.fellowPlayers = j.at("fellowPlayers").get<std::vector<FellowPlayerInfo_t>>();
  }
  inline std::string to_string(const PlayerGameStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
