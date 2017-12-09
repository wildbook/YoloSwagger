#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RosterMatchAggregatedStatsDTO_t {
    int64_t gameId;
    std::map<std::string, int32_t> playerChampionIds;
    int64_t duration;
    bool loserBracket;
    std::string opponentShortName;
    int32_t opponentLogo;
    int32_t opponentLogoColor;
    int32_t round;
    bool win;
  };

  inline void to_json(nlohmann::json& j, const RosterMatchAggregatedStatsDTO_t& v) {
    j["gameId"] = v.gameId;
    j["playerChampionIds"] = v.playerChampionIds;
    j["duration"] = v.duration;
    j["loserBracket"] = v.loserBracket;
    j["opponentShortName"] = v.opponentShortName;
    j["opponentLogo"] = v.opponentLogo;
    j["opponentLogoColor"] = v.opponentLogoColor;
    j["round"] = v.round;
    j["win"] = v.win;
  }

  inline void from_json(const nlohmann::json& j, RosterMatchAggregatedStatsDTO_t& v) {
    v.gameId = j.at("gameId").get<int64_t>();
    v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>();
    v.duration = j.at("duration").get<int64_t>();
    v.loserBracket = j.at("loserBracket").get<bool>();
    v.opponentShortName = j.at("opponentShortName").get<std::string>();
    v.opponentLogo = j.at("opponentLogo").get<int32_t>();
    v.opponentLogoColor = j.at("opponentLogoColor").get<int32_t>();
    v.round = j.at("round").get<int32_t>();
    v.win = j.at("win").get<bool>();
  }
  inline std::string to_string(const RosterMatchAggregatedStatsDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
