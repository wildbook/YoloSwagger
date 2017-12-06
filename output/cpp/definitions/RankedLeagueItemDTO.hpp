#pragma once
#include <json.hpp>
#include <optional>
#include "LolRankedStatsRankedTier.hpp"
#include "RankedDivision.hpp"
#include "RankedLeagueMiniSeriesDTO.hpp"
#include "LolRankedStatsRankedQueue.hpp"
namespace leagueapi {
  struct RankedLeagueItemDTO_t {
    int32_t leaguePoints;
    RankedDivision_t rank;
    LolRankedStatsRankedQueue_t queueType;
    uint32_t wins;
    bool inactive;
    int32_t apexDaysUntilDecay;
    LolRankedStatsRankedTier_t tier;
    RankedLeagueMiniSeriesDTO_t miniSeries;
    uint32_t loses;
    std::string playerOrTeamName;
    std::string leagueName;
    std::string playerOrTeamId;
  };

  inline void to_json(nlohmann::json& j, const RankedLeagueItemDTO_t& v) {
    j["leaguePoints"] = v.leaguePoints;
    j["rank"] = v.rank;
    j["queueType"] = v.queueType;
    j["wins"] = v.wins;
    j["inactive"] = v.inactive;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["tier"] = v.tier;
    j["miniSeries"] = v.miniSeries;
    j["loses"] = v.loses;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["leagueName"] = v.leagueName;
    j["playerOrTeamId"] = v.playerOrTeamId;
  }

  inline void from_json(const nlohmann::json& j, RankedLeagueItemDTO_t& v) {
    v.leaguePoints = j.at("leaguePoints").get<int32_t>();
    v.rank = j.at("rank").get<RankedDivision_t>();
    v.queueType = j.at("queueType").get<LolRankedStatsRankedQueue_t>();
    v.wins = j.at("wins").get<uint32_t>();
    v.inactive = j.at("inactive").get<bool>();
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>();
    v.tier = j.at("tier").get<LolRankedStatsRankedTier_t>();
    v.miniSeries = j.at("miniSeries").get<RankedLeagueMiniSeriesDTO_t>();
    v.loses = j.at("loses").get<uint32_t>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
  }
}
