#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsMiniSeriesDTO.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsQueueType.hpp"
namespace leagueapi {
  struct LeaguesLcdsLeagueItemDTO_t {
    bool freshBlood;
    std::string inactivityStatus;
    int32_t leaguePoints;
    LeaguesLcdsQueueType_t queueType;
    std::string playerOrTeamName;
    LeaguesLcdsMiniSeriesDTO_t miniSeries;
    uint64_t timeUntilInactivityStatusChanges;
    uint64_t previousDayLeaguePosition;
    bool inactive;
    bool hotStreak;
    uint64_t losses;
    int32_t apexDaysUntilDecay;
    std::string playerOrTeamId;
    bool displayDecayWarning;
    LeaguesLcdsLeagueTier_t tier;
    uint64_t wins;
    LeaguesLcdsLeagueRank_t rank;
    bool veteran;
    uint64_t demotionWarning;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsLeagueItemDTO_t& v) {
    j["freshBlood"] = v.freshBlood;
    j["inactivityStatus"] = v.inactivityStatus;
    j["leaguePoints"] = v.leaguePoints;
    j["queueType"] = v.queueType;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["miniSeries"] = v.miniSeries;
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges;
    j["previousDayLeaguePosition"] = v.previousDayLeaguePosition;
    j["inactive"] = v.inactive;
    j["hotStreak"] = v.hotStreak;
    j["losses"] = v.losses;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["displayDecayWarning"] = v.displayDecayWarning;
    j["tier"] = v.tier;
    j["wins"] = v.wins;
    j["rank"] = v.rank;
    j["veteran"] = v.veteran;
    j["demotionWarning"] = v.demotionWarning;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsLeagueItemDTO_t& v) {
    v.freshBlood = j.at("freshBlood").get<bool>();
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>();
    v.leaguePoints = j.at("leaguePoints").get<int32_t>();
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType_t>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.miniSeries = j.at("miniSeries").get<LeaguesLcdsMiniSeriesDTO_t>();
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>();
    v.previousDayLeaguePosition = j.at("previousDayLeaguePosition").get<uint64_t>();
    v.inactive = j.at("inactive").get<bool>();
    v.hotStreak = j.at("hotStreak").get<bool>();
    v.losses = j.at("losses").get<uint64_t>();
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
    v.wins = j.at("wins").get<uint64_t>();
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank_t>();
    v.veteran = j.at("veteran").get<bool>();
    v.demotionWarning = j.at("demotionWarning").get<uint64_t>();
  }
  inline std::string to_string(const LeaguesLcdsLeagueItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
