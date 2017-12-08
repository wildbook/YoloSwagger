#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsMiniSeriesDTO.hpp"
namespace leagueapi {
  struct LolLeaguesSignedLeagueItemDTO_t {
    std::string_t inactivityStatus;
    uint64_t_t previousDayLeaguePosition;
    LeaguesLcdsLeagueRank_t rank;
    LeaguesLcdsQueueType_t queueType;
    bool_t hotStreak;
    LeaguesLcdsMiniSeriesDTO_t miniSeries;
    int32_t_t apexDaysUntilDecay;
    bool_t veteran;
    uint64_t_t losses;
    std::string_t jwt;
    bool_t freshBlood;
    uint64_t_t timeUntilInactivityStatusChanges;
    std::string_t playerOrTeamName;
    bool_t inactive;
    std::string_t playerOrTeamId;
    uint64_t_t demotionWarning;
    uint64_t_t wins;
    LeaguesLcdsLeagueTier_t tier;
    bool_t displayDecayWarning;
    int32_t_t leaguePoints;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesSignedLeagueItemDTO_t& v) {
    j["inactivityStatus"] = v.inactivityStatus;
    j["previousDayLeaguePosition"] = v.previousDayLeaguePosition;
    j["rank"] = v.rank;
    j["queueType"] = v.queueType;
    j["hotStreak"] = v.hotStreak;
    j["miniSeries"] = v.miniSeries;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["veteran"] = v.veteran;
    j["losses"] = v.losses;
    j["jwt"] = v.jwt;
    j["freshBlood"] = v.freshBlood;
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["inactive"] = v.inactive;
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["demotionWarning"] = v.demotionWarning;
    j["wins"] = v.wins;
    j["tier"] = v.tier;
    j["displayDecayWarning"] = v.displayDecayWarning;
    j["leaguePoints"] = v.leaguePoints;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesSignedLeagueItemDTO_t& v) {
    v.inactivityStatus = j.at("inactivityStatus").get<std::string_t>();
    v.previousDayLeaguePosition = j.at("previousDayLeaguePosition").get<uint64_t_t>();
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank_t>();
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType_t>();
    v.hotStreak = j.at("hotStreak").get<bool_t>();
    v.miniSeries = j.at("miniSeries").get<LeaguesLcdsMiniSeriesDTO_t>();
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t_t>();
    v.veteran = j.at("veteran").get<bool_t>();
    v.losses = j.at("losses").get<uint64_t_t>();
    v.jwt = j.at("jwt").get<std::string_t>();
    v.freshBlood = j.at("freshBlood").get<bool_t>();
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t_t>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string_t>();
    v.inactive = j.at("inactive").get<bool_t>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string_t>();
    v.demotionWarning = j.at("demotionWarning").get<uint64_t_t>();
    v.wins = j.at("wins").get<uint64_t_t>();
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier_t>();
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool_t>();
    v.leaguePoints = j.at("leaguePoints").get<int32_t_t>();
  }
  inline std::string to_string(const LolLeaguesSignedLeagueItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
