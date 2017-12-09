#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameEndOfGameTeam.hpp"
#include "LolEndOfGameEndOfGamePoints.hpp"
#include "LolEndOfGameEndOfGameTeamBoost.hpp"
namespace leagueapi {
  struct LolEndOfGameEndOfGameStats_t {
    int32_t eloChange;
    std::vector<LolEndOfGameEndOfGameTeam_t> teams;
    std::string queueType;
    int32_t boostXpEarned;
    uint64_t nextLevelXp;
    int32_t experienceTotal;
    uint64_t userId;
    std::string roomPassword;
    std::string gameMode;
    int32_t basePoints;
    int32_t ipEarned;
    bool gameEndedInEarlySurrender;
    bool ranked;
    int32_t coOpVsAiMinutesLeftToday;
    int32_t customMsecsUntilReset;
    uint64_t previousXpTotal;
    uint64_t reportGameId;
    uint64_t currentLevel;
    bool teamEarlySurrendered;
    int32_t gameLength;
    int32_t coOpVsAiMsecsUntilReset;
    int32_t skinIndex;
    int32_t battleBoostIpEarned;
    int32_t odinBonusIp;
    std::vector<std::string> gameMutators;
    int32_t timeUntilNextFirstWinBonus;
    int32_t loyaltyBoostIpEarned;
    bool sendStatsToTournamentProvider;
    LolEndOfGameEndOfGamePoints_t rerollData;
    std::vector<int32_t> newSpells;
    int32_t championId;
    bool leveledUp;
    uint64_t summonerId;
    int32_t elo;
    std::string gameType;
    int32_t talentPointsGained;
    int32_t missionsXpEarned;
    uint64_t accountId;
    int32_t rpEarned;
    uint64_t previousLevel;
    std::optional<LolEndOfGameEndOfGameTeamBoost_t> teamBoost;
    bool causedEarlySurrender;
    int32_t firstWinBonus;
    int32_t completionBonusPoints;
    bool earlySurrenderAccomplice;
    uint64_t gameId;
    int32_t globalBoostXpEarned;
    std::string myTeamStatus;
    int32_t ipTotal;
    int32_t partyRewardsBonusIpEarned;
    int32_t customMinutesLeftToday;
    std::string summonerName;
    int32_t boostIpEarned;
    bool imbalancedTeamsNoPoints;
    int32_t loyaltyBoostXpEarned;
    nlohmann::json pointsPenalties;
    int32_t experienceEarned;
    bool invalid;
    std::string roomName;
    std::string difficulty;
    int32_t skinId;
    int32_t queueBonusEarned;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameEndOfGameStats_t& v) {
    j["eloChange"] = v.eloChange;
    j["teams"] = v.teams;
    j["queueType"] = v.queueType;
    j["boostXpEarned"] = v.boostXpEarned;
    j["nextLevelXp"] = v.nextLevelXp;
    j["experienceTotal"] = v.experienceTotal;
    j["userId"] = v.userId;
    j["roomPassword"] = v.roomPassword;
    j["gameMode"] = v.gameMode;
    j["basePoints"] = v.basePoints;
    j["ipEarned"] = v.ipEarned;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["ranked"] = v.ranked;
    j["coOpVsAiMinutesLeftToday"] = v.coOpVsAiMinutesLeftToday;
    j["customMsecsUntilReset"] = v.customMsecsUntilReset;
    j["previousXpTotal"] = v.previousXpTotal;
    j["reportGameId"] = v.reportGameId;
    j["currentLevel"] = v.currentLevel;
    j["teamEarlySurrendered"] = v.teamEarlySurrendered;
    j["gameLength"] = v.gameLength;
    j["coOpVsAiMsecsUntilReset"] = v.coOpVsAiMsecsUntilReset;
    j["skinIndex"] = v.skinIndex;
    j["battleBoostIpEarned"] = v.battleBoostIpEarned;
    j["odinBonusIp"] = v.odinBonusIp;
    j["gameMutators"] = v.gameMutators;
    j["timeUntilNextFirstWinBonus"] = v.timeUntilNextFirstWinBonus;
    j["loyaltyBoostIpEarned"] = v.loyaltyBoostIpEarned;
    j["sendStatsToTournamentProvider"] = v.sendStatsToTournamentProvider;
    j["rerollData"] = v.rerollData;
    j["newSpells"] = v.newSpells;
    j["championId"] = v.championId;
    j["leveledUp"] = v.leveledUp;
    j["summonerId"] = v.summonerId;
    j["elo"] = v.elo;
    j["gameType"] = v.gameType;
    j["talentPointsGained"] = v.talentPointsGained;
    j["missionsXpEarned"] = v.missionsXpEarned;
    j["accountId"] = v.accountId;
    j["rpEarned"] = v.rpEarned;
    j["previousLevel"] = v.previousLevel;
    if(v.teamBoost)
      j["teamBoost"] = *v.teamBoost;
    j["causedEarlySurrender"] = v.causedEarlySurrender;
    j["firstWinBonus"] = v.firstWinBonus;
    j["completionBonusPoints"] = v.completionBonusPoints;
    j["earlySurrenderAccomplice"] = v.earlySurrenderAccomplice;
    j["gameId"] = v.gameId;
    j["globalBoostXpEarned"] = v.globalBoostXpEarned;
    j["myTeamStatus"] = v.myTeamStatus;
    j["ipTotal"] = v.ipTotal;
    j["partyRewardsBonusIpEarned"] = v.partyRewardsBonusIpEarned;
    j["customMinutesLeftToday"] = v.customMinutesLeftToday;
    j["summonerName"] = v.summonerName;
    j["boostIpEarned"] = v.boostIpEarned;
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints;
    j["loyaltyBoostXpEarned"] = v.loyaltyBoostXpEarned;
    j["pointsPenalties"] = v.pointsPenalties;
    j["experienceEarned"] = v.experienceEarned;
    j["invalid"] = v.invalid;
    j["roomName"] = v.roomName;
    j["difficulty"] = v.difficulty;
    j["skinId"] = v.skinId;
    j["queueBonusEarned"] = v.queueBonusEarned;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameEndOfGameStats_t& v) {
    v.eloChange = j.at("eloChange").get<int32_t>();
    v.teams = j.at("teams").get<std::vector<LolEndOfGameEndOfGameTeam_t>>();
    v.queueType = j.at("queueType").get<std::string>();
    v.boostXpEarned = j.at("boostXpEarned").get<int32_t>();
    v.nextLevelXp = j.at("nextLevelXp").get<uint64_t>();
    v.experienceTotal = j.at("experienceTotal").get<int32_t>();
    v.userId = j.at("userId").get<uint64_t>();
    v.roomPassword = j.at("roomPassword").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.basePoints = j.at("basePoints").get<int32_t>();
    v.ipEarned = j.at("ipEarned").get<int32_t>();
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>();
    v.ranked = j.at("ranked").get<bool>();
    v.coOpVsAiMinutesLeftToday = j.at("coOpVsAiMinutesLeftToday").get<int32_t>();
    v.customMsecsUntilReset = j.at("customMsecsUntilReset").get<int32_t>();
    v.previousXpTotal = j.at("previousXpTotal").get<uint64_t>();
    v.reportGameId = j.at("reportGameId").get<uint64_t>();
    v.currentLevel = j.at("currentLevel").get<uint64_t>();
    v.teamEarlySurrendered = j.at("teamEarlySurrendered").get<bool>();
    v.gameLength = j.at("gameLength").get<int32_t>();
    v.coOpVsAiMsecsUntilReset = j.at("coOpVsAiMsecsUntilReset").get<int32_t>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.battleBoostIpEarned = j.at("battleBoostIpEarned").get<int32_t>();
    v.odinBonusIp = j.at("odinBonusIp").get<int32_t>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.timeUntilNextFirstWinBonus = j.at("timeUntilNextFirstWinBonus").get<int32_t>();
    v.loyaltyBoostIpEarned = j.at("loyaltyBoostIpEarned").get<int32_t>();
    v.sendStatsToTournamentProvider = j.at("sendStatsToTournamentProvider").get<bool>();
    v.rerollData = j.at("rerollData").get<LolEndOfGameEndOfGamePoints_t>();
    v.newSpells = j.at("newSpells").get<std::vector<int32_t>>();
    v.championId = j.at("championId").get<int32_t>();
    v.leveledUp = j.at("leveledUp").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.elo = j.at("elo").get<int32_t>();
    v.gameType = j.at("gameType").get<std::string>();
    v.talentPointsGained = j.at("talentPointsGained").get<int32_t>();
    v.missionsXpEarned = j.at("missionsXpEarned").get<int32_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.rpEarned = j.at("rpEarned").get<int32_t>();
    v.previousLevel = j.at("previousLevel").get<uint64_t>();
    if(auto it = j.find("teamBoost"); it != j.end() && !it->is_null())
      v.teamBoost = it->get<LolEndOfGameEndOfGameTeamBoost_t>();
    v.causedEarlySurrender = j.at("causedEarlySurrender").get<bool>();
    v.firstWinBonus = j.at("firstWinBonus").get<int32_t>();
    v.completionBonusPoints = j.at("completionBonusPoints").get<int32_t>();
    v.earlySurrenderAccomplice = j.at("earlySurrenderAccomplice").get<bool>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.globalBoostXpEarned = j.at("globalBoostXpEarned").get<int32_t>();
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>();
    v.ipTotal = j.at("ipTotal").get<int32_t>();
    v.partyRewardsBonusIpEarned = j.at("partyRewardsBonusIpEarned").get<int32_t>();
    v.customMinutesLeftToday = j.at("customMinutesLeftToday").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.boostIpEarned = j.at("boostIpEarned").get<int32_t>();
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>();
    v.loyaltyBoostXpEarned = j.at("loyaltyBoostXpEarned").get<int32_t>();
    v.pointsPenalties = j.at("pointsPenalties").get<nlohmann::json>();
    v.experienceEarned = j.at("experienceEarned").get<int32_t>();
    v.invalid = j.at("invalid").get<bool>();
    v.roomName = j.at("roomName").get<std::string>();
    v.difficulty = j.at("difficulty").get<std::string>();
    v.skinId = j.at("skinId").get<int32_t>();
    v.queueBonusEarned = j.at("queueBonusEarned").get<int32_t>();
  }
  inline std::string to_string(const LolEndOfGameEndOfGameStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
