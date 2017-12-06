#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesMiniseries.hpp"
#include "LolLeaguesLeagueEmblem.hpp"
namespace leagueapi {
  struct LolLeaguesLeagueNotificationItem_t {
    std::string rank;
    std::string seasonEndRank;
    uint64_t previousPosition;
    std::string tier;
    std::string queueType;
    int64_t timeUntilDecay;
    bool displayDecayWarning;
    uint64_t miniseriesTimeLeftToPlayMillis;
    std::string seasonEndTier;
    uint64_t lastPlayed;
    std::string playerOrTeamName;
    int64_t minGamesForSeeding;
    uint64_t totalPlayed;
    std::string leagueName;
    std::string notifyReason;
    uint64_t timeUntilInactivityStatusChanges;
    std::string playerOrTeamId;
    uint64_t miniseriesWins;
    uint64_t wins;
    bool inactive;
    int64_t demotionWarning;
    uint64_t gameId;
    std::vector<LolLeaguesLeagueEmblem_t> emblems;
    uint64_t timeLastDecayMessageShown;
    uint64_t seasonEndApexPosition;
    int64_t points;
    uint64_t losses;
    std::vector<LolLeaguesMiniseries_t> miniseriesResults;
    std::string inactivityStatus;
    int64_t leaguePointsDelta;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueNotificationItem_t& v) {
    j["rank"] = v.rank;
    j["seasonEndRank"] = v.seasonEndRank;
    j["previousPosition"] = v.previousPosition;
    j["tier"] = v.tier;
    j["queueType"] = v.queueType;
    j["timeUntilDecay"] = v.timeUntilDecay;
    j["displayDecayWarning"] = v.displayDecayWarning;
    j["miniseriesTimeLeftToPlayMillis"] = v.miniseriesTimeLeftToPlayMillis;
    j["seasonEndTier"] = v.seasonEndTier;
    j["lastPlayed"] = v.lastPlayed;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["minGamesForSeeding"] = v.minGamesForSeeding;
    j["totalPlayed"] = v.totalPlayed;
    j["leagueName"] = v.leagueName;
    j["notifyReason"] = v.notifyReason;
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges;
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["miniseriesWins"] = v.miniseriesWins;
    j["wins"] = v.wins;
    j["inactive"] = v.inactive;
    j["demotionWarning"] = v.demotionWarning;
    j["gameId"] = v.gameId;
    j["emblems"] = v.emblems;
    j["timeLastDecayMessageShown"] = v.timeLastDecayMessageShown;
    j["seasonEndApexPosition"] = v.seasonEndApexPosition;
    j["points"] = v.points;
    j["losses"] = v.losses;
    j["miniseriesResults"] = v.miniseriesResults;
    j["inactivityStatus"] = v.inactivityStatus;
    j["leaguePointsDelta"] = v.leaguePointsDelta;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueNotificationItem_t& v) {
    v.rank = j.at("rank").get<std::string>();
    v.seasonEndRank = j.at("seasonEndRank").get<std::string>();
    v.previousPosition = j.at("previousPosition").get<uint64_t>();
    v.tier = j.at("tier").get<std::string>();
    v.queueType = j.at("queueType").get<std::string>();
    v.timeUntilDecay = j.at("timeUntilDecay").get<int64_t>();
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool>();
    v.miniseriesTimeLeftToPlayMillis = j.at("miniseriesTimeLeftToPlayMillis").get<uint64_t>();
    v.seasonEndTier = j.at("seasonEndTier").get<std::string>();
    v.lastPlayed = j.at("lastPlayed").get<uint64_t>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.minGamesForSeeding = j.at("minGamesForSeeding").get<int64_t>();
    v.totalPlayed = j.at("totalPlayed").get<uint64_t>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.notifyReason = j.at("notifyReason").get<std::string>();
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
    v.miniseriesWins = j.at("miniseriesWins").get<uint64_t>();
    v.wins = j.at("wins").get<uint64_t>();
    v.inactive = j.at("inactive").get<bool>();
    v.demotionWarning = j.at("demotionWarning").get<int64_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem_t>>();
    v.timeLastDecayMessageShown = j.at("timeLastDecayMessageShown").get<uint64_t>();
    v.seasonEndApexPosition = j.at("seasonEndApexPosition").get<uint64_t>();
    v.points = j.at("points").get<int64_t>();
    v.losses = j.at("losses").get<uint64_t>();
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries_t>>();
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>();
    v.leaguePointsDelta = j.at("leaguePointsDelta").get<int64_t>();
  }
}
