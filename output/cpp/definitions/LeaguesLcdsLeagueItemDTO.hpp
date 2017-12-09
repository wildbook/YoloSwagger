#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsMiniSeriesDTO.hpp"
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsQueueType.hpp"
namespace leagueapi {
  struct LeaguesLcdsLeagueItemDTO_t {
    std::string playerOrTeamName;
    bool hotStreak;
    bool displayDecayWarning;
    LeaguesLcdsLeagueRank_t rank;
    std::string playerOrTeamId;
    uint64_t wins;
    uint64_t timeUntilInactivityStatusChanges;
    LeaguesLcdsQueueType_t queueType;
    LeaguesLcdsMiniSeriesDTO_t miniSeries;
    uint64_t losses;
    bool inactive;
    int32_t leaguePoints;
    bool veteran;
    uint64_t demotionWarning;
    int32_t apexDaysUntilDecay;
    std::string inactivityStatus;
    LeaguesLcdsLeagueTier_t tier;
    bool freshBlood;
    uint64_t previousDayLeaguePosition;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsLeagueItemDTO_t& v) {
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["hotStreak"] = v.hotStreak;
    j["displayDecayWarning"] = v.displayDecayWarning;
    j["rank"] = v.rank;
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["wins"] = v.wins;
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges;
    j["queueType"] = v.queueType;
    j["miniSeries"] = v.miniSeries;
    j["losses"] = v.losses;
    j["inactive"] = v.inactive;
    j["leaguePoints"] = v.leaguePoints;
    j["veteran"] = v.veteran;
    j["demotionWarning"] = v.demotionWarning;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["inactivityStatus"] = v.inactivityStatus;
    j["tier"] = v.tier;
    j["freshBlood"] = v.freshBlood;
    j["previousDayLeaguePosition"] = v.previousDayLeaguePosition;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsLeagueItemDTO_t& v) {
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.hotStreak = j.at("hotStreak").get<bool>();
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool>();
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank_t>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
    v.wins = j.at("wins").get<uint64_t>();
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>();
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType_t>();
    v.miniSeries = j.at("miniSeries").get<LeaguesLcdsMiniSeriesDTO_t>();
    v.losses = j.at("losses").get<uint64_t>();
    v.inactive = j.at("inactive").get<bool>();
    v.leaguePoints = j.at("leaguePoints").get<int32_t>();
    v.veteran = j.at("veteran").get<bool>();
    v.demotionWarning = j.at("demotionWarning").get<uint64_t>();
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>();
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
    v.freshBlood = j.at("freshBlood").get<bool>();
    v.previousDayLeaguePosition = j.at("previousDayLeaguePosition").get<uint64_t>();
  }
  inline std::string to_string(const LeaguesLcdsLeagueItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
