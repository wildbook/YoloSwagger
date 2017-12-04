#ifndef SWAGGER_TYPES_PlayerGameStats_HPP
#define SWAGGER_TYPES_PlayerGameStats_HPP
#include <json.hpp>
#include "FellowPlayerInfo.hpp"
namespace leagueapi {
  // 
  struct PlayerGameStats {
    // 
    uint64_t userId;
    // 
    uint64_t createDate;
    // 
    uint64_t gameId;
    // 
    std::vector<FellowPlayerInfo> fellowPlayers;
  };

  inline void to_json(nlohmann::json& j, const PlayerGameStats& v) {
    j["userId"] = v.userId;
    j["createDate"] = v.createDate;
    j["gameId"] = v.gameId;
    j["fellowPlayers"] = v.fellowPlayers;
  }

  inline void from_json(const nlohmann::json& j, PlayerGameStats& v) {
    v.userId = j.at("userId").get<uint64_t>;
    v.createDate = j.at("createDate").get<uint64_t>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.fellowPlayers = j.at("fellowPlayers").get<std::vector<FellowPlayerInfo>>;
  }

}
#endif // SWAGGER_TYPES_PlayerGameStats_HPP
