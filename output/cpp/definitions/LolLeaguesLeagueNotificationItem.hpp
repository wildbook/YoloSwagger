#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesMiniseries.hpp"
#include "LolLeaguesLeagueEmblem.hpp"
namespace leagueapi {
  struct LolLeaguesLeagueNotificationItem_t {
    std::string_t queueType;
    uint64_t_t timeUntilInactivityStatusChanges;
    uint64_t_t lastPlayed;
    uint64_t_t previousPosition;
    std::string_t playerOrTeamName;
    bool_t inactive;
    uint64_t_t miniseriesTimeLeftToPlayMillis;
    uint64_t_t timeLastDecayMessageShown;
    std::vector<LolLeaguesLeagueEmblem_t> emblems;
    std::string_t leagueName;
    bool_t displayDecayWarning;
    uint64_t_t totalPlayed;
    uint64_t_t miniseriesWins;
    std::string_t inactivityStatus;
    uint64_t_t gameId;
    int64_t_t minGamesForSeeding;
    std::vector<LolLeaguesMiniseries_t> miniseriesResults;
    std::string_t rank;
    int64_t_t demotionWarning;
    int64_t_t timeUntilDecay;
    std::string_t tier;
    std::string_t notifyReason;
    uint64_t_t seasonEndApexPosition;
    std::string_t seasonEndRank;
    std::string_t seasonEndTier;
    uint64_t_t wins;
    uint64_t_t losses;
    std::string_t playerOrTeamId;
    int64_t_t leaguePointsDelta;
    int64_t_t points;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueNotificationItem_t& v) {
    j["queueType"] = v.queueType;
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges;
    j["lastPlayed"] = v.lastPlayed;
    j["previousPosition"] = v.previousPosition;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["inactive"] = v.inactive;
    j["miniseriesTimeLeftToPlayMillis"] = v.miniseriesTimeLeftToPlayMillis;
    j["timeLastDecayMessageShown"] = v.timeLastDecayMessageShown;
    j["emblems"] = v.emblems;
    j["leagueName"] = v.leagueName;
    j["displayDecayWarning"] = v.displayDecayWarning;
    j["totalPlayed"] = v.totalPlayed;
    j["miniseriesWins"] = v.miniseriesWins;
    j["inactivityStatus"] = v.inactivityStatus;
    j["gameId"] = v.gameId;
    j["minGamesForSeeding"] = v.minGamesForSeeding;
    j["miniseriesResults"] = v.miniseriesResults;
    j["rank"] = v.rank;
    j["demotionWarning"] = v.demotionWarning;
    j["timeUntilDecay"] = v.timeUntilDecay;
    j["tier"] = v.tier;
    j["notifyReason"] = v.notifyReason;
    j["seasonEndApexPosition"] = v.seasonEndApexPosition;
    j["seasonEndRank"] = v.seasonEndRank;
    j["seasonEndTier"] = v.seasonEndTier;
    j["wins"] = v.wins;
    j["losses"] = v.losses;
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["leaguePointsDelta"] = v.leaguePointsDelta;
    j["points"] = v.points;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueNotificationItem_t& v) {
    v.queueType = j.at("queueType").get<std::string_t>();
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t_t>();
    v.lastPlayed = j.at("lastPlayed").get<uint64_t_t>();
    v.previousPosition = j.at("previousPosition").get<uint64_t_t>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string_t>();
    v.inactive = j.at("inactive").get<bool_t>();
    v.miniseriesTimeLeftToPlayMillis = j.at("miniseriesTimeLeftToPlayMillis").get<uint64_t_t>();
    v.timeLastDecayMessageShown = j.at("timeLastDecayMessageShown").get<uint64_t_t>();
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem_t>>();
    v.leagueName = j.at("leagueName").get<std::string_t>();
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool_t>();
    v.totalPlayed = j.at("totalPlayed").get<uint64_t_t>();
    v.miniseriesWins = j.at("miniseriesWins").get<uint64_t_t>();
    v.inactivityStatus = j.at("inactivityStatus").get<std::string_t>();
    v.gameId = j.at("gameId").get<uint64_t_t>();
    v.minGamesForSeeding = j.at("minGamesForSeeding").get<int64_t_t>();
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries_t>>();
    v.rank = j.at("rank").get<std::string_t>();
    v.demotionWarning = j.at("demotionWarning").get<int64_t_t>();
    v.timeUntilDecay = j.at("timeUntilDecay").get<int64_t_t>();
    v.tier = j.at("tier").get<std::string_t>();
    v.notifyReason = j.at("notifyReason").get<std::string_t>();
    v.seasonEndApexPosition = j.at("seasonEndApexPosition").get<uint64_t_t>();
    v.seasonEndRank = j.at("seasonEndRank").get<std::string_t>();
    v.seasonEndTier = j.at("seasonEndTier").get<std::string_t>();
    v.wins = j.at("wins").get<uint64_t_t>();
    v.losses = j.at("losses").get<uint64_t_t>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string_t>();
    v.leaguePointsDelta = j.at("leaguePointsDelta").get<int64_t_t>();
    v.points = j.at("points").get<int64_t_t>();
  }
  inline std::string to_string(const LolLeaguesLeagueNotificationItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
