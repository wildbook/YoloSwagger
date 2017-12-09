#pragma once
#include <json.hpp>
#include <optional>
#include "EndOfGameLcdsPlayerParticipantStatsSummary.hpp"
#include "EndOfGameLcdsSpell.hpp"
#include "EndOfGameLcdsPointsPenalty.hpp"
#include "EndOfGameLcdsTeamInfo.hpp"
namespace leagueapi {
  struct EndOfGameLcdsEndOfGameStats_t {
    uint64_t previousLevel;
    int32_t loyaltyBoostXpEarned;
    std::vector<std::string> gameMutators;
    int32_t ipEarned;
    int32_t talentPointsGained;
    std::string queueType;
    EndOfGameLcdsTeamInfo_t myTeamInfo;
    int32_t loyaltyBoostIpEarned;
    std::string gameType;
    EndOfGameLcdsTeamInfo_t otherTeamInfo;
    int32_t queueBonusEarned;
    bool teamEarlySurrendered;
    bool imbalancedTeamsNoPoints;
    int32_t boostXpEarned;
    std::string roomPassword;
    std::string difficulty;
    std::string myTeamStatus;
    int32_t battleBoostIpEarned;
    std::vector<EndOfGameLcdsPlayerParticipantStatsSummary_t> otherTeamPlayerParticipantStats;
    int32_t rpEarned;
    uint64_t userId;
    bool ranked;
    std::vector<EndOfGameLcdsPlayerParticipantStatsSummary_t> teamPlayerParticipantStats;
    int32_t boostIpEarned;
    uint64_t reportGameId;
    uint32_t gameLength;
    int32_t partyRewardsBonusIpEarned;
    int32_t basePoints;
    bool causedEarlySurrender;
    int32_t ipTotal;
    uint64_t gameId;
    int32_t skinIndex;
    int32_t timeUntilNextFirstWinBonus;
    bool leveledUp;
    bool invalid;
    int32_t customMsecsUntilReset;
    int32_t odinBonusIp;
    std::string gameMode;
    std::string summonerName;
    int32_t firstWinBonus;
    int32_t completionBonusPoints;
    bool sendStatsToTournamentProvider;
    int32_t customMinutesLeftToday;
    std::string roomName;
    int32_t elo;
    int32_t experienceEarned;
    std::vector<EndOfGameLcdsSpell_t> newSpells;
    int32_t eloChange;
    int32_t coOpVsAiMsecsUntilReset;
    bool gameEndedInEarlySurrender;
    bool earlySurrenderAccomplice;
    int32_t skinId;
    uint64_t previousXpTotal;
    std::vector<EndOfGameLcdsPointsPenalty_t> pointsPenalties;
    int32_t experienceTotal;
    int32_t coOpVsAiMinutesLeftToday;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsEndOfGameStats_t& v) {
    j["previousLevel"] = v.previousLevel;
    j["loyaltyBoostXpEarned"] = v.loyaltyBoostXpEarned;
    j["gameMutators"] = v.gameMutators;
    j["ipEarned"] = v.ipEarned;
    j["talentPointsGained"] = v.talentPointsGained;
    j["queueType"] = v.queueType;
    j["myTeamInfo"] = v.myTeamInfo;
    j["loyaltyBoostIpEarned"] = v.loyaltyBoostIpEarned;
    j["gameType"] = v.gameType;
    j["otherTeamInfo"] = v.otherTeamInfo;
    j["queueBonusEarned"] = v.queueBonusEarned;
    j["teamEarlySurrendered"] = v.teamEarlySurrendered;
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints;
    j["boostXpEarned"] = v.boostXpEarned;
    j["roomPassword"] = v.roomPassword;
    j["difficulty"] = v.difficulty;
    j["myTeamStatus"] = v.myTeamStatus;
    j["battleBoostIpEarned"] = v.battleBoostIpEarned;
    j["otherTeamPlayerParticipantStats"] = v.otherTeamPlayerParticipantStats;
    j["rpEarned"] = v.rpEarned;
    j["userId"] = v.userId;
    j["ranked"] = v.ranked;
    j["teamPlayerParticipantStats"] = v.teamPlayerParticipantStats;
    j["boostIpEarned"] = v.boostIpEarned;
    j["reportGameId"] = v.reportGameId;
    j["gameLength"] = v.gameLength;
    j["partyRewardsBonusIpEarned"] = v.partyRewardsBonusIpEarned;
    j["basePoints"] = v.basePoints;
    j["causedEarlySurrender"] = v.causedEarlySurrender;
    j["ipTotal"] = v.ipTotal;
    j["gameId"] = v.gameId;
    j["skinIndex"] = v.skinIndex;
    j["timeUntilNextFirstWinBonus"] = v.timeUntilNextFirstWinBonus;
    j["leveledUp"] = v.leveledUp;
    j["invalid"] = v.invalid;
    j["customMsecsUntilReset"] = v.customMsecsUntilReset;
    j["odinBonusIp"] = v.odinBonusIp;
    j["gameMode"] = v.gameMode;
    j["summonerName"] = v.summonerName;
    j["firstWinBonus"] = v.firstWinBonus;
    j["completionBonusPoints"] = v.completionBonusPoints;
    j["sendStatsToTournamentProvider"] = v.sendStatsToTournamentProvider;
    j["customMinutesLeftToday"] = v.customMinutesLeftToday;
    j["roomName"] = v.roomName;
    j["elo"] = v.elo;
    j["experienceEarned"] = v.experienceEarned;
    j["newSpells"] = v.newSpells;
    j["eloChange"] = v.eloChange;
    j["coOpVsAiMsecsUntilReset"] = v.coOpVsAiMsecsUntilReset;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["earlySurrenderAccomplice"] = v.earlySurrenderAccomplice;
    j["skinId"] = v.skinId;
    j["previousXpTotal"] = v.previousXpTotal;
    j["pointsPenalties"] = v.pointsPenalties;
    j["experienceTotal"] = v.experienceTotal;
    j["coOpVsAiMinutesLeftToday"] = v.coOpVsAiMinutesLeftToday;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsEndOfGameStats_t& v) {
    v.previousLevel = j.at("previousLevel").get<uint64_t>();
    v.loyaltyBoostXpEarned = j.at("loyaltyBoostXpEarned").get<int32_t>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.ipEarned = j.at("ipEarned").get<int32_t>();
    v.talentPointsGained = j.at("talentPointsGained").get<int32_t>();
    v.queueType = j.at("queueType").get<std::string>();
    v.myTeamInfo = j.at("myTeamInfo").get<EndOfGameLcdsTeamInfo_t>();
    v.loyaltyBoostIpEarned = j.at("loyaltyBoostIpEarned").get<int32_t>();
    v.gameType = j.at("gameType").get<std::string>();
    v.otherTeamInfo = j.at("otherTeamInfo").get<EndOfGameLcdsTeamInfo_t>();
    v.queueBonusEarned = j.at("queueBonusEarned").get<int32_t>();
    v.teamEarlySurrendered = j.at("teamEarlySurrendered").get<bool>();
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>();
    v.boostXpEarned = j.at("boostXpEarned").get<int32_t>();
    v.roomPassword = j.at("roomPassword").get<std::string>();
    v.difficulty = j.at("difficulty").get<std::string>();
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>();
    v.battleBoostIpEarned = j.at("battleBoostIpEarned").get<int32_t>();
    v.otherTeamPlayerParticipantStats = j.at("otherTeamPlayerParticipantStats").get<std::vector<EndOfGameLcdsPlayerParticipantStatsSummary_t>>();
    v.rpEarned = j.at("rpEarned").get<int32_t>();
    v.userId = j.at("userId").get<uint64_t>();
    v.ranked = j.at("ranked").get<bool>();
    v.teamPlayerParticipantStats = j.at("teamPlayerParticipantStats").get<std::vector<EndOfGameLcdsPlayerParticipantStatsSummary_t>>();
    v.boostIpEarned = j.at("boostIpEarned").get<int32_t>();
    v.reportGameId = j.at("reportGameId").get<uint64_t>();
    v.gameLength = j.at("gameLength").get<uint32_t>();
    v.partyRewardsBonusIpEarned = j.at("partyRewardsBonusIpEarned").get<int32_t>();
    v.basePoints = j.at("basePoints").get<int32_t>();
    v.causedEarlySurrender = j.at("causedEarlySurrender").get<bool>();
    v.ipTotal = j.at("ipTotal").get<int32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.timeUntilNextFirstWinBonus = j.at("timeUntilNextFirstWinBonus").get<int32_t>();
    v.leveledUp = j.at("leveledUp").get<bool>();
    v.invalid = j.at("invalid").get<bool>();
    v.customMsecsUntilReset = j.at("customMsecsUntilReset").get<int32_t>();
    v.odinBonusIp = j.at("odinBonusIp").get<int32_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.firstWinBonus = j.at("firstWinBonus").get<int32_t>();
    v.completionBonusPoints = j.at("completionBonusPoints").get<int32_t>();
    v.sendStatsToTournamentProvider = j.at("sendStatsToTournamentProvider").get<bool>();
    v.customMinutesLeftToday = j.at("customMinutesLeftToday").get<int32_t>();
    v.roomName = j.at("roomName").get<std::string>();
    v.elo = j.at("elo").get<int32_t>();
    v.experienceEarned = j.at("experienceEarned").get<int32_t>();
    v.newSpells = j.at("newSpells").get<std::vector<EndOfGameLcdsSpell_t>>();
    v.eloChange = j.at("eloChange").get<int32_t>();
    v.coOpVsAiMsecsUntilReset = j.at("coOpVsAiMsecsUntilReset").get<int32_t>();
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>();
    v.earlySurrenderAccomplice = j.at("earlySurrenderAccomplice").get<bool>();
    v.skinId = j.at("skinId").get<int32_t>();
    v.previousXpTotal = j.at("previousXpTotal").get<uint64_t>();
    v.pointsPenalties = j.at("pointsPenalties").get<std::vector<EndOfGameLcdsPointsPenalty_t>>();
    v.experienceTotal = j.at("experienceTotal").get<int32_t>();
    v.coOpVsAiMinutesLeftToday = j.at("coOpVsAiMinutesLeftToday").get<int32_t>();
  }
  inline std::string to_string(const EndOfGameLcdsEndOfGameStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
