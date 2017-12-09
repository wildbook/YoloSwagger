#pragma once
#include <json.hpp>
#include <optional>
#include "FellowPlayerInfo.hpp"
namespace leagueapi {
  struct PlayerGameStats_t {
    uint64_t gameId;
    uint64_t createDate;
    std::vector<FellowPlayerInfo_t> fellowPlayers;
    uint64_t userId;
  };

  inline void to_json(nlohmann::json& j, const PlayerGameStats_t& v) {
    j["gameId"] = v.gameId;
    j["createDate"] = v.createDate;
    j["fellowPlayers"] = v.fellowPlayers;
    j["userId"] = v.userId;
  }

  inline void from_json(const nlohmann::json& j, PlayerGameStats_t& v) {
    v.gameId = j.at("gameId").get<uint64_t>();
    v.createDate = j.at("createDate").get<uint64_t>();
    v.fellowPlayers = j.at("fellowPlayers").get<std::vector<FellowPlayerInfo_t>>();
    v.userId = j.at("userId").get<uint64_t>();
  }
  inline std::string to_string(const PlayerGameStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
