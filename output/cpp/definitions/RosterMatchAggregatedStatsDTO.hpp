#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RosterMatchAggregatedStatsDTO_t {
    int32_t round;
    int64_t gameId;
    int32_t opponentLogoColor;
    std::string opponentShortName;
    int32_t opponentLogo;
    bool win;
    std::map<std::string, int32_t> playerChampionIds;
    bool loserBracket;
    int64_t duration;
  };

  inline void to_json(nlohmann::json& j, const RosterMatchAggregatedStatsDTO_t& v) {
    j["round"] = v.round;
    j["gameId"] = v.gameId;
    j["opponentLogoColor"] = v.opponentLogoColor;
    j["opponentShortName"] = v.opponentShortName;
    j["opponentLogo"] = v.opponentLogo;
    j["win"] = v.win;
    j["playerChampionIds"] = v.playerChampionIds;
    j["loserBracket"] = v.loserBracket;
    j["duration"] = v.duration;
  }

  inline void from_json(const nlohmann::json& j, RosterMatchAggregatedStatsDTO_t& v) {
    v.round = j.at("round").get<int32_t>();
    v.gameId = j.at("gameId").get<int64_t>();
    v.opponentLogoColor = j.at("opponentLogoColor").get<int32_t>();
    v.opponentShortName = j.at("opponentShortName").get<std::string>();
    v.opponentLogo = j.at("opponentLogo").get<int32_t>();
    v.win = j.at("win").get<bool>();
    v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>();
    v.loserBracket = j.at("loserBracket").get<bool>();
    v.duration = j.at("duration").get<int64_t>();
  }
  inline std::string to_string(const RosterMatchAggregatedStatsDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
