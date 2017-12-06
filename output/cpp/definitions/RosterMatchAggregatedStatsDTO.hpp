#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RosterMatchAggregatedStatsDTO_t {
    int64_t duration;
    int64_t gameId;
    bool loserBracket;
    int32_t opponentLogo;
    int32_t opponentLogoColor;
    std::string opponentShortName;
    std::map<std::string, int32_t> playerChampionIds;
    int32_t round;
    bool win;
  };

  inline void to_json(nlohmann::json& j, const RosterMatchAggregatedStatsDTO_t& v) {
    j["duration"] = v.duration;
    j["gameId"] = v.gameId;
    j["loserBracket"] = v.loserBracket;
    j["opponentLogo"] = v.opponentLogo;
    j["opponentLogoColor"] = v.opponentLogoColor;
    j["opponentShortName"] = v.opponentShortName;
    j["playerChampionIds"] = v.playerChampionIds;
    j["round"] = v.round;
    j["win"] = v.win;
  }

  inline void from_json(const nlohmann::json& j, RosterMatchAggregatedStatsDTO_t& v) {
    v.duration = j.at("duration").get<int64_t>();
    v.gameId = j.at("gameId").get<int64_t>();
    v.loserBracket = j.at("loserBracket").get<bool>();
    v.opponentLogo = j.at("opponentLogo").get<int32_t>();
    v.opponentLogoColor = j.at("opponentLogoColor").get<int32_t>();
    v.opponentShortName = j.at("opponentShortName").get<std::string>();
    v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>();
    v.round = j.at("round").get<int32_t>();
    v.win = j.at("win").get<bool>();
  }
}
