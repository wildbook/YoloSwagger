#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsMiniSeriesDTO.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
namespace leagueapi {
  struct LolLeaguesSignedLeagueItemDTO_t {
    bool inactive;
    bool displayDecayWarning;
    uint64_t wins;
    uint64_t losses;
    std::string playerOrTeamName;
    bool veteran;
    uint64_t demotionWarning;
    uint64_t timeUntilInactivityStatusChanges;
    LeaguesLcdsLeagueTier_t tier;
    LeaguesLcdsMiniSeriesDTO_t miniSeries;
    std::string jwt;
    int32_t apexDaysUntilDecay;
    int32_t leaguePoints;
    uint64_t previousDayLeaguePosition;
    bool hotStreak;
    LeaguesLcdsQueueType_t queueType;
    std::string inactivityStatus;
    LeaguesLcdsLeagueRank_t rank;
    std::string playerOrTeamId;
    bool freshBlood;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesSignedLeagueItemDTO_t& v) {
    j["inactive"] = v.inactive;
    j["displayDecayWarning"] = v.displayDecayWarning;
    j["wins"] = v.wins;
    j["losses"] = v.losses;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["veteran"] = v.veteran;
    j["demotionWarning"] = v.demotionWarning;
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges;
    j["tier"] = v.tier;
    j["miniSeries"] = v.miniSeries;
    j["jwt"] = v.jwt;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["leaguePoints"] = v.leaguePoints;
    j["previousDayLeaguePosition"] = v.previousDayLeaguePosition;
    j["hotStreak"] = v.hotStreak;
    j["queueType"] = v.queueType;
    j["inactivityStatus"] = v.inactivityStatus;
    j["rank"] = v.rank;
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["freshBlood"] = v.freshBlood;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesSignedLeagueItemDTO_t& v) {
    v.inactive = j.at("inactive").get<bool>();
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool>();
    v.wins = j.at("wins").get<uint64_t>();
    v.losses = j.at("losses").get<uint64_t>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.veteran = j.at("veteran").get<bool>();
    v.demotionWarning = j.at("demotionWarning").get<uint64_t>();
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
    v.miniSeries = j.at("miniSeries").get<LeaguesLcdsMiniSeriesDTO_t>();
    v.jwt = j.at("jwt").get<std::string>();
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>();
    v.leaguePoints = j.at("leaguePoints").get<int32_t>();
    v.previousDayLeaguePosition = j.at("previousDayLeaguePosition").get<uint64_t>();
    v.hotStreak = j.at("hotStreak").get<bool>();
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType_t>();
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>();
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank_t>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
    v.freshBlood = j.at("freshBlood").get<bool>();
  }
  inline std::string to_string(const LolLeaguesSignedLeagueItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
