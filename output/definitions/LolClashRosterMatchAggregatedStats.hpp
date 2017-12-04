#ifndef SWAGGER_TYPES_LolClashRosterMatchAggregatedStats_HPP
#define SWAGGER_TYPES_LolClashRosterMatchAggregatedStats_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClashRosterMatchAggregatedStats {
    // 
    int64_t durationMs;
    // 
    int64_t gameId;
    // 
    bool loserBracket;
    // 
    int32_t opponentIconColorId;
    // 
    int32_t opponentIconId;
    // 
    std::string opponentShortName;
    // 
    std::map<std::string, int32_t> playerChampionIds;
    // 
    int32_t round;
    // 
    bool win;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterMatchAggregatedStats& v) {
    j["durationMs"] = v.durationMs;
    j["gameId"] = v.gameId;
    j["loserBracket"] = v.loserBracket;
    j["opponentIconColorId"] = v.opponentIconColorId;
    j["opponentIconId"] = v.opponentIconId;
    j["opponentShortName"] = v.opponentShortName;
    j["playerChampionIds"] = v.playerChampionIds;
    j["round"] = v.round;
    j["win"] = v.win;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterMatchAggregatedStats& v) {
    v.durationMs = j.at("durationMs").get<int64_t>;
    v.gameId = j.at("gameId").get<int64_t>;
    v.loserBracket = j.at("loserBracket").get<bool>;
    v.opponentIconColorId = j.at("opponentIconColorId").get<int32_t>;
    v.opponentIconId = j.at("opponentIconId").get<int32_t>;
    v.opponentShortName = j.at("opponentShortName").get<std::string>;
    v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>;
    v.round = j.at("round").get<int32_t>;
    v.win = j.at("win").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolClashRosterMatchAggregatedStats_HPP
