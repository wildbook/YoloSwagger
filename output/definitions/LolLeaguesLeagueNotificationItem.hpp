#ifndef SWAGGER_TYPES_LolLeaguesLeagueNotificationItem_HPP
#define SWAGGER_TYPES_LolLeaguesLeagueNotificationItem_HPP
#include <json.hpp>
#include "LolLeaguesMiniseries.hpp"
#include "LolLeaguesLeagueEmblem.hpp"
namespace leagueapi {
  // 
  struct LolLeaguesLeagueNotificationItem {
    // 
    int64_t demotionWarning;
    // 
    bool displayDecayWarning;
    // 
    std::vector<LolLeaguesLeagueEmblem> emblems;
    // 
    uint64_t gameId;
    // 
    bool inactive;
    // 
    std::string inactivityStatus;
    // 
    uint64_t lastPlayed;
    // 
    std::string leagueName;
    // 
    int64_t leaguePointsDelta;
    // 
    uint64_t losses;
    // 
    int64_t minGamesForSeeding;
    // 
    std::vector<LolLeaguesMiniseries> miniseriesResults;
    // 
    uint64_t miniseriesTimeLeftToPlayMillis;
    // 
    uint64_t miniseriesWins;
    // 
    std::string notifyReason;
    // 
    std::string playerOrTeamId;
    // 
    std::string playerOrTeamName;
    // 
    int64_t points;
    // 
    uint64_t previousPosition;
    // 
    std::string queueType;
    // 
    std::string rank;
    // 
    uint64_t seasonEndApexPosition;
    // 
    std::string seasonEndRank;
    // 
    std::string seasonEndTier;
    // 
    std::string tier;
    // 
    uint64_t timeLastDecayMessageShown;
    // 
    int64_t timeUntilDecay;
    // 
    uint64_t timeUntilInactivityStatusChanges;
    // 
    uint64_t totalPlayed;
    // 
    uint64_t wins;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueNotificationItem& v) {
    j["demotionWarning"] = v.demotionWarning;
    j["displayDecayWarning"] = v.displayDecayWarning;
    j["emblems"] = v.emblems;
    j["gameId"] = v.gameId;
    j["inactive"] = v.inactive;
    j["inactivityStatus"] = v.inactivityStatus;
    j["lastPlayed"] = v.lastPlayed;
    j["leagueName"] = v.leagueName;
    j["leaguePointsDelta"] = v.leaguePointsDelta;
    j["losses"] = v.losses;
    j["minGamesForSeeding"] = v.minGamesForSeeding;
    j["miniseriesResults"] = v.miniseriesResults;
    j["miniseriesTimeLeftToPlayMillis"] = v.miniseriesTimeLeftToPlayMillis;
    j["miniseriesWins"] = v.miniseriesWins;
    j["notifyReason"] = v.notifyReason;
    j["playerOrTeamId"] = v.playerOrTeamId;
    j["playerOrTeamName"] = v.playerOrTeamName;
    j["points"] = v.points;
    j["previousPosition"] = v.previousPosition;
    j["queueType"] = v.queueType;
    j["rank"] = v.rank;
    j["seasonEndApexPosition"] = v.seasonEndApexPosition;
    j["seasonEndRank"] = v.seasonEndRank;
    j["seasonEndTier"] = v.seasonEndTier;
    j["tier"] = v.tier;
    j["timeLastDecayMessageShown"] = v.timeLastDecayMessageShown;
    j["timeUntilDecay"] = v.timeUntilDecay;
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges;
    j["totalPlayed"] = v.totalPlayed;
    j["wins"] = v.wins;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueNotificationItem& v) {
    v.demotionWarning = j.at("demotionWarning").get<int64_t>;
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool>;
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem>>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.inactive = j.at("inactive").get<bool>;
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>;
    v.lastPlayed = j.at("lastPlayed").get<uint64_t>;
    v.leagueName = j.at("leagueName").get<std::string>;
    v.leaguePointsDelta = j.at("leaguePointsDelta").get<int64_t>;
    v.losses = j.at("losses").get<uint64_t>;
    v.minGamesForSeeding = j.at("minGamesForSeeding").get<int64_t>;
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries>>;
    v.miniseriesTimeLeftToPlayMillis = j.at("miniseriesTimeLeftToPlayMillis").get<uint64_t>;
    v.miniseriesWins = j.at("miniseriesWins").get<uint64_t>;
    v.notifyReason = j.at("notifyReason").get<std::string>;
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>;
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>;
    v.points = j.at("points").get<int64_t>;
    v.previousPosition = j.at("previousPosition").get<uint64_t>;
    v.queueType = j.at("queueType").get<std::string>;
    v.rank = j.at("rank").get<std::string>;
    v.seasonEndApexPosition = j.at("seasonEndApexPosition").get<uint64_t>;
    v.seasonEndRank = j.at("seasonEndRank").get<std::string>;
    v.seasonEndTier = j.at("seasonEndTier").get<std::string>;
    v.tier = j.at("tier").get<std::string>;
    v.timeLastDecayMessageShown = j.at("timeLastDecayMessageShown").get<uint64_t>;
    v.timeUntilDecay = j.at("timeUntilDecay").get<int64_t>;
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>;
    v.totalPlayed = j.at("totalPlayed").get<uint64_t>;
    v.wins = j.at("wins").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeagueNotificationItem_HPP
