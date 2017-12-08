#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashRosterMatchAggregatedStats_t {
    int32_t round;
    int64_t gameId;
    std::string opponentShortName;
    int64_t durationMs;
    int32_t opponentIconColorId;
    bool win;
    int32_t opponentIconId;
    bool loserBracket;
    std::map<std::string, int32_t> playerChampionIds;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterMatchAggregatedStats_t& v) {
    j["round"] = v.round;
    j["gameId"] = v.gameId;
    j["opponentShortName"] = v.opponentShortName;
    j["durationMs"] = v.durationMs;
    j["opponentIconColorId"] = v.opponentIconColorId;
    j["win"] = v.win;
    j["opponentIconId"] = v.opponentIconId;
    j["loserBracket"] = v.loserBracket;
    j["playerChampionIds"] = v.playerChampionIds;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterMatchAggregatedStats_t& v) {
    v.round = j.at("round").get<int32_t>();
    v.gameId = j.at("gameId").get<int64_t>();
    v.opponentShortName = j.at("opponentShortName").get<std::string>();
    v.durationMs = j.at("durationMs").get<int64_t>();
    v.opponentIconColorId = j.at("opponentIconColorId").get<int32_t>();
    v.win = j.at("win").get<bool>();
    v.opponentIconId = j.at("opponentIconId").get<int32_t>();
    v.loserBracket = j.at("loserBracket").get<bool>();
    v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>();
  }
  inline std::string to_string(const LolClashRosterMatchAggregatedStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
