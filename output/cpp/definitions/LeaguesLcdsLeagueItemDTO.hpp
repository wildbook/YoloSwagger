#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsMiniSeriesDTO.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsLeagueRank.hpp"
namespace leagueapi {
  struct LeaguesLcdsLeagueItemDTO_t {
    LeaguesLcdsLeagueRank_t rank;
    bool inactive;
    uint64_t previousDayLeaguePosition;
    LeaguesLcdsQueueType_t queueType;
    bool veteran;
    bool hotStreak;
    int32_t leaguePoints;
    uint64_t wins;
    int32_t apexDaysUntilDecay;
    std::string inactivityStatus;
    bool freshBlood;
    uint64_t demotionWarning;
    uint64_t timeUntilInactivityStatusChanges;
    bool displayDecayWarning;
    LeaguesLcdsMiniSeriesDTO_t miniSeries;
    std::string playerOrTeamName;
    uint64_t losses;
    std::string playerOrTeamId;
    LeaguesLcdsLeagueTier_t tier;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsLeagueItemDTO_t& v) {
    j["rank"] = v.rank;
    j["inactive"] = v.inactive;
    j["previousDayLeaguePosition"] = v.previousDayLeaguePosition;
    j["queueType"] = v.queueType;
    j["veteran"] = v.veteran;
    j["hotStreak"] = v.hotStreak;
    j["leaguePoints"] = v.leaguePoints;
    j["wins"] = v.wins;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["inactivityStatus"] = v.inactivityStatus;
    j["freshBlood"] = v.freshBlood;
    j["demotionWarning"] = v.demotionWarning;
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges;
    j["displayDecayWarning"] = v.displayDecayWarning;
    j["miniSeries"] = v.miniSeries;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["losses"] = v.losses;
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsLeagueItemDTO_t& v) {
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank_t>();
    v.inactive = j.at("inactive").get<bool>();
    v.previousDayLeaguePosition = j.at("previousDayLeaguePosition").get<uint64_t>();
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType_t>();
    v.veteran = j.at("veteran").get<bool>();
    v.hotStreak = j.at("hotStreak").get<bool>();
    v.leaguePoints = j.at("leaguePoints").get<int32_t>();
    v.wins = j.at("wins").get<uint64_t>();
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>();
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>();
    v.freshBlood = j.at("freshBlood").get<bool>();
    v.demotionWarning = j.at("demotionWarning").get<uint64_t>();
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>();
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool>();
    v.miniSeries = j.at("miniSeries").get<LeaguesLcdsMiniSeriesDTO_t>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.losses = j.at("losses").get<uint64_t>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
  }
  inline std::string to_string(const LeaguesLcdsLeagueItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
