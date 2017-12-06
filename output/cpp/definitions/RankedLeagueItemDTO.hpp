#pragma once
#include <json.hpp>
#include <optional>
#include "LolRankedStatsRankedQueue.hpp"
#include "RankedLeagueMiniSeriesDTO.hpp"
#include "RankedDivision.hpp"
#include "LolRankedStatsRankedTier.hpp"
namespace leagueapi {
  struct RankedLeagueItemDTO_t {
    int32_t apexDaysUntilDecay;
    bool inactive;
    std::string leagueName;
    int32_t leaguePoints;
    uint32_t loses;
    RankedLeagueMiniSeriesDTO_t miniSeries;
    std::string playerOrTeamId;
    std::string playerOrTeamName;
    LolRankedStatsRankedQueue_t queueType;
    RankedDivision_t rank;
    LolRankedStatsRankedTier_t tier;
    uint32_t wins;
  };

  inline void to_json(nlohmann::json& j, const RankedLeagueItemDTO_t& v) {
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["inactive"] = v.inactive;
    j["leagueName"] = v.leagueName;
    j["leaguePoints"] = v.leaguePoints;
    j["loses"] = v.loses;
    j["miniSeries"] = v.miniSeries;
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["queueType"] = v.queueType;
    j["rank"] = v.rank;
    j["tier"] = v.tier;
    j["wins"] = v.wins;
  }

  inline void from_json(const nlohmann::json& j, RankedLeagueItemDTO_t& v) {
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>();
    v.inactive = j.at("inactive").get<bool>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.leaguePoints = j.at("leaguePoints").get<int32_t>();
    v.loses = j.at("loses").get<uint32_t>();
    v.miniSeries = j.at("miniSeries").get<RankedLeagueMiniSeriesDTO_t>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.queueType = j.at("queueType").get<LolRankedStatsRankedQueue_t>();
    v.rank = j.at("rank").get<RankedDivision_t>();
    v.tier = j.at("tier").get<LolRankedStatsRankedTier_t>();
    v.wins = j.at("wins").get<uint32_t>();
  }
}
