#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesMiniseries.hpp"
#include "LolLeaguesLeagueEmblem.hpp"
namespace leagueapi {
  struct LolLeaguesLeagueNotificationItem_t {
    uint64_t previousPosition;
    uint64_t totalPlayed;
    std::string inactivityStatus;
    std::string seasonEndTier;
    int64_t timeUntilDecay;
    std::string queueType;
    uint64_t miniseriesTimeLeftToPlayMillis;
    uint64_t timeUntilInactivityStatusChanges;
    uint64_t gameId;
    bool displayDecayWarning;
    std::string playerOrTeamName;
    std::string tier;
    std::string leagueName;
    std::string notifyReason;
    int64_t leaguePointsDelta;
    uint64_t wins;
    uint64_t lastPlayed;
    int64_t minGamesForSeeding;
    std::vector<LolLeaguesLeagueEmblem_t> emblems;
    bool inactive;
    uint64_t miniseriesWins;
    int64_t points;
    std::vector<LolLeaguesMiniseries_t> miniseriesResults;
    uint64_t seasonEndApexPosition;
    uint64_t timeLastDecayMessageShown;
    uint64_t losses;
    std::string playerOrTeamId;
    std::string rank;
    std::string seasonEndRank;
    int64_t demotionWarning;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueNotificationItem_t& v) {
    j["previousPosition"] = v.previousPosition;
    j["totalPlayed"] = v.totalPlayed;
    j["inactivityStatus"] = v.inactivityStatus;
    j["seasonEndTier"] = v.seasonEndTier;
    j["timeUntilDecay"] = v.timeUntilDecay;
    j["queueType"] = v.queueType;
    j["miniseriesTimeLeftToPlayMillis"] = v.miniseriesTimeLeftToPlayMillis;
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges;
    j["gameId"] = v.gameId;
    j["displayDecayWarning"] = v.displayDecayWarning;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["tier"] = v.tier;
    j["leagueName"] = v.leagueName;
    j["notifyReason"] = v.notifyReason;
    j["leaguePointsDelta"] = v.leaguePointsDelta;
    j["wins"] = v.wins;
    j["lastPlayed"] = v.lastPlayed;
    j["minGamesForSeeding"] = v.minGamesForSeeding;
    j["emblems"] = v.emblems;
    j["inactive"] = v.inactive;
    j["miniseriesWins"] = v.miniseriesWins;
    j["points"] = v.points;
    j["miniseriesResults"] = v.miniseriesResults;
    j["seasonEndApexPosition"] = v.seasonEndApexPosition;
    j["timeLastDecayMessageShown"] = v.timeLastDecayMessageShown;
    j["losses"] = v.losses;
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["rank"] = v.rank;
    j["seasonEndRank"] = v.seasonEndRank;
    j["demotionWarning"] = v.demotionWarning;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueNotificationItem_t& v) {
    v.previousPosition = j.at("previousPosition").get<uint64_t>();
    v.totalPlayed = j.at("totalPlayed").get<uint64_t>();
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>();
    v.seasonEndTier = j.at("seasonEndTier").get<std::string>();
    v.timeUntilDecay = j.at("timeUntilDecay").get<int64_t>();
    v.queueType = j.at("queueType").get<std::string>();
    v.miniseriesTimeLeftToPlayMillis = j.at("miniseriesTimeLeftToPlayMillis").get<uint64_t>();
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.tier = j.at("tier").get<std::string>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.notifyReason = j.at("notifyReason").get<std::string>();
    v.leaguePointsDelta = j.at("leaguePointsDelta").get<int64_t>();
    v.wins = j.at("wins").get<uint64_t>();
    v.lastPlayed = j.at("lastPlayed").get<uint64_t>();
    v.minGamesForSeeding = j.at("minGamesForSeeding").get<int64_t>();
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem_t>>();
    v.inactive = j.at("inactive").get<bool>();
    v.miniseriesWins = j.at("miniseriesWins").get<uint64_t>();
    v.points = j.at("points").get<int64_t>();
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries_t>>();
    v.seasonEndApexPosition = j.at("seasonEndApexPosition").get<uint64_t>();
    v.timeLastDecayMessageShown = j.at("timeLastDecayMessageShown").get<uint64_t>();
    v.losses = j.at("losses").get<uint64_t>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
    v.rank = j.at("rank").get<std::string>();
    v.seasonEndRank = j.at("seasonEndRank").get<std::string>();
    v.demotionWarning = j.at("demotionWarning").get<int64_t>();
  }
  inline std::string to_string(const LolLeaguesLeagueNotificationItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
