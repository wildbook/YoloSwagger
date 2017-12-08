#pragma once
#include <json.hpp>
#include <optional>
#include "LolRankedStatsRankedTier.hpp"
#include "RankedLeagueMiniSeriesDTO.hpp"
#include "LolRankedStatsRankedQueue.hpp"
#include "RankedDivision.hpp"
namespace leagueapi {
  struct RankedLeagueItemDTO_t {
    LolRankedStatsRankedQueue_t queueType;
    RankedLeagueMiniSeriesDTO_t miniSeries;
    int32_t_t apexDaysUntilDecay;
    std::string_t playerOrTeamId;
    uint32_t_t loses;
    LolRankedStatsRankedTier_t tier;
    std::string_t playerOrTeamName;
    bool_t inactive;
    RankedDivision_t rank;
    uint32_t_t wins;
    std::string_t leagueName;
    int32_t_t leaguePoints;
  };

  inline void to_json(nlohmann::json& j, const RankedLeagueItemDTO_t& v) {
    j["queueType"] = v.queueType;
    j["miniSeries"] = v.miniSeries;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["loses"] = v.loses;
    j["tier"] = v.tier;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["inactive"] = v.inactive;
    j["rank"] = v.rank;
    j["wins"] = v.wins;
    j["leagueName"] = v.leagueName;
    j["leaguePoints"] = v.leaguePoints;
  }

  inline void from_json(const nlohmann::json& j, RankedLeagueItemDTO_t& v) {
    v.queueType = j.at("queueType").get<LolRankedStatsRankedQueue_t>();
    v.miniSeries = j.at("miniSeries").get<RankedLeagueMiniSeriesDTO_t>();
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t_t>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string_t>();
    v.loses = j.at("loses").get<uint32_t_t>();
    v.tier = j.at("tier").get<LolRankedStatsRankedTier_t>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string_t>();
    v.inactive = j.at("inactive").get<bool_t>();
    v.rank = j.at("rank").get<RankedDivision_t>();
    v.wins = j.at("wins").get<uint32_t_t>();
    v.leagueName = j.at("leagueName").get<std::string_t>();
    v.leaguePoints = j.at("leaguePoints").get<int32_t_t>();
  }
  inline std::string to_string(const RankedLeagueItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
