#pragma once
#include <json.hpp>
#include <optional>
#include "LolRankedStatsRankedTier.hpp"
#include "RankedLeagueMiniSeriesDTO.hpp"
#include "LolRankedStatsRankedQueue.hpp"
#include "RankedDivision.hpp"
namespace leagueapi {
  struct RankedLeagueItemDTO_t {
    bool inactive;
    LolRankedStatsRankedQueue_t queueType;
    std::string leagueName;
    int32_t leaguePoints;
    uint32_t wins;
    int32_t apexDaysUntilDecay;
    uint32_t loses;
    RankedDivision_t rank;
    RankedLeagueMiniSeriesDTO_t miniSeries;
    std::string playerOrTeamName;
    std::string playerOrTeamId;
    LolRankedStatsRankedTier_t tier;
  };

  inline void to_json(nlohmann::json& j, const RankedLeagueItemDTO_t& v) {
    j["inactive"] = v.inactive;
    j["queueType"] = v.queueType;
    j["leagueName"] = v.leagueName;
    j["leaguePoints"] = v.leaguePoints;
    j["wins"] = v.wins;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["loses"] = v.loses;
    j["rank"] = v.rank;
    j["miniSeries"] = v.miniSeries;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, RankedLeagueItemDTO_t& v) {
    v.inactive = j.at("inactive").get<bool>();
    v.queueType = j.at("queueType").get<LolRankedStatsRankedQueue_t>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.leaguePoints = j.at("leaguePoints").get<int32_t>();
    v.wins = j.at("wins").get<uint32_t>();
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>();
    v.loses = j.at("loses").get<uint32_t>();
    v.rank = j.at("rank").get<RankedDivision_t>();
    v.miniSeries = j.at("miniSeries").get<RankedLeagueMiniSeriesDTO_t>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
    v.tier = j.at("tier").get<LolRankedStatsRankedTier_t>();
  }
  inline std::string to_string(const RankedLeagueItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
