#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RosterMatchAggregatedStatsDTO_t {
    bool loserBracket;
    int32_t round;
    int32_t opponentLogoColor;
    int64_t duration;
    std::map<std::string, int32_t> playerChampionIds;
    bool win;
    int64_t gameId;
    std::string opponentShortName;
    int32_t opponentLogo;
  };

  inline void to_json(nlohmann::json& j, const RosterMatchAggregatedStatsDTO_t& v) {
    j["loserBracket"] = v.loserBracket;
    j["round"] = v.round;
    j["opponentLogoColor"] = v.opponentLogoColor;
    j["duration"] = v.duration;
    j["playerChampionIds"] = v.playerChampionIds;
    j["win"] = v.win;
    j["gameId"] = v.gameId;
    j["opponentShortName"] = v.opponentShortName;
    j["opponentLogo"] = v.opponentLogo;
  }

  inline void from_json(const nlohmann::json& j, RosterMatchAggregatedStatsDTO_t& v) {
    v.loserBracket = j.at("loserBracket").get<bool>();
    v.round = j.at("round").get<int32_t>();
    v.opponentLogoColor = j.at("opponentLogoColor").get<int32_t>();
    v.duration = j.at("duration").get<int64_t>();
    v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>();
    v.win = j.at("win").get<bool>();
    v.gameId = j.at("gameId").get<int64_t>();
    v.opponentShortName = j.at("opponentShortName").get<std::string>();
    v.opponentLogo = j.at("opponentLogo").get<int32_t>();
  }
}
