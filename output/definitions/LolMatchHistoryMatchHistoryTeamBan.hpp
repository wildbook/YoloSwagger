#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryTeamBan_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryTeamBan_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryTeamBan {
    // 
    int32_t championId;
    // 
    uint16_t pickTurn;
  };

  void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTeamBan& v) {
    j["championId"] = v.championId;
    j["pickTurn"] = v.pickTurn;
  }

  void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTeamBan& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.pickTurn = j.at("pickTurn").get<uint16_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryTeamBan_HPP
