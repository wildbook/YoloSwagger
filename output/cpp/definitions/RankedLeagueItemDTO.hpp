#pragma once
#include <json.hpp>
#include <optional>
#include "RankedDivision.hpp"
#include "RankedLeagueMiniSeriesDTO.hpp"
#include "LolRankedStatsRankedTier.hpp"
#include "LolRankedStatsRankedQueue.hpp"
namespace leagueapi {
  struct RankedLeagueItemDTO_t {
    RankedDivision_t rank;
    std::string playerOrTeamId;
    uint32_t loses;
    LolRankedStatsRankedQueue_t queueType;
    RankedLeagueMiniSeriesDTO_t miniSeries;
    bool inactive;
    int32_t leaguePoints;
    std::string leagueName;
    std::string playerOrTeamName;
    uint32_t wins;
    int32_t apexDaysUntilDecay;
    LolRankedStatsRankedTier_t tier;
  };

  inline void to_json(nlohmann::json& j, const RankedLeagueItemDTO_t& v) {
    j["rank"] = v.rank;
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["loses"] = v.loses;
    j["queueType"] = v.queueType;
    j["miniSeries"] = v.miniSeries;
    j["inactive"] = v.inactive;
    j["leaguePoints"] = v.leaguePoints;
    j["leagueName"] = v.leagueName;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["wins"] = v.wins;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, RankedLeagueItemDTO_t& v) {
    v.rank = j.at("rank").get<RankedDivision_t>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
    v.loses = j.at("loses").get<uint32_t>();
    v.queueType = j.at("queueType").get<LolRankedStatsRankedQueue_t>();
    v.miniSeries = j.at("miniSeries").get<RankedLeagueMiniSeriesDTO_t>();
    v.inactive = j.at("inactive").get<bool>();
    v.leaguePoints = j.at("leaguePoints").get<int32_t>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.wins = j.at("wins").get<uint32_t>();
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>();
    v.tier = j.at("tier").get<LolRankedStatsRankedTier_t>();
  }
  inline std::string to_string(const RankedLeagueItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
