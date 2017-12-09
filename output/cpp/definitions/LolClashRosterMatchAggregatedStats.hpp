#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashRosterMatchAggregatedStats_t {
    int32_t opponentIconColorId;
    int64_t gameId;
    std::map<std::string, int32_t> playerChampionIds;
    int32_t opponentIconId;
    int32_t round;
    bool loserBracket;
    bool win;
    std::string opponentShortName;
    int64_t durationMs;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterMatchAggregatedStats_t& v) {
    j["opponentIconColorId"] = v.opponentIconColorId;
    j["gameId"] = v.gameId;
    j["playerChampionIds"] = v.playerChampionIds;
    j["opponentIconId"] = v.opponentIconId;
    j["round"] = v.round;
    j["loserBracket"] = v.loserBracket;
    j["win"] = v.win;
    j["opponentShortName"] = v.opponentShortName;
    j["durationMs"] = v.durationMs;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterMatchAggregatedStats_t& v) {
    v.opponentIconColorId = j.at("opponentIconColorId").get<int32_t>();
    v.gameId = j.at("gameId").get<int64_t>();
    v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>();
    v.opponentIconId = j.at("opponentIconId").get<int32_t>();
    v.round = j.at("round").get<int32_t>();
    v.loserBracket = j.at("loserBracket").get<bool>();
    v.win = j.at("win").get<bool>();
    v.opponentShortName = j.at("opponentShortName").get<std::string>();
    v.durationMs = j.at("durationMs").get<int64_t>();
  }
  inline std::string to_string(const LolClashRosterMatchAggregatedStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
