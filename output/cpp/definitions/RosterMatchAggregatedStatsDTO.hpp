#ifndef SWAGGER_TYPES_RosterMatchAggregatedStatsDTO_HPP
#define SWAGGER_TYPES_RosterMatchAggregatedStatsDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RosterMatchAggregatedStatsDTO {
    // 
    bool loserBracket;
    // 
    int64_t gameId;
    // 
    bool win;
    // 
    int32_t opponentLogoColor;
    // 
    int32_t opponentLogo;
    // 
    std::string opponentShortName;
    // 
    int64_t duration;
    // 
    std::map<std::string, int32_t> playerChampionIds;
    // 
    int32_t round;
  };

  inline void to_json(nlohmann::json& j, const RosterMatchAggregatedStatsDTO& v) {
    j["loserBracket"] = v.loserBracket;
    j["gameId"] = v.gameId;
    j["win"] = v.win;
    j["opponentLogoColor"] = v.opponentLogoColor;
    j["opponentLogo"] = v.opponentLogo;
    j["opponentShortName"] = v.opponentShortName;
    j["duration"] = v.duration;
    j["playerChampionIds"] = v.playerChampionIds;
    j["round"] = v.round;
  }

  inline void from_json(const nlohmann::json& j, RosterMatchAggregatedStatsDTO& v) {
    v.loserBracket = j.at("loserBracket").get<bool>;
    v.gameId = j.at("gameId").get<int64_t>;
    v.win = j.at("win").get<bool>;
    v.opponentLogoColor = j.at("opponentLogoColor").get<int32_t>;
    v.opponentLogo = j.at("opponentLogo").get<int32_t>;
    v.opponentShortName = j.at("opponentShortName").get<std::string>;
    v.duration = j.at("duration").get<int64_t>;
    v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>;
    v.round = j.at("round").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_RosterMatchAggregatedStatsDTO_HPP
