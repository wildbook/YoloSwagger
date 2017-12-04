#ifndef SWAGGER_TYPES_LolClashRosterMatchAggregatedStats_HPP
#define SWAGGER_TYPES_LolClashRosterMatchAggregatedStats_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClashRosterMatchAggregatedStats {
    // 
    bool loserBracket;
    // 
    int64_t gameId;
    // 
    bool win;
    // 
    int64_t durationMs;
    // 
    int32_t round;
    // 
    int32_t opponentIconId;
    // 
    std::string opponentShortName;
    // 
    std::map<std::string, int32_t> playerChampionIds;
    // 
    int32_t opponentIconColorId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterMatchAggregatedStats& v) {
    j["loserBracket"] = v.loserBracket;
    j["gameId"] = v.gameId;
    j["win"] = v.win;
    j["durationMs"] = v.durationMs;
    j["round"] = v.round;
    j["opponentIconId"] = v.opponentIconId;
    j["opponentShortName"] = v.opponentShortName;
    j["playerChampionIds"] = v.playerChampionIds;
    j["opponentIconColorId"] = v.opponentIconColorId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterMatchAggregatedStats& v) {
    v.loserBracket = j.at("loserBracket").get<bool>;
    v.gameId = j.at("gameId").get<int64_t>;
    v.win = j.at("win").get<bool>;
    v.durationMs = j.at("durationMs").get<int64_t>;
    v.round = j.at("round").get<int32_t>;
    v.opponentIconId = j.at("opponentIconId").get<int32_t>;
    v.opponentShortName = j.at("opponentShortName").get<std::string>;
    v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>;
    v.opponentIconColorId = j.at("opponentIconColorId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashRosterMatchAggregatedStats_HPP
