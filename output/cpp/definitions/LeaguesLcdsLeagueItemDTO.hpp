#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsMiniSeriesDTO.hpp"
#include "LeaguesLcdsQueueType.hpp"
namespace leagueapi {
  struct LeaguesLcdsLeagueItemDTO_t {
    int32_t leaguePoints;
    LeaguesLcdsLeagueRank_t rank;
    LeaguesLcdsQueueType_t queueType;
    bool hotStreak;
    uint64_t wins;
    bool inactive;
    uint64_t demotionWarning;
    int32_t apexDaysUntilDecay;
    LeaguesLcdsMiniSeriesDTO_t miniSeries;
    uint64_t timeUntilInactivityStatusChanges;
    LeaguesLcdsLeagueTier_t tier;
    std::string playerOrTeamName;
    bool displayDecayWarning;
    uint64_t losses;
    bool veteran;
    bool freshBlood;
    std::string inactivityStatus;
    uint64_t previousDayLeaguePosition;
    std::string playerOrTeamId;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsLeagueItemDTO_t& v) {
    j["leaguePoints"] = v.leaguePoints;
    j["rank"] = v.rank;
    j["queueType"] = v.queueType;
    j["hotStreak"] = v.hotStreak;
    j["wins"] = v.wins;
    j["inactive"] = v.inactive;
    j["demotionWarning"] = v.demotionWarning;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["miniSeries"] = v.miniSeries;
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges;
    j["tier"] = v.tier;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["displayDecayWarning"] = v.displayDecayWarning;
    j["losses"] = v.losses;
    j["veteran"] = v.veteran;
    j["freshBlood"] = v.freshBlood;
    j["inactivityStatus"] = v.inactivityStatus;
    j["previousDayLeaguePosition"] = v.previousDayLeaguePosition;
    j["playerOrTeamId"] = v.playerOrTeamId;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsLeagueItemDTO_t& v) {
    v.leaguePoints = j.at("leaguePoints").get<int32_t>();
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank_t>();
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType_t>();
    v.hotStreak = j.at("hotStreak").get<bool>();
    v.wins = j.at("wins").get<uint64_t>();
    v.inactive = j.at("inactive").get<bool>();
    v.demotionWarning = j.at("demotionWarning").get<uint64_t>();
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>();
    v.miniSeries = j.at("miniSeries").get<LeaguesLcdsMiniSeriesDTO_t>();
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool>();
    v.losses = j.at("losses").get<uint64_t>();
    v.veteran = j.at("veteran").get<bool>();
    v.freshBlood = j.at("freshBlood").get<bool>();
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>();
    v.previousDayLeaguePosition = j.at("previousDayLeaguePosition").get<uint64_t>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
  }
}
