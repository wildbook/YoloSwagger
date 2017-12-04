#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryTeamBan_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryTeamBan_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryTeamBan {
    // 
    uint16_t pickTurn;
    // 
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTeamBan& v) {
    j["pickTurn"] = v.pickTurn;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTeamBan& v) {
    v.pickTurn = j.at("pickTurn").get<uint16_t>;
    v.championId = j.at("championId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryTeamBan_HPP
