#pragma once
#include <json.hpp>
#include <optional>
#include "EndOfGameLcdsSpell.hpp"
#include "EndOfGameLcdsTeamInfo.hpp"
#include "EndOfGameLcdsPointsPenalty.hpp"
#include "EndOfGameLcdsPlayerParticipantStatsSummary.hpp"
namespace leagueapi {
  struct EndOfGameLcdsEndOfGameStats_t {
    int32_t eloChange;
    std::vector<EndOfGameLcdsPlayerParticipantStatsSummary_t> teamPlayerParticipantStats;
    std::string queueType;
    int32_t boostXpEarned;
    int32_t experienceTotal;
    uint64_t userId;
    std::string roomPassword;
    std::string gameMode;
    int32_t basePoints;
    int32_t ipEarned;
    bool gameEndedInEarlySurrender;
    bool ranked;
    int32_t coOpVsAiMinutesLeftToday;
    int32_t coOpVsAiMsecsUntilReset;
    uint64_t previousXpTotal;
    uint64_t reportGameId;
    int32_t skinId;
    uint32_t gameLength;
    int32_t customMsecsUntilReset;
    EndOfGameLcdsTeamInfo_t myTeamInfo;
    int32_t skinIndex;
    int32_t battleBoostIpEarned;
    int32_t odinBonusIp;
    std::vector<EndOfGameLcdsPlayerParticipantStatsSummary_t> otherTeamPlayerParticipantStats;
    std::vector<std::string> gameMutators;
    int32_t timeUntilNextFirstWinBonus;
    int32_t loyaltyBoostIpEarned;
    bool sendStatsToTournamentProvider;
    std::vector<EndOfGameLcdsSpell_t> newSpells;
    std::string difficulty;
    EndOfGameLcdsTeamInfo_t otherTeamInfo;
    bool leveledUp;
    int32_t elo;
    std::string gameType;
    int32_t talentPointsGained;
    uint64_t gameId;
    int32_t partyRewardsBonusIpEarned;
    uint64_t previousLevel;
    bool causedEarlySurrender;
    int32_t firstWinBonus;
    int32_t completionBonusPoints;
    bool earlySurrenderAccomplice;
    int32_t rpEarned;
    std::string myTeamStatus;
    int32_t ipTotal;
    int32_t customMinutesLeftToday;
    std::string summonerName;
    int32_t boostIpEarned;
    bool imbalancedTeamsNoPoints;
    int32_t loyaltyBoostXpEarned;
    std::vector<EndOfGameLcdsPointsPenalty_t> pointsPenalties;
    int32_t experienceEarned;
    bool invalid;
    std::string roomName;
    bool teamEarlySurrendered;
    int32_t queueBonusEarned;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsEndOfGameStats_t& v) {
    j["eloChange"] = v.eloChange;
    j["teamPlayerParticipantStats"] = v.teamPlayerParticipantStats;
    j["queueType"] = v.queueType;
    j["boostXpEarned"] = v.boostXpEarned;
    j["experienceTotal"] = v.experienceTotal;
    j["userId"] = v.userId;
    j["roomPassword"] = v.roomPassword;
    j["gameMode"] = v.gameMode;
    j["basePoints"] = v.basePoints;
    j["ipEarned"] = v.ipEarned;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["ranked"] = v.ranked;
    j["coOpVsAiMinutesLeftToday"] = v.coOpVsAiMinutesLeftToday;
    j["coOpVsAiMsecsUntilReset"] = v.coOpVsAiMsecsUntilReset;
    j["previousXpTotal"] = v.previousXpTotal;
    j["reportGameId"] = v.reportGameId;
    j["skinId"] = v.skinId;
    j["gameLength"] = v.gameLength;
    j["customMsecsUntilReset"] = v.customMsecsUntilReset;
    j["myTeamInfo"] = v.myTeamInfo;
    j["skinIndex"] = v.skinIndex;
    j["battleBoostIpEarned"] = v.battleBoostIpEarned;
    j["odinBonusIp"] = v.odinBonusIp;
    j["otherTeamPlayerParticipantStats"] = v.otherTeamPlayerParticipantStats;
    j["gameMutators"] = v.gameMutators;
    j["timeUntilNextFirstWinBonus"] = v.timeUntilNextFirstWinBonus;
    j["loyaltyBoostIpEarned"] = v.loyaltyBoostIpEarned;
    j["sendStatsToTournamentProvider"] = v.sendStatsToTournamentProvider;
    j["newSpells"] = v.newSpells;
    j["difficulty"] = v.difficulty;
    j["otherTeamInfo"] = v.otherTeamInfo;
    j["leveledUp"] = v.leveledUp;
    j["elo"] = v.elo;
    j["gameType"] = v.gameType;
    j["talentPointsGained"] = v.talentPointsGained;
    j["gameId"] = v.gameId;
    j["partyRewardsBonusIpEarned"] = v.partyRewardsBonusIpEarned;
    j["previousLevel"] = v.previousLevel;
    j["causedEarlySurrender"] = v.causedEarlySurrender;
    j["firstWinBonus"] = v.firstWinBonus;
    j["completionBonusPoints"] = v.completionBonusPoints;
    j["earlySurrenderAccomplice"] = v.earlySurrenderAccomplice;
    j["rpEarned"] = v.rpEarned;
    j["myTeamStatus"] = v.myTeamStatus;
    j["ipTotal"] = v.ipTotal;
    j["customMinutesLeftToday"] = v.customMinutesLeftToday;
    j["summonerName"] = v.summonerName;
    j["boostIpEarned"] = v.boostIpEarned;
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints;
    j["loyaltyBoostXpEarned"] = v.loyaltyBoostXpEarned;
    j["pointsPenalties"] = v.pointsPenalties;
    j["experienceEarned"] = v.experienceEarned;
    j["invalid"] = v.invalid;
    j["roomName"] = v.roomName;
    j["teamEarlySurrendered"] = v.teamEarlySurrendered;
    j["queueBonusEarned"] = v.queueBonusEarned;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsEndOfGameStats_t& v) {
    v.eloChange = j.at("eloChange").get<int32_t>();
    v.teamPlayerParticipantStats = j.at("teamPlayerParticipantStats").get<std::vector<EndOfGameLcdsPlayerParticipantStatsSummary_t>>();
    v.queueType = j.at("queueType").get<std::string>();
    v.boostXpEarned = j.at("boostXpEarned").get<int32_t>();
    v.experienceTotal = j.at("experienceTotal").get<int32_t>();
    v.userId = j.at("userId").get<uint64_t>();
    v.roomPassword = j.at("roomPassword").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.basePoints = j.at("basePoints").get<int32_t>();
    v.ipEarned = j.at("ipEarned").get<int32_t>();
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>();
    v.ranked = j.at("ranked").get<bool>();
    v.coOpVsAiMinutesLeftToday = j.at("coOpVsAiMinutesLeftToday").get<int32_t>();
    v.coOpVsAiMsecsUntilReset = j.at("coOpVsAiMsecsUntilReset").get<int32_t>();
    v.previousXpTotal = j.at("previousXpTotal").get<uint64_t>();
    v.reportGameId = j.at("reportGameId").get<uint64_t>();
    v.skinId = j.at("skinId").get<int32_t>();
    v.gameLength = j.at("gameLength").get<uint32_t>();
    v.customMsecsUntilReset = j.at("customMsecsUntilReset").get<int32_t>();
    v.myTeamInfo = j.at("myTeamInfo").get<EndOfGameLcdsTeamInfo_t>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.battleBoostIpEarned = j.at("battleBoostIpEarned").get<int32_t>();
    v.odinBonusIp = j.at("odinBonusIp").get<int32_t>();
    v.otherTeamPlayerParticipantStats = j.at("otherTeamPlayerParticipantStats").get<std::vector<EndOfGameLcdsPlayerParticipantStatsSummary_t>>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.timeUntilNextFirstWinBonus = j.at("timeUntilNextFirstWinBonus").get<int32_t>();
    v.loyaltyBoostIpEarned = j.at("loyaltyBoostIpEarned").get<int32_t>();
    v.sendStatsToTournamentProvider = j.at("sendStatsToTournamentProvider").get<bool>();
    v.newSpells = j.at("newSpells").get<std::vector<EndOfGameLcdsSpell_t>>();
    v.difficulty = j.at("difficulty").get<std::string>();
    v.otherTeamInfo = j.at("otherTeamInfo").get<EndOfGameLcdsTeamInfo_t>();
    v.leveledUp = j.at("leveledUp").get<bool>();
    v.elo = j.at("elo").get<int32_t>();
    v.gameType = j.at("gameType").get<std::string>();
    v.talentPointsGained = j.at("talentPointsGained").get<int32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.partyRewardsBonusIpEarned = j.at("partyRewardsBonusIpEarned").get<int32_t>();
    v.previousLevel = j.at("previousLevel").get<uint64_t>();
    v.causedEarlySurrender = j.at("causedEarlySurrender").get<bool>();
    v.firstWinBonus = j.at("firstWinBonus").get<int32_t>();
    v.completionBonusPoints = j.at("completionBonusPoints").get<int32_t>();
    v.earlySurrenderAccomplice = j.at("earlySurrenderAccomplice").get<bool>();
    v.rpEarned = j.at("rpEarned").get<int32_t>();
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>();
    v.ipTotal = j.at("ipTotal").get<int32_t>();
    v.customMinutesLeftToday = j.at("customMinutesLeftToday").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.boostIpEarned = j.at("boostIpEarned").get<int32_t>();
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>();
    v.loyaltyBoostXpEarned = j.at("loyaltyBoostXpEarned").get<int32_t>();
    v.pointsPenalties = j.at("pointsPenalties").get<std::vector<EndOfGameLcdsPointsPenalty_t>>();
    v.experienceEarned = j.at("experienceEarned").get<int32_t>();
    v.invalid = j.at("invalid").get<bool>();
    v.roomName = j.at("roomName").get<std::string>();
    v.teamEarlySurrendered = j.at("teamEarlySurrendered").get<bool>();
    v.queueBonusEarned = j.at("queueBonusEarned").get<int32_t>();
  }
  inline std::string to_string(const EndOfGameLcdsEndOfGameStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
