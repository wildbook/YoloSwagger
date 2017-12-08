#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameEndOfGameTeam.hpp"
#include "LolEndOfGameEndOfGameTeamBoost.hpp"
#include "LolEndOfGameEndOfGamePoints.hpp"
namespace leagueapi {
  struct LolEndOfGameEndOfGameStats_t {
    int32_t skinId;
    uint64_t reportGameId;
    int32_t gameLength;
    int32_t boostIpEarned;
    bool teamEarlySurrendered;
    bool imbalancedTeamsNoPoints;
    int32_t loyaltyBoostIpEarned;
    bool ranked;
    LolEndOfGameEndOfGamePoints_t rerollData;
    int32_t firstWinBonus;
    int32_t queueBonusEarned;
    int32_t rpEarned;
    std::string myTeamStatus;
    std::vector<LolEndOfGameEndOfGameTeam_t> teams;
    std::vector<std::string> gameMutators;
    int32_t missionsXpEarned;
    int32_t experienceEarned;
    int32_t completionBonusPoints;
    int32_t customMinutesLeftToday;
    int32_t timeUntilNextFirstWinBonus;
    bool invalid;
    int32_t ipEarned;
    bool causedEarlySurrender;
    uint64_t accountId;
    uint64_t userId;
    int32_t championId;
    int32_t customMsecsUntilReset;
    std::string gameMode;
    int32_t skinIndex;
    std::string gameType;
    int32_t boostXpEarned;
    int32_t coOpVsAiMsecsUntilReset;
    uint64_t currentLevel;
    std::string queueType;
    int32_t eloChange;
    int32_t partyRewardsBonusIpEarned;
    std::string summonerName;
    nlohmann::json pointsPenalties;
    bool sendStatsToTournamentProvider;
    bool gameEndedInEarlySurrender;
    bool earlySurrenderAccomplice;
    int32_t experienceTotal;
    uint64_t previousXpTotal;
    int32_t basePoints;
    std::vector<int32_t> newSpells;
    int32_t coOpVsAiMinutesLeftToday;
    std::string roomName;
    int32_t ipTotal;
    uint64_t nextLevelXp;
    std::string difficulty;
    std::optional<LolEndOfGameEndOfGameTeamBoost_t> teamBoost;
    bool leveledUp;
    int32_t battleBoostIpEarned;
    uint64_t summonerId;
    int32_t talentPointsGained;
    int32_t odinBonusIp;
    uint64_t gameId;
    uint64_t previousLevel;
    int32_t elo;
    int32_t globalBoostXpEarned;
    int32_t loyaltyBoostXpEarned;
    std::string roomPassword;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameEndOfGameStats_t& v) {
    j["skinId"] = v.skinId;
    j["reportGameId"] = v.reportGameId;
    j["gameLength"] = v.gameLength;
    j["boostIpEarned"] = v.boostIpEarned;
    j["teamEarlySurrendered"] = v.teamEarlySurrendered;
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints;
    j["loyaltyBoostIpEarned"] = v.loyaltyBoostIpEarned;
    j["ranked"] = v.ranked;
    j["rerollData"] = v.rerollData;
    j["firstWinBonus"] = v.firstWinBonus;
    j["queueBonusEarned"] = v.queueBonusEarned;
    j["rpEarned"] = v.rpEarned;
    j["myTeamStatus"] = v.myTeamStatus;
    j["teams"] = v.teams;
    j["gameMutators"] = v.gameMutators;
    j["missionsXpEarned"] = v.missionsXpEarned;
    j["experienceEarned"] = v.experienceEarned;
    j["completionBonusPoints"] = v.completionBonusPoints;
    j["customMinutesLeftToday"] = v.customMinutesLeftToday;
    j["timeUntilNextFirstWinBonus"] = v.timeUntilNextFirstWinBonus;
    j["invalid"] = v.invalid;
    j["ipEarned"] = v.ipEarned;
    j["causedEarlySurrender"] = v.causedEarlySurrender;
    j["accountId"] = v.accountId;
    j["userId"] = v.userId;
    j["championId"] = v.championId;
    j["customMsecsUntilReset"] = v.customMsecsUntilReset;
    j["gameMode"] = v.gameMode;
    j["skinIndex"] = v.skinIndex;
    j["gameType"] = v.gameType;
    j["boostXpEarned"] = v.boostXpEarned;
    j["coOpVsAiMsecsUntilReset"] = v.coOpVsAiMsecsUntilReset;
    j["currentLevel"] = v.currentLevel;
    j["queueType"] = v.queueType;
    j["eloChange"] = v.eloChange;
    j["partyRewardsBonusIpEarned"] = v.partyRewardsBonusIpEarned;
    j["summonerName"] = v.summonerName;
    j["pointsPenalties"] = v.pointsPenalties;
    j["sendStatsToTournamentProvider"] = v.sendStatsToTournamentProvider;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["earlySurrenderAccomplice"] = v.earlySurrenderAccomplice;
    j["experienceTotal"] = v.experienceTotal;
    j["previousXpTotal"] = v.previousXpTotal;
    j["basePoints"] = v.basePoints;
    j["newSpells"] = v.newSpells;
    j["coOpVsAiMinutesLeftToday"] = v.coOpVsAiMinutesLeftToday;
    j["roomName"] = v.roomName;
    j["ipTotal"] = v.ipTotal;
    j["nextLevelXp"] = v.nextLevelXp;
    j["difficulty"] = v.difficulty;
    if(v.teamBoost)
      j["teamBoost"] = *v.teamBoost;
    j["leveledUp"] = v.leveledUp;
    j["battleBoostIpEarned"] = v.battleBoostIpEarned;
    j["summonerId"] = v.summonerId;
    j["talentPointsGained"] = v.talentPointsGained;
    j["odinBonusIp"] = v.odinBonusIp;
    j["gameId"] = v.gameId;
    j["previousLevel"] = v.previousLevel;
    j["elo"] = v.elo;
    j["globalBoostXpEarned"] = v.globalBoostXpEarned;
    j["loyaltyBoostXpEarned"] = v.loyaltyBoostXpEarned;
    j["roomPassword"] = v.roomPassword;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameEndOfGameStats_t& v) {
    v.skinId = j.at("skinId").get<int32_t>();
    v.reportGameId = j.at("reportGameId").get<uint64_t>();
    v.gameLength = j.at("gameLength").get<int32_t>();
    v.boostIpEarned = j.at("boostIpEarned").get<int32_t>();
    v.teamEarlySurrendered = j.at("teamEarlySurrendered").get<bool>();
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>();
    v.loyaltyBoostIpEarned = j.at("loyaltyBoostIpEarned").get<int32_t>();
    v.ranked = j.at("ranked").get<bool>();
    v.rerollData = j.at("rerollData").get<LolEndOfGameEndOfGamePoints_t>();
    v.firstWinBonus = j.at("firstWinBonus").get<int32_t>();
    v.queueBonusEarned = j.at("queueBonusEarned").get<int32_t>();
    v.rpEarned = j.at("rpEarned").get<int32_t>();
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>();
    v.teams = j.at("teams").get<std::vector<LolEndOfGameEndOfGameTeam_t>>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.missionsXpEarned = j.at("missionsXpEarned").get<int32_t>();
    v.experienceEarned = j.at("experienceEarned").get<int32_t>();
    v.completionBonusPoints = j.at("completionBonusPoints").get<int32_t>();
    v.customMinutesLeftToday = j.at("customMinutesLeftToday").get<int32_t>();
    v.timeUntilNextFirstWinBonus = j.at("timeUntilNextFirstWinBonus").get<int32_t>();
    v.invalid = j.at("invalid").get<bool>();
    v.ipEarned = j.at("ipEarned").get<int32_t>();
    v.causedEarlySurrender = j.at("causedEarlySurrender").get<bool>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.userId = j.at("userId").get<uint64_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.customMsecsUntilReset = j.at("customMsecsUntilReset").get<int32_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.gameType = j.at("gameType").get<std::string>();
    v.boostXpEarned = j.at("boostXpEarned").get<int32_t>();
    v.coOpVsAiMsecsUntilReset = j.at("coOpVsAiMsecsUntilReset").get<int32_t>();
    v.currentLevel = j.at("currentLevel").get<uint64_t>();
    v.queueType = j.at("queueType").get<std::string>();
    v.eloChange = j.at("eloChange").get<int32_t>();
    v.partyRewardsBonusIpEarned = j.at("partyRewardsBonusIpEarned").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.pointsPenalties = j.at("pointsPenalties").get<nlohmann::json>();
    v.sendStatsToTournamentProvider = j.at("sendStatsToTournamentProvider").get<bool>();
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>();
    v.earlySurrenderAccomplice = j.at("earlySurrenderAccomplice").get<bool>();
    v.experienceTotal = j.at("experienceTotal").get<int32_t>();
    v.previousXpTotal = j.at("previousXpTotal").get<uint64_t>();
    v.basePoints = j.at("basePoints").get<int32_t>();
    v.newSpells = j.at("newSpells").get<std::vector<int32_t>>();
    v.coOpVsAiMinutesLeftToday = j.at("coOpVsAiMinutesLeftToday").get<int32_t>();
    v.roomName = j.at("roomName").get<std::string>();
    v.ipTotal = j.at("ipTotal").get<int32_t>();
    v.nextLevelXp = j.at("nextLevelXp").get<uint64_t>();
    v.difficulty = j.at("difficulty").get<std::string>();
    if(auto it = j.find("teamBoost"); it != j.end() && !it->is_null())
      v.teamBoost = it->get<LolEndOfGameEndOfGameTeamBoost_t>();
    v.leveledUp = j.at("leveledUp").get<bool>();
    v.battleBoostIpEarned = j.at("battleBoostIpEarned").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.talentPointsGained = j.at("talentPointsGained").get<int32_t>();
    v.odinBonusIp = j.at("odinBonusIp").get<int32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.previousLevel = j.at("previousLevel").get<uint64_t>();
    v.elo = j.at("elo").get<int32_t>();
    v.globalBoostXpEarned = j.at("globalBoostXpEarned").get<int32_t>();
    v.loyaltyBoostXpEarned = j.at("loyaltyBoostXpEarned").get<int32_t>();
    v.roomPassword = j.at("roomPassword").get<std::string>();
  }
  inline std::string to_string(const LolEndOfGameEndOfGameStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
