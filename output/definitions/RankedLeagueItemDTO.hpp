#ifndef SWAGGER_TYPES_RankedLeagueItemDTO_HPP
#define SWAGGER_TYPES_RankedLeagueItemDTO_HPP
#include <json.hpp>
#include "LolRankedStatsRankedQueue.hpp"
#include "RankedLeagueMiniSeriesDTO.hpp"
#include "LolRankedStatsRankedTier.hpp"
#include "RankedDivision.hpp"
namespace test {
  // 
  struct RankedLeagueItemDTO {
'    // 
    int32_t apexDaysUntilDecay;
    // 
    bool inactive;
    // 
    std::string leagueName;
    // 
    int32_t leaguePoints;
    // 
    uint32_t loses;
    // 
    RankedLeagueMiniSeriesDTO miniSeries;
    // 
    std::string playerOrTeamId;
    // 
    std::string playerOrTeamName;
    // 
    LolRankedStatsRankedQueue queueType;
    // 
    RankedDivision rank;
    // 
    LolRankedStatsRankedTier tier;
    // 
    uint32_t wins;
  };

  void to_json(nlohmann::json& j, const RankedLeagueItemDTO& v) {
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

  void from_json(const nlohmann::json& j, RankedLeagueItemDTO& v) {
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>;
    v.inactive = j.at("inactive").get<bool>;
    v.leagueName = j.at("leagueName").get<std::string>;
    v.leaguePoints = j.at("leaguePoints").get<int32_t>;
    v.loses = j.at("loses").get<uint32_t>;
    v.miniSeries = j.at("miniSeries").get<RankedLeagueMiniSeriesDTO>;
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>;
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>;
    v.queueType = j.at("queueType").get<LolRankedStatsRankedQueue>;
    v.rank = j.at("rank").get<RankedDivision>;
    v.tier = j.at("tier").get<LolRankedStatsRankedTier>;
    v.wins = j.at("wins").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_RankedLeagueItemDTO_HPP
