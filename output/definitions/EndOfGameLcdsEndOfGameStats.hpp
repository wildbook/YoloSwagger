#ifndef SWAGGER_TYPES_EndOfGameLcdsEndOfGameStats_HPP
#define SWAGGER_TYPES_EndOfGameLcdsEndOfGameStats_HPP
#include <json.hpp>
#include "EndOfGameLcdsTeamInfo.hpp"
#include "EndOfGameLcdsPlayerParticipantStatsSummary.hpp"
#include "EndOfGameLcdsSpell.hpp"
#include "EndOfGameLcdsPointsPenalty.hpp"
namespace leagueapi {
  // 
  struct EndOfGameLcdsEndOfGameStats {
    // 
    int32_t basePoints;
    // 
    int32_t battleBoostIpEarned;
    // 
    int32_t boostIpEarned;
    // 
    int32_t boostXpEarned;
    // 
    bool causedEarlySurrender;
    // 
    int32_t coOpVsAiMinutesLeftToday;
    // 
    int32_t coOpVsAiMsecsUntilReset;
    // 
    int32_t completionBonusPoints;
    // 
    int32_t customMinutesLeftToday;
    // 
    int32_t customMsecsUntilReset;
    // 
    std::string difficulty;
    // 
    bool earlySurrenderAccomplice;
    // 
    int32_t elo;
    // 
    int32_t eloChange;
    // 
    int32_t experienceEarned;
    // 
    int32_t experienceTotal;
    // 
    int32_t firstWinBonus;
    // 
    bool gameEndedInEarlySurrender;
    // 
    uint64_t gameId;
    // 
    uint32_t gameLength;
    // 
    std::string gameMode;
    // 
    std::vector<std::string> gameMutators;
    // 
    std::string gameType;
    // 
    bool imbalancedTeamsNoPoints;
    // 
    bool invalid;
    // 
    int32_t ipEarned;
    // 
    int32_t ipTotal;
    // 
    bool leveledUp;
    // 
    int32_t loyaltyBoostIpEarned;
    // 
    int32_t loyaltyBoostXpEarned;
    // 
    EndOfGameLcdsTeamInfo myTeamInfo;
    // 
    std::string myTeamStatus;
    // 
    std::vector<EndOfGameLcdsSpell> newSpells;
    // 
    int32_t odinBonusIp;
    // 
    EndOfGameLcdsTeamInfo otherTeamInfo;
    // 
    std::vector<EndOfGameLcdsPlayerParticipantStatsSummary> otherTeamPlayerParticipantStats;
    // 
    int32_t partyRewardsBonusIpEarned;
    // 
    std::vector<EndOfGameLcdsPointsPenalty> pointsPenalties;
    // 
    uint64_t previousLevel;
    // 
    uint64_t previousXpTotal;
    // 
    int32_t queueBonusEarned;
    // 
    std::string queueType;
    // 
    bool ranked;
    // 
    uint64_t reportGameId;
    // 
    std::string roomName;
    // 
    std::string roomPassword;
    // 
    int32_t rpEarned;
    // 
    bool sendStatsToTournamentProvider;
    // 
    int32_t skinId;
    // 
    int32_t skinIndex;
    // 
    std::string summonerName;
    // 
    int32_t talentPointsGained;
    // 
    bool teamEarlySurrendered;
    // 
    std::vector<EndOfGameLcdsPlayerParticipantStatsSummary> teamPlayerParticipantStats;
    // 
    int32_t timeUntilNextFirstWinBonus;
    // 
    uint64_t userId;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsEndOfGameStats& v) {
    j["basePoints"] = v.basePoints;
    j["battleBoostIpEarned"] = v.battleBoostIpEarned;
    j["boostIpEarned"] = v.boostIpEarned;
    j["boostXpEarned"] = v.boostXpEarned;
    j["causedEarlySurrender"] = v.causedEarlySurrender;
    j["coOpVsAiMinutesLeftToday"] = v.coOpVsAiMinutesLeftToday;
    j["coOpVsAiMsecsUntilReset"] = v.coOpVsAiMsecsUntilReset;
    j["completionBonusPoints"] = v.completionBonusPoints;
    j["customMinutesLeftToday"] = v.customMinutesLeftToday;
    j["customMsecsUntilReset"] = v.customMsecsUntilReset;
    j["difficulty"] = v.difficulty;
    j["earlySurrenderAccomplice"] = v.earlySurrenderAccomplice;
    j["elo"] = v.elo;
    j["eloChange"] = v.eloChange;
    j["experienceEarned"] = v.experienceEarned;
    j["experienceTotal"] = v.experienceTotal;
    j["firstWinBonus"] = v.firstWinBonus;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["gameId"] = v.gameId;
    j["gameLength"] = v.gameLength;
    j["gameMode"] = v.gameMode;
    j["gameMutators"] = v.gameMutators;
    j["gameType"] = v.gameType;
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints;
    j["invalid"] = v.invalid;
    j["ipEarned"] = v.ipEarned;
    j["ipTotal"] = v.ipTotal;
    j["leveledUp"] = v.leveledUp;
    j["loyaltyBoostIpEarned"] = v.loyaltyBoostIpEarned;
    j["loyaltyBoostXpEarned"] = v.loyaltyBoostXpEarned;
    j["myTeamInfo"] = v.myTeamInfo;
    j["myTeamStatus"] = v.myTeamStatus;
    j["newSpells"] = v.newSpells;
    j["odinBonusIp"] = v.odinBonusIp;
    j["otherTeamInfo"] = v.otherTeamInfo;
    j["otherTeamPlayerParticipantStats"] = v.otherTeamPlayerParticipantStats;
    j["partyRewardsBonusIpEarned"] = v.partyRewardsBonusIpEarned;
    j["pointsPenalties"] = v.pointsPenalties;
    j["previousLevel"] = v.previousLevel;
    j["previousXpTotal"] = v.previousXpTotal;
    j["queueBonusEarned"] = v.queueBonusEarned;
    j["queueType"] = v.queueType;
    j["ranked"] = v.ranked;
    j["reportGameId"] = v.reportGameId;
    j["roomName"] = v.roomName;
    j["roomPassword"] = v.roomPassword;
    j["rpEarned"] = v.rpEarned;
    j["sendStatsToTournamentProvider"] = v.sendStatsToTournamentProvider;
    j["skinId"] = v.skinId;
    j["skinIndex"] = v.skinIndex;
    j["summonerName"] = v.summonerName;
    j["talentPointsGained"] = v.talentPointsGained;
    j["teamEarlySurrendered"] = v.teamEarlySurrendered;
    j["teamPlayerParticipantStats"] = v.teamPlayerParticipantStats;
    j["timeUntilNextFirstWinBonus"] = v.timeUntilNextFirstWinBonus;
    j["userId"] = v.userId;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsEndOfGameStats& v) {
    v.basePoints = j.at("basePoints").get<int32_t>;
    v.battleBoostIpEarned = j.at("battleBoostIpEarned").get<int32_t>;
    v.boostIpEarned = j.at("boostIpEarned").get<int32_t>;
    v.boostXpEarned = j.at("boostXpEarned").get<int32_t>;
    v.causedEarlySurrender = j.at("causedEarlySurrender").get<bool>;
    v.coOpVsAiMinutesLeftToday = j.at("coOpVsAiMinutesLeftToday").get<int32_t>;
    v.coOpVsAiMsecsUntilReset = j.at("coOpVsAiMsecsUntilReset").get<int32_t>;
    v.completionBonusPoints = j.at("completionBonusPoints").get<int32_t>;
    v.customMinutesLeftToday = j.at("customMinutesLeftToday").get<int32_t>;
    v.customMsecsUntilReset = j.at("customMsecsUntilReset").get<int32_t>;
    v.difficulty = j.at("difficulty").get<std::string>;
    v.earlySurrenderAccomplice = j.at("earlySurrenderAccomplice").get<bool>;
    v.elo = j.at("elo").get<int32_t>;
    v.eloChange = j.at("eloChange").get<int32_t>;
    v.experienceEarned = j.at("experienceEarned").get<int32_t>;
    v.experienceTotal = j.at("experienceTotal").get<int32_t>;
    v.firstWinBonus = j.at("firstWinBonus").get<int32_t>;
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.gameLength = j.at("gameLength").get<uint32_t>;
    v.gameMode = j.at("gameMode").get<std::string>;
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>;
    v.gameType = j.at("gameType").get<std::string>;
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>;
    v.invalid = j.at("invalid").get<bool>;
    v.ipEarned = j.at("ipEarned").get<int32_t>;
    v.ipTotal = j.at("ipTotal").get<int32_t>;
    v.leveledUp = j.at("leveledUp").get<bool>;
    v.loyaltyBoostIpEarned = j.at("loyaltyBoostIpEarned").get<int32_t>;
    v.loyaltyBoostXpEarned = j.at("loyaltyBoostXpEarned").get<int32_t>;
    v.myTeamInfo = j.at("myTeamInfo").get<EndOfGameLcdsTeamInfo>;
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>;
    v.newSpells = j.at("newSpells").get<std::vector<EndOfGameLcdsSpell>>;
    v.odinBonusIp = j.at("odinBonusIp").get<int32_t>;
    v.otherTeamInfo = j.at("otherTeamInfo").get<EndOfGameLcdsTeamInfo>;
    v.otherTeamPlayerParticipantStats = j.at("otherTeamPlayerParticipantStats").get<std::vector<EndOfGameLcdsPlayerParticipantStatsSummary>>;
    v.partyRewardsBonusIpEarned = j.at("partyRewardsBonusIpEarned").get<int32_t>;
    v.pointsPenalties = j.at("pointsPenalties").get<std::vector<EndOfGameLcdsPointsPenalty>>;
    v.previousLevel = j.at("previousLevel").get<uint64_t>;
    v.previousXpTotal = j.at("previousXpTotal").get<uint64_t>;
    v.queueBonusEarned = j.at("queueBonusEarned").get<int32_t>;
    v.queueType = j.at("queueType").get<std::string>;
    v.ranked = j.at("ranked").get<bool>;
    v.reportGameId = j.at("reportGameId").get<uint64_t>;
    v.roomName = j.at("roomName").get<std::string>;
    v.roomPassword = j.at("roomPassword").get<std::string>;
    v.rpEarned = j.at("rpEarned").get<int32_t>;
    v.sendStatsToTournamentProvider = j.at("sendStatsToTournamentProvider").get<bool>;
    v.skinId = j.at("skinId").get<int32_t>;
    v.skinIndex = j.at("skinIndex").get<int32_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
    v.talentPointsGained = j.at("talentPointsGained").get<int32_t>;
    v.teamEarlySurrendered = j.at("teamEarlySurrendered").get<bool>;
    v.teamPlayerParticipantStats = j.at("teamPlayerParticipantStats").get<std::vector<EndOfGameLcdsPlayerParticipantStatsSummary>>;
    v.timeUntilNextFirstWinBonus = j.at("timeUntilNextFirstWinBonus").get<int32_t>;
    v.userId = j.at("userId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_EndOfGameLcdsEndOfGameStats_HPP
