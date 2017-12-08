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
    int32_t apexDaysUntilDecay;
    std::string playerOrTeamId;
    uint32_t loses;
    LolRankedStatsRankedTier_t tier;
    std::string playerOrTeamName;
    bool inactive;
    RankedDivision_t rank;
    uint32_t wins;
    std::string leagueName;
    int32_t leaguePoints;
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
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
    v.loses = j.at("loses").get<uint32_t>();
    v.tier = j.at("tier").get<LolRankedStatsRankedTier_t>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.inactive = j.at("inactive").get<bool>();
    v.rank = j.at("rank").get<RankedDivision_t>();
    v.wins = j.at("wins").get<uint32_t>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.leaguePoints = j.at("leaguePoints").get<int32_t>();
  }
  inline std::string to_string(const RankedLeagueItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
