#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RosterMatchAggregatedStatsDTO_t {
    int32_t round;
    std::string opponentShortName;
    int32_t opponentLogoColor;
    std::map<std::string, int32_t> playerChampionIds;
    bool win;
    bool loserBracket;
    int64_t gameId;
    int64_t duration;
    int32_t opponentLogo;
  };

  inline void to_json(nlohmann::json& j, const RosterMatchAggregatedStatsDTO_t& v) {
    j["round"] = v.round;
    j["opponentShortName"] = v.opponentShortName;
    j["opponentLogoColor"] = v.opponentLogoColor;
    j["playerChampionIds"] = v.playerChampionIds;
    j["win"] = v.win;
    j["loserBracket"] = v.loserBracket;
    j["gameId"] = v.gameId;
    j["duration"] = v.duration;
    j["opponentLogo"] = v.opponentLogo;
  }

  inline void from_json(const nlohmann::json& j, RosterMatchAggregatedStatsDTO_t& v) {
    v.round = j.at("round").get<int32_t>();
    v.opponentShortName = j.at("opponentShortName").get<std::string>();
    v.opponentLogoColor = j.at("opponentLogoColor").get<int32_t>();
    v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>();
    v.win = j.at("win").get<bool>();
    v.loserBracket = j.at("loserBracket").get<bool>();
    v.gameId = j.at("gameId").get<int64_t>();
    v.duration = j.at("duration").get<int64_t>();
    v.opponentLogo = j.at("opponentLogo").get<int32_t>();
  }
  inline std::string to_string(const RosterMatchAggregatedStatsDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
