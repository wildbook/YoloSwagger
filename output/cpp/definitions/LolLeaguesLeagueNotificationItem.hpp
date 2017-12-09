#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesMiniseries.hpp"
#include "LolLeaguesLeagueEmblem.hpp"
namespace leagueapi {
  struct LolLeaguesLeagueNotificationItem_t {
    bool displayDecayWarning;
    uint64_t gameId;
    uint64_t wins;
    std::string queueType;
    uint64_t lastPlayed;
    uint64_t losses;
    int64_t points;
    uint64_t previousPosition;
    int64_t minGamesForSeeding;
    int64_t demotionWarning;
    std::string notifyReason;
    std::string tier;
    std::vector<LolLeaguesMiniseries_t> miniseriesResults;
    uint64_t timeLastDecayMessageShown;
    uint64_t seasonEndApexPosition;
    std::string seasonEndRank;
    std::string rank;
    std::string playerOrTeamId;
    uint64_t timeUntilInactivityStatusChanges;
    std::string seasonEndTier;
    std::vector<LolLeaguesLeagueEmblem_t> emblems;
    int64_t leaguePointsDelta;
    bool inactive;
    std::string playerOrTeamName;
    std::string leagueName;
    uint64_t miniseriesTimeLeftToPlayMillis;
    int64_t timeUntilDecay;
    uint64_t miniseriesWins;
    std::string inactivityStatus;
    uint64_t totalPlayed;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueNotificationItem_t& v) {
    j["displayDecayWarning"] = v.displayDecayWarning;
    j["gameId"] = v.gameId;
    j["wins"] = v.wins;
    j["queueType"] = v.queueType;
    j["lastPlayed"] = v.lastPlayed;
    j["losses"] = v.losses;
    j["points"] = v.points;
    j["previousPosition"] = v.previousPosition;
    j["minGamesForSeeding"] = v.minGamesForSeeding;
    j["demotionWarning"] = v.demotionWarning;
    j["notifyReason"] = v.notifyReason;
    j["tier"] = v.tier;
    j["miniseriesResults"] = v.miniseriesResults;
    j["timeLastDecayMessageShown"] = v.timeLastDecayMessageShown;
    j["seasonEndApexPosition"] = v.seasonEndApexPosition;
    j["seasonEndRank"] = v.seasonEndRank;
    j["rank"] = v.rank;
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges;
    j["seasonEndTier"] = v.seasonEndTier;
    j["emblems"] = v.emblems;
    j["leaguePointsDelta"] = v.leaguePointsDelta;
    j["inactive"] = v.inactive;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["leagueName"] = v.leagueName;
    j["miniseriesTimeLeftToPlayMillis"] = v.miniseriesTimeLeftToPlayMillis;
    j["timeUntilDecay"] = v.timeUntilDecay;
    j["miniseriesWins"] = v.miniseriesWins;
    j["inactivityStatus"] = v.inactivityStatus;
    j["totalPlayed"] = v.totalPlayed;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueNotificationItem_t& v) {
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.wins = j.at("wins").get<uint64_t>();
    v.queueType = j.at("queueType").get<std::string>();
    v.lastPlayed = j.at("lastPlayed").get<uint64_t>();
    v.losses = j.at("losses").get<uint64_t>();
    v.points = j.at("points").get<int64_t>();
    v.previousPosition = j.at("previousPosition").get<uint64_t>();
    v.minGamesForSeeding = j.at("minGamesForSeeding").get<int64_t>();
    v.demotionWarning = j.at("demotionWarning").get<int64_t>();
    v.notifyReason = j.at("notifyReason").get<std::string>();
    v.tier = j.at("tier").get<std::string>();
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries_t>>();
    v.timeLastDecayMessageShown = j.at("timeLastDecayMessageShown").get<uint64_t>();
    v.seasonEndApexPosition = j.at("seasonEndApexPosition").get<uint64_t>();
    v.seasonEndRank = j.at("seasonEndRank").get<std::string>();
    v.rank = j.at("rank").get<std::string>();
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>();
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>();
    v.seasonEndTier = j.at("seasonEndTier").get<std::string>();
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem_t>>();
    v.leaguePointsDelta = j.at("leaguePointsDelta").get<int64_t>();
    v.inactive = j.at("inactive").get<bool>();
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>();
    v.leagueName = j.at("leagueName").get<std::string>();
    v.miniseriesTimeLeftToPlayMillis = j.at("miniseriesTimeLeftToPlayMillis").get<uint64_t>();
    v.timeUntilDecay = j.at("timeUntilDecay").get<int64_t>();
    v.miniseriesWins = j.at("miniseriesWins").get<uint64_t>();
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>();
    v.totalPlayed = j.at("totalPlayed").get<uint64_t>();
  }
  inline std::string to_string(const LolLeaguesLeagueNotificationItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
