#pragma once
#include <json.hpp>
#include <optional>
#include "RankedLeagueMiniSeriesDTO.hpp"
#include "LolRankedStatsRankedTier.hpp"
#include "RankedDivision.hpp"
#include "LolRankedStatsRankedQueue.hpp"
namespace leagueapi {
  struct RankedLeagueItemDTO_t {
    LolRankedStatsRankedQueue_t queueType;
    std::string playerOrTeamId;
    std::string playerOrTeamName;
    RankedLeagueMiniSeriesDTO_t miniSeries;
    int32_t leaguePoints;
    bool inactive;
    uint32_t loses;
    LolRankedStatsRankedTier_t tier;
    int32_t apexDaysUntilDecay;
    std::string leagueName;
    uint32_t wins;
    RankedDivision_t rank;
  };

  inline void to_json(nlohmann::json& j, const RankedLeagueItemDTO_t& v) {
    j["queueType"] = v.queueType;
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["miniSeries"] = v.miniSeries;
    j["leaguePoints"] = v.leaguePoints;
    j["inactive"] = v.inactive;
    j["loses"] = v.loses;
    j["tier"] = v.tier;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["leagueName"] = v.leagueName;
    j["wins"] = v.wins;
    j["rank"] = v.rank;
  }

  inline void from_json(const nlohmann::json& j, RankedLeagueItemDTO_t& v) {
    v.queueType = j.at("queueType").get<LolRankedStatsRankedQueue_t>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.miniSeries = j.at("miniSeries").get<RankedLeagueMiniSeriesDTO_t>();
    v.leaguePoints = j.at("leaguePoints").get<int32_t>();
    v.inactive = j.at("inactive").get<bool>();
    v.loses = j.at("loses").get<uint32_t>();
    v.tier = j.at("tier").get<LolRankedStatsRankedTier_t>();
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.wins = j.at("wins").get<uint32_t>();
    v.rank = j.at("rank").get<RankedDivision_t>();
  }
  inline std::string to_string(const RankedLeagueItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
