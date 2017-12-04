#ifndef SWAGGER_TYPES_RankedLeagueItemDTO_HPP
#define SWAGGER_TYPES_RankedLeagueItemDTO_HPP
#include <json.hpp>
#include "LolRankedStatsRankedTier.hpp"
#include "RankedLeagueMiniSeriesDTO.hpp"
#include "LolRankedStatsRankedQueue.hpp"
#include "RankedDivision.hpp"
namespace leagueapi {
  // 
  struct RankedLeagueItemDTO {
    // 
    LolRankedStatsRankedQueue queueType;
    // 
    RankedLeagueMiniSeriesDTO miniSeries;
    // 
    int32_t apexDaysUntilDecay;
    // 
    std::string playerOrTeamId;
    // 
    uint32_t loses;
    // 
    LolRankedStatsRankedTier tier;
    // 
    std::string playerOrTeamName;
    // 
    bool inactive;
    // 
    RankedDivision rank;
    // 
    uint32_t wins;
    // 
    std::string leagueName;
    // 
    int32_t leaguePoints;
  };

  inline void to_json(nlohmann::json& j, const RankedLeagueItemDTO& v) {
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

  inline void from_json(const nlohmann::json& j, RankedLeagueItemDTO& v) {
    v.queueType = j.at("queueType").get<LolRankedStatsRankedQueue>;
    v.miniSeries = j.at("miniSeries").get<RankedLeagueMiniSeriesDTO>;
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>;
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>;
    v.loses = j.at("loses").get<uint32_t>;
    v.tier = j.at("tier").get<LolRankedStatsRankedTier>;
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>;
    v.inactive = j.at("inactive").get<bool>;
    v.rank = j.at("rank").get<RankedDivision>;
    v.wins = j.at("wins").get<uint32_t>;
    v.leagueName = j.at("leagueName").get<std::string>;
    v.leaguePoints = j.at("leaguePoints").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_RankedLeagueItemDTO_HPP
