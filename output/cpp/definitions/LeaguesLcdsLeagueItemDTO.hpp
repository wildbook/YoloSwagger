#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsMiniSeriesDTO.hpp"
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
namespace leagueapi {
  struct LeaguesLcdsLeagueItemDTO_t {
    int32_t apexDaysUntilDecay;
    uint64_t demotionWarning;
    bool displayDecayWarning;
    bool freshBlood;
    bool hotStreak;
    bool inactive;
    std::string inactivityStatus;
    int32_t leaguePoints;
    uint64_t losses;
    LeaguesLcdsMiniSeriesDTO_t miniSeries;
    std::string playerOrTeamId;
    std::string playerOrTeamName;
    uint64_t previousDayLeaguePosition;
    LeaguesLcdsQueueType_t queueType;
    LeaguesLcdsLeagueRank_t rank;
    LeaguesLcdsLeagueTier_t tier;
    uint64_t timeUntilInactivityStatusChanges;
    bool veteran;
    uint64_t wins;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsLeagueItemDTO_t& v) {
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["demotionWarning"] = v.demotionWarning;
    j["displayDecayWarning"] = v.displayDecayWarning;
    j["freshBlood"] = v.freshBlood;
    j["hotStreak"] = v.hotStreak;
    j["inactive"] = v.inactive;
    j["inactivityStatus"] = v.inactivityStatus;
    j["leaguePoints"] = v.leaguePoints;
    j["losses"] = v.losses;
    j["miniSeries"] = v.miniSeries;
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["previousDayLeaguePosition"] = v.previousDayLeaguePosition;
    j["queueType"] = v.queueType;
    j["rank"] = v.rank;
    j["tier"] = v.tier;
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges;
    j["veteran"] = v.veteran;
    j["wins"] = v.wins;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsLeagueItemDTO_t& v) {
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>();
    v.demotionWarning = j.at("demotionWarning").get<uint64_t>();
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool>();
    v.freshBlood = j.at("freshBlood").get<bool>();
    v.hotStreak = j.at("hotStreak").get<bool>();
    v.inactive = j.at("inactive").get<bool>();
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>();
    v.leaguePoints = j.at("leaguePoints").get<int32_t>();
    v.losses = j.at("losses").get<uint64_t>();
    v.miniSeries = j.at("miniSeries").get<LeaguesLcdsMiniSeriesDTO_t>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.previousDayLeaguePosition = j.at("previousDayLeaguePosition").get<uint64_t>();
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType_t>();
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank_t>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>();
    v.veteran = j.at("veteran").get<bool>();
    v.wins = j.at("wins").get<uint64_t>();
  }
}
