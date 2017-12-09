#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesMiniseries.hpp"
#include "LolLeaguesLeagueEmblem.hpp"
namespace leagueapi {
  struct LolLeaguesLeagueNotificationItem_t {
    int64_t minGamesForSeeding;
    uint64_t previousPosition;
    int64_t timeUntilDecay;
    std::string seasonEndRank;
    std::string tier;
    std::string inactivityStatus;
    uint64_t seasonEndApexPosition;
    uint64_t lastPlayed;
    std::vector<LolLeaguesLeagueEmblem_t> emblems;
    std::string rank;
    uint64_t timeUntilInactivityStatusChanges;
    std::string playerOrTeamId;
    std::string queueType;
    std::string seasonEndTier;
    uint64_t wins;
    uint64_t miniseriesTimeLeftToPlayMillis;
    std::string notifyReason;
    uint64_t gameId;
    std::string leagueName;
    uint64_t losses;
    uint64_t totalPlayed;
    uint64_t timeLastDecayMessageShown;
    int64_t points;
    int64_t demotionWarning;
    std::vector<LolLeaguesMiniseries_t> miniseriesResults;
    bool displayDecayWarning;
    std::string playerOrTeamName;
    int64_t leaguePointsDelta;
    bool inactive;
    uint64_t miniseriesWins;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueNotificationItem_t& v) {
    j["minGamesForSeeding"] = v.minGamesForSeeding;
    j["previousPosition"] = v.previousPosition;
    j["timeUntilDecay"] = v.timeUntilDecay;
    j["seasonEndRank"] = v.seasonEndRank;
    j["tier"] = v.tier;
    j["inactivityStatus"] = v.inactivityStatus;
    j["seasonEndApexPosition"] = v.seasonEndApexPosition;
    j["lastPlayed"] = v.lastPlayed;
    j["emblems"] = v.emblems;
    j["rank"] = v.rank;
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges;
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["queueType"] = v.queueType;
    j["seasonEndTier"] = v.seasonEndTier;
    j["wins"] = v.wins;
    j["miniseriesTimeLeftToPlayMillis"] = v.miniseriesTimeLeftToPlayMillis;
    j["notifyReason"] = v.notifyReason;
    j["gameId"] = v.gameId;
    j["leagueName"] = v.leagueName;
    j["losses"] = v.losses;
    j["totalPlayed"] = v.totalPlayed;
    j["timeLastDecayMessageShown"] = v.timeLastDecayMessageShown;
    j["points"] = v.points;
    j["demotionWarning"] = v.demotionWarning;
    j["miniseriesResults"] = v.miniseriesResults;
    j["displayDecayWarning"] = v.displayDecayWarning;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["leaguePointsDelta"] = v.leaguePointsDelta;
    j["inactive"] = v.inactive;
    j["miniseriesWins"] = v.miniseriesWins;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueNotificationItem_t& v) {
    v.minGamesForSeeding = j.at("minGamesForSeeding").get<int64_t>();
    v.previousPosition = j.at("previousPosition").get<uint64_t>();
    v.timeUntilDecay = j.at("timeUntilDecay").get<int64_t>();
    v.seasonEndRank = j.at("seasonEndRank").get<std::string>();
    v.tier = j.at("tier").get<std::string>();
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>();
    v.seasonEndApexPosition = j.at("seasonEndApexPosition").get<uint64_t>();
    v.lastPlayed = j.at("lastPlayed").get<uint64_t>();
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem_t>>();
    v.rank = j.at("rank").get<std::string>();
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
    v.queueType = j.at("queueType").get<std::string>();
    v.seasonEndTier = j.at("seasonEndTier").get<std::string>();
    v.wins = j.at("wins").get<uint64_t>();
    v.miniseriesTimeLeftToPlayMillis = j.at("miniseriesTimeLeftToPlayMillis").get<uint64_t>();
    v.notifyReason = j.at("notifyReason").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.losses = j.at("losses").get<uint64_t>();
    v.totalPlayed = j.at("totalPlayed").get<uint64_t>();
    v.timeLastDecayMessageShown = j.at("timeLastDecayMessageShown").get<uint64_t>();
    v.points = j.at("points").get<int64_t>();
    v.demotionWarning = j.at("demotionWarning").get<int64_t>();
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries_t>>();
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.leaguePointsDelta = j.at("leaguePointsDelta").get<int64_t>();
    v.inactive = j.at("inactive").get<bool>();
    v.miniseriesWins = j.at("miniseriesWins").get<uint64_t>();
  }
  inline std::string to_string(const LolLeaguesLeagueNotificationItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
