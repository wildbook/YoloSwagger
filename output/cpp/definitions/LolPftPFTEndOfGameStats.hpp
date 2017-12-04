#ifndef SWAGGER_TYPES_LolPftPFTEndOfGameStats_HPP
#define SWAGGER_TYPES_LolPftPFTEndOfGameStats_HPP
#include <json.hpp>
#include "LolPftPFTEndOfGamePoints.hpp"
#include "LolPftPFTEndOfGameTeam.hpp"
namespace leagueapi {
  // 
  struct LolPftPFTEndOfGameStats {
    // 
    int32_t battleBoostIpEarned;
    // 
    std::string queueType;
    // 
    int32_t skinId;
    // 
    int32_t customMsecsUntilReset;
    // 
    std::string gameMode;
    // 
    int32_t skinIndex;
    // 
    bool leveledUp;
    // 
    uint64_t previousXpTotal;
    // 
    int32_t loyaltyBoostXpEarned;
    // 
    int32_t ipEarned;
    // 
    int32_t gameLength;
    // 
    std::string roomPassword;
    // 
    int32_t completionBonusPoints;
    // 
    uint64_t reportGameId;
    // 
    uint64_t accountId;
    // 
    bool earlySurrenderAccomplice;
    // 
    nlohmann::json pointsPenalties;
    // 
    int32_t championId;
    // 
    int32_t elo;
    // 
    int32_t rpEarned;
    // 
    int32_t basePoints;
    // 
    bool causedEarlySurrender;
    // 
    int32_t coOpVsAiMsecsUntilReset;
    // 
    bool invalid;
    // 
    bool sendStatsToTournamentProvider;
    // 
    int32_t boostIpEarned;
    // 
    int32_t queueBonusEarned;
    // 
    uint64_t summonerId;
    // 
    bool imbalancedTeamsNoPoints;
    // 
    bool teamEarlySurrendered;
    // 
    uint64_t gameId;
    // 
    std::string summonerName;
    // 
    uint64_t userId;
    // 
    int32_t coOpVsAiMinutesLeftToday;
    // 
    int32_t ipTotal;
    // 
    int32_t talentPointsGained;
    // 
    std::string difficulty;
    // 
    bool ranked;
    // 
    int32_t loyaltyBoostIpEarned;
    // 
    int32_t timeUntilNextFirstWinBonus;
    // 
    int32_t eloChange;
    // 
    int32_t experienceTotal;
    // 
    uint64_t previousLevel;
    // 
    int32_t odinBonusIp;
    // 
    LolPftPFTEndOfGamePoints rerollData;
    // 
    int32_t firstWinBonus;
    // 
    bool gameEndedInEarlySurrender;
    // 
    std::string gameType;
    // 
    std::vector<LolPftPFTEndOfGameTeam> teams;
    // 
    std::string roomName;
    // 
    int32_t customMinutesLeftToday;
    // 
    std::vector<int32_t> newSpells;
    // 
    std::string myTeamStatus;
    // 
    int32_t experienceEarned;
    // 
    std::vector<std::string> gameMutators;
    // 
    int32_t boostXpEarned;
    // 
    bool isAramGame;
    // 
    int32_t partyRewardsBonusIpEarned;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTEndOfGameStats& v) {
    j["battleBoostIpEarned"] = v.battleBoostIpEarned;
    j["queueType"] = v.queueType;
    j["skinId"] = v.skinId;
    j["customMsecsUntilReset"] = v.customMsecsUntilReset;
    j["gameMode"] = v.gameMode;
    j["skinIndex"] = v.skinIndex;
    j["leveledUp"] = v.leveledUp;
    j["previousXpTotal"] = v.previousXpTotal;
    j["loyaltyBoostXpEarned"] = v.loyaltyBoostXpEarned;
    j["ipEarned"] = v.ipEarned;
    j["gameLength"] = v.gameLength;
    j["roomPassword"] = v.roomPassword;
    j["completionBonusPoints"] = v.completionBonusPoints;
    j["reportGameId"] = v.reportGameId;
    j["accountId"] = v.accountId;
    j["earlySurrenderAccomplice"] = v.earlySurrenderAccomplice;
    j["pointsPenalties"] = v.pointsPenalties;
    j["championId"] = v.championId;
    j["elo"] = v.elo;
    j["rpEarned"] = v.rpEarned;
    j["basePoints"] = v.basePoints;
    j["causedEarlySurrender"] = v.causedEarlySurrender;
    j["coOpVsAiMsecsUntilReset"] = v.coOpVsAiMsecsUntilReset;
    j["invalid"] = v.invalid;
    j["sendStatsToTournamentProvider"] = v.sendStatsToTournamentProvider;
    j["boostIpEarned"] = v.boostIpEarned;
    j["queueBonusEarned"] = v.queueBonusEarned;
    j["summonerId"] = v.summonerId;
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints;
    j["teamEarlySurrendered"] = v.teamEarlySurrendered;
    j["gameId"] = v.gameId;
    j["summonerName"] = v.summonerName;
    j["userId"] = v.userId;
    j["coOpVsAiMinutesLeftToday"] = v.coOpVsAiMinutesLeftToday;
    j["ipTotal"] = v.ipTotal;
    j["talentPointsGained"] = v.talentPointsGained;
    j["difficulty"] = v.difficulty;
    j["ranked"] = v.ranked;
    j["loyaltyBoostIpEarned"] = v.loyaltyBoostIpEarned;
    j["timeUntilNextFirstWinBonus"] = v.timeUntilNextFirstWinBonus;
    j["eloChange"] = v.eloChange;
    j["experienceTotal"] = v.experienceTotal;
    j["previousLevel"] = v.previousLevel;
    j["odinBonusIp"] = v.odinBonusIp;
    j["rerollData"] = v.rerollData;
    j["firstWinBonus"] = v.firstWinBonus;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["gameType"] = v.gameType;
    j["teams"] = v.teams;
    j["roomName"] = v.roomName;
    j["customMinutesLeftToday"] = v.customMinutesLeftToday;
    j["newSpells"] = v.newSpells;
    j["myTeamStatus"] = v.myTeamStatus;
    j["experienceEarned"] = v.experienceEarned;
    j["gameMutators"] = v.gameMutators;
    j["boostXpEarned"] = v.boostXpEarned;
    j["isAramGame"] = v.isAramGame;
    j["partyRewardsBonusIpEarned"] = v.partyRewardsBonusIpEarned;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTEndOfGameStats& v) {
    v.battleBoostIpEarned = j.at("battleBoostIpEarned").get<int32_t>;
    v.queueType = j.at("queueType").get<std::string>;
    v.skinId = j.at("skinId").get<int32_t>;
    v.customMsecsUntilReset = j.at("customMsecsUntilReset").get<int32_t>;
    v.gameMode = j.at("gameMode").get<std::string>;
    v.skinIndex = j.at("skinIndex").get<int32_t>;
    v.leveledUp = j.at("leveledUp").get<bool>;
    v.previousXpTotal = j.at("previousXpTotal").get<uint64_t>;
    v.loyaltyBoostXpEarned = j.at("loyaltyBoostXpEarned").get<int32_t>;
    v.ipEarned = j.at("ipEarned").get<int32_t>;
    v.gameLength = j.at("gameLength").get<int32_t>;
    v.roomPassword = j.at("roomPassword").get<std::string>;
    v.completionBonusPoints = j.at("completionBonusPoints").get<int32_t>;
    v.reportGameId = j.at("reportGameId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
    v.earlySurrenderAccomplice = j.at("earlySurrenderAccomplice").get<bool>;
    v.pointsPenalties = j.at("pointsPenalties").get<nlohmann::json>;
    v.championId = j.at("championId").get<int32_t>;
    v.elo = j.at("elo").get<int32_t>;
    v.rpEarned = j.at("rpEarned").get<int32_t>;
    v.basePoints = j.at("basePoints").get<int32_t>;
    v.causedEarlySurrender = j.at("causedEarlySurrender").get<bool>;
    v.coOpVsAiMsecsUntilReset = j.at("coOpVsAiMsecsUntilReset").get<int32_t>;
    v.invalid = j.at("invalid").get<bool>;
    v.sendStatsToTournamentProvider = j.at("sendStatsToTournamentProvider").get<bool>;
    v.boostIpEarned = j.at("boostIpEarned").get<int32_t>;
    v.queueBonusEarned = j.at("queueBonusEarned").get<int32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>;
    v.teamEarlySurrendered = j.at("teamEarlySurrendered").get<bool>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
    v.userId = j.at("userId").get<uint64_t>;
    v.coOpVsAiMinutesLeftToday = j.at("coOpVsAiMinutesLeftToday").get<int32_t>;
    v.ipTotal = j.at("ipTotal").get<int32_t>;
    v.talentPointsGained = j.at("talentPointsGained").get<int32_t>;
    v.difficulty = j.at("difficulty").get<std::string>;
    v.ranked = j.at("ranked").get<bool>;
    v.loyaltyBoostIpEarned = j.at("loyaltyBoostIpEarned").get<int32_t>;
    v.timeUntilNextFirstWinBonus = j.at("timeUntilNextFirstWinBonus").get<int32_t>;
    v.eloChange = j.at("eloChange").get<int32_t>;
    v.experienceTotal = j.at("experienceTotal").get<int32_t>;
    v.previousLevel = j.at("previousLevel").get<uint64_t>;
    v.odinBonusIp = j.at("odinBonusIp").get<int32_t>;
    v.rerollData = j.at("rerollData").get<LolPftPFTEndOfGamePoints>;
    v.firstWinBonus = j.at("firstWinBonus").get<int32_t>;
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>;
    v.gameType = j.at("gameType").get<std::string>;
    v.teams = j.at("teams").get<std::vector<LolPftPFTEndOfGameTeam>>;
    v.roomName = j.at("roomName").get<std::string>;
    v.customMinutesLeftToday = j.at("customMinutesLeftToday").get<int32_t>;
    v.newSpells = j.at("newSpells").get<std::vector<int32_t>>;
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>;
    v.experienceEarned = j.at("experienceEarned").get<int32_t>;
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>;
    v.boostXpEarned = j.at("boostXpEarned").get<int32_t>;
    v.isAramGame = j.at("isAramGame").get<bool>;
    v.partyRewardsBonusIpEarned = j.at("partyRewardsBonusIpEarned").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolPftPFTEndOfGameStats_HPP
