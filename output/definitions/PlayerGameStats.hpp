#ifndef SWAGGER_TYPES_PlayerGameStats_HPP
#define SWAGGER_TYPES_PlayerGameStats_HPP
#include <json.hpp>
#include "FellowPlayerInfo.hpp"
namespace leagueapi {
  // 
  struct PlayerGameStats {
    // 
    uint64_t createDate;
    // 
    std::vector<FellowPlayerInfo> fellowPlayers;
    // 
    uint64_t gameId;
    // 
    uint64_t userId;
  };

  inline void to_json(nlohmann::json& j, const PlayerGameStats& v) {
    j["createDate"] = v.createDate;
    j["fellowPlayers"] = v.fellowPlayers;
    j["gameId"] = v.gameId;
    j["userId"] = v.userId;
  }

  inline void from_json(const nlohmann::json& j, PlayerGameStats& v) {
    v.createDate = j.at("createDate").get<uint64_t>;
    v.fellowPlayers = j.at("fellowPlayers").get<std::vector<FellowPlayerInfo>>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.userId = j.at("userId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_PlayerGameStats_HPP
