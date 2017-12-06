#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashRosterMatchAggregatedStats_t {
    bool loserBracket;
    int32_t round;
    int64_t durationMs;
    int32_t opponentIconColorId;
    std::map<std::string, int32_t> playerChampionIds;
    bool win;
    int64_t gameId;
    int32_t opponentIconId;
    std::string opponentShortName;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterMatchAggregatedStats_t& v) {
    j["loserBracket"] = v.loserBracket;
    j["round"] = v.round;
    j["durationMs"] = v.durationMs;
    j["opponentIconColorId"] = v.opponentIconColorId;
    j["playerChampionIds"] = v.playerChampionIds;
    j["win"] = v.win;
    j["gameId"] = v.gameId;
    j["opponentIconId"] = v.opponentIconId;
    j["opponentShortName"] = v.opponentShortName;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterMatchAggregatedStats_t& v) {
    v.loserBracket = j.at("loserBracket").get<bool>();
    v.round = j.at("round").get<int32_t>();
    v.durationMs = j.at("durationMs").get<int64_t>();
    v.opponentIconColorId = j.at("opponentIconColorId").get<int32_t>();
    v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>();
    v.win = j.at("win").get<bool>();
    v.gameId = j.at("gameId").get<int64_t>();
    v.opponentIconId = j.at("opponentIconId").get<int32_t>();
    v.opponentShortName = j.at("opponentShortName").get<std::string>();
  }
}
