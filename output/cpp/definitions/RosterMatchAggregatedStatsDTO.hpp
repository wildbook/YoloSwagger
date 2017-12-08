#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RosterMatchAggregatedStatsDTO_t {
    bool_t loserBracket;
    int64_t_t gameId;
    bool_t win;
    int32_t_t opponentLogoColor;
    int32_t_t opponentLogo;
    std::string_t opponentShortName;
    int64_t_t duration;
    std::map<std::string, int32_t> playerChampionIds;
    int32_t_t round;
  };

  inline void to_json(nlohmann::json& j, const RosterMatchAggregatedStatsDTO_t& v) {
    j["loserBracket"] = v.loserBracket;
    j["gameId"] = v.gameId;
    j["win"] = v.win;
    j["opponentLogoColor"] = v.opponentLogoColor;
    j["opponentLogo"] = v.opponentLogo;
    j["opponentShortName"] = v.opponentShortName;
    j["duration"] = v.duration;
    j["playerChampionIds"] = v.playerChampionIds;
    j["round"] = v.round;
  }

  inline void from_json(const nlohmann::json& j, RosterMatchAggregatedStatsDTO_t& v) {
    v.loserBracket = j.at("loserBracket").get<bool_t>();
    v.gameId = j.at("gameId").get<int64_t_t>();
    v.win = j.at("win").get<bool_t>();
    v.opponentLogoColor = j.at("opponentLogoColor").get<int32_t_t>();
    v.opponentLogo = j.at("opponentLogo").get<int32_t_t>();
    v.opponentShortName = j.at("opponentShortName").get<std::string_t>();
    v.duration = j.at("duration").get<int64_t_t>();
    v.playerChampionIds = j.at("playerChampionIds").get<std::map<std::string, int32_t>>();
    v.round = j.at("round").get<int32_t_t>();
  }
  inline std::string to_string(const RosterMatchAggregatedStatsDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
