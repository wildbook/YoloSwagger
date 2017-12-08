#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLeagueEmblem.hpp"
#include "LolLeaguesMiniseries.hpp"
namespace leagueapi {
  struct LolLeaguesLeagueNotificationItem_t {
    bool inactive;
    std::string inactivityStatus;
    std::string seasonEndTier;
    uint64_t seasonEndApexPosition;
    uint64_t losses;
    std::string seasonEndRank;
    int64_t demotionWarning;
    std::string tier;
    uint64_t totalPlayed;
    int64_t minGamesForSeeding;
    int64_t timeUntilDecay;
    uint64_t gameId;
    uint64_t lastPlayed;
    std::vector<LolLeaguesLeagueEmblem_t> emblems;
    int64_t leaguePointsDelta;
    bool displayDecayWarning;
    std::string leagueName;
    std::vector<LolLeaguesMiniseries_t> miniseriesResults;
    int64_t points;
    std::string playerOrTeamName;
    std::string notifyReason;
    uint64_t timeUntilInactivityStatusChanges;
    uint64_t miniseriesTimeLeftToPlayMillis;
    uint64_t previousPosition;
    uint64_t wins;
    uint64_t miniseriesWins;
    uint64_t timeLastDecayMessageShown;
    std::string queueType;
    std::string rank;
    std::string playerOrTeamId;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueNotificationItem_t& v) {
    j["inactive"] = v.inactive;
    j["inactivityStatus"] = v.inactivityStatus;
    j["seasonEndTier"] = v.seasonEndTier;
    j["seasonEndApexPosition"] = v.seasonEndApexPosition;
    j["losses"] = v.losses;
    j["seasonEndRank"] = v.seasonEndRank;
    j["demotionWarning"] = v.demotionWarning;
    j["tier"] = v.tier;
    j["totalPlayed"] = v.totalPlayed;
    j["minGamesForSeeding"] = v.minGamesForSeeding;
    j["timeUntilDecay"] = v.timeUntilDecay;
    j["gameId"] = v.gameId;
    j["lastPlayed"] = v.lastPlayed;
    j["emblems"] = v.emblems;
    j["leaguePointsDelta"] = v.leaguePointsDelta;
    j["displayDecayWarning"] = v.displayDecayWarning;
    j["leagueName"] = v.leagueName;
    j["miniseriesResults"] = v.miniseriesResults;
    j["points"] = v.points;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["notifyReason"] = v.notifyReason;
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges;
    j["miniseriesTimeLeftToPlayMillis"] = v.miniseriesTimeLeftToPlayMillis;
    j["previousPosition"] = v.previousPosition;
    j["wins"] = v.wins;
    j["miniseriesWins"] = v.miniseriesWins;
    j["timeLastDecayMessageShown"] = v.timeLastDecayMessageShown;
    j["queueType"] = v.queueType;
    j["rank"] = v.rank;
    j["playerOrTeamId"] = v.playerOrTeamId;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueNotificationItem_t& v) {
    v.inactive = j.at("inactive").get<bool>();
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>();
    v.seasonEndTier = j.at("seasonEndTier").get<std::string>();
    v.seasonEndApexPosition = j.at("seasonEndApexPosition").get<uint64_t>();
    v.losses = j.at("losses").get<uint64_t>();
    v.seasonEndRank = j.at("seasonEndRank").get<std::string>();
    v.demotionWarning = j.at("demotionWarning").get<int64_t>();
    v.tier = j.at("tier").get<std::string>();
    v.totalPlayed = j.at("totalPlayed").get<uint64_t>();
    v.minGamesForSeeding = j.at("minGamesForSeeding").get<int64_t>();
    v.timeUntilDecay = j.at("timeUntilDecay").get<int64_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.lastPlayed = j.at("lastPlayed").get<uint64_t>();
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem_t>>();
    v.leaguePointsDelta = j.at("leaguePointsDelta").get<int64_t>();
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries_t>>();
    v.points = j.at("points").get<int64_t>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.notifyReason = j.at("notifyReason").get<std::string>();
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>();
    v.miniseriesTimeLeftToPlayMillis = j.at("miniseriesTimeLeftToPlayMillis").get<uint64_t>();
    v.previousPosition = j.at("previousPosition").get<uint64_t>();
    v.wins = j.at("wins").get<uint64_t>();
    v.miniseriesWins = j.at("miniseriesWins").get<uint64_t>();
    v.timeLastDecayMessageShown = j.at("timeLastDecayMessageShown").get<uint64_t>();
    v.queueType = j.at("queueType").get<std::string>();
    v.rank = j.at("rank").get<std::string>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
  }
  inline std::string to_string(const LolLeaguesLeagueNotificationItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
