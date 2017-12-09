#pragma once
#include <json.hpp>
#include <optional>
#include "EndOfGameLcdsTeamInfo.hpp"
#include "EndOfGameLcdsPointsPenalty.hpp"
#include "EndOfGameLcdsPlayerParticipantStatsSummary.hpp"
#include "EndOfGameLcdsSpell.hpp"
namespace leagueapi {
  struct EndOfGameLcdsEndOfGameStats_t {
    int32_t rpEarned;
    int32_t loyaltyBoostXpEarned;
    int32_t coOpVsAiMinutesLeftToday;
    uint64_t previousLevel;
    std::string gameType;
    std::vector<EndOfGameLcdsPlayerParticipantStatsSummary_t> teamPlayerParticipantStats;
    int32_t experienceEarned;
    bool leveledUp;
    int32_t skinId;
    bool ranked;
    bool causedEarlySurrender;
    int32_t skinIndex;
    std::string roomPassword;
    bool gameEndedInEarlySurrender;
    int32_t experienceTotal;
    EndOfGameLcdsTeamInfo_t myTeamInfo;
    int32_t ipTotal;
    int32_t ipEarned;
    int32_t customMsecsUntilReset;
    int32_t battleBoostIpEarned;
    int32_t customMinutesLeftToday;
    std::vector<std::string> gameMutators;
    std::string gameMode;
    std::vector<EndOfGameLcdsPointsPenalty_t> pointsPenalties;
    bool imbalancedTeamsNoPoints;
    int32_t boostIpEarned;
    EndOfGameLcdsTeamInfo_t otherTeamInfo;
    int32_t timeUntilNextFirstWinBonus;
    uint64_t reportGameId;
    int32_t odinBonusIp;
    bool teamEarlySurrendered;
    std::string summonerName;
    int32_t queueBonusEarned;
    std::string difficulty;
    int32_t firstWinBonus;
    uint64_t userId;
    int32_t eloChange;
    uint64_t previousXpTotal;
    bool earlySurrenderAccomplice;
    std::string myTeamStatus;
    bool invalid;
    int32_t coOpVsAiMsecsUntilReset;
    std::string roomName;
    uint32_t gameLength;
    std::string queueType;
    uint64_t gameId;
    std::vector<EndOfGameLcdsPlayerParticipantStatsSummary_t> otherTeamPlayerParticipantStats;
    int32_t talentPointsGained;
    int32_t partyRewardsBonusIpEarned;
    int32_t basePoints;
    bool sendStatsToTournamentProvider;
    int32_t loyaltyBoostIpEarned;
    int32_t completionBonusPoints;
    int32_t boostXpEarned;
    std::vector<EndOfGameLcdsSpell_t> newSpells;
    int32_t elo;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsEndOfGameStats_t& v) {
    j["rpEarned"] = v.rpEarned;
    j["loyaltyBoostXpEarned"] = v.loyaltyBoostXpEarned;
    j["coOpVsAiMinutesLeftToday"] = v.coOpVsAiMinutesLeftToday;
    j["previousLevel"] = v.previousLevel;
    j["gameType"] = v.gameType;
    j["teamPlayerParticipantStats"] = v.teamPlayerParticipantStats;
    j["experienceEarned"] = v.experienceEarned;
    j["leveledUp"] = v.leveledUp;
    j["skinId"] = v.skinId;
    j["ranked"] = v.ranked;
    j["causedEarlySurrender"] = v.causedEarlySurrender;
    j["skinIndex"] = v.skinIndex;
    j["roomPassword"] = v.roomPassword;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["experienceTotal"] = v.experienceTotal;
    j["myTeamInfo"] = v.myTeamInfo;
    j["ipTotal"] = v.ipTotal;
    j["ipEarned"] = v.ipEarned;
    j["customMsecsUntilReset"] = v.customMsecsUntilReset;
    j["battleBoostIpEarned"] = v.battleBoostIpEarned;
    j["customMinutesLeftToday"] = v.customMinutesLeftToday;
    j["gameMutators"] = v.gameMutators;
    j["gameMode"] = v.gameMode;
    j["pointsPenalties"] = v.pointsPenalties;
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints;
    j["boostIpEarned"] = v.boostIpEarned;
    j["otherTeamInfo"] = v.otherTeamInfo;
    j["timeUntilNextFirstWinBonus"] = v.timeUntilNextFirstWinBonus;
    j["reportGameId"] = v.reportGameId;
    j["odinBonusIp"] = v.odinBonusIp;
    j["teamEarlySurrendered"] = v.teamEarlySurrendered;
    j["summonerName"] = v.summonerName;
    j["queueBonusEarned"] = v.queueBonusEarned;
    j["difficulty"] = v.difficulty;
    j["firstWinBonus"] = v.firstWinBonus;
    j["userId"] = v.userId;
    j["eloChange"] = v.eloChange;
    j["previousXpTotal"] = v.previousXpTotal;
    j["earlySurrenderAccomplice"] = v.earlySurrenderAccomplice;
    j["myTeamStatus"] = v.myTeamStatus;
    j["invalid"] = v.invalid;
    j["coOpVsAiMsecsUntilReset"] = v.coOpVsAiMsecsUntilReset;
    j["roomName"] = v.roomName;
    j["gameLength"] = v.gameLength;
    j["queueType"] = v.queueType;
    j["gameId"] = v.gameId;
    j["otherTeamPlayerParticipantStats"] = v.otherTeamPlayerParticipantStats;
    j["talentPointsGained"] = v.talentPointsGained;
    j["partyRewardsBonusIpEarned"] = v.partyRewardsBonusIpEarned;
    j["basePoints"] = v.basePoints;
    j["sendStatsToTournamentProvider"] = v.sendStatsToTournamentProvider;
    j["loyaltyBoostIpEarned"] = v.loyaltyBoostIpEarned;
    j["completionBonusPoints"] = v.completionBonusPoints;
    j["boostXpEarned"] = v.boostXpEarned;
    j["newSpells"] = v.newSpells;
    j["elo"] = v.elo;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsEndOfGameStats_t& v) {
    v.rpEarned = j.at("rpEarned").get<int32_t>();
    v.loyaltyBoostXpEarned = j.at("loyaltyBoostXpEarned").get<int32_t>();
    v.coOpVsAiMinutesLeftToday = j.at("coOpVsAiMinutesLeftToday").get<int32_t>();
    v.previousLevel = j.at("previousLevel").get<uint64_t>();
    v.gameType = j.at("gameType").get<std::string>();
    v.teamPlayerParticipantStats = j.at("teamPlayerParticipantStats").get<std::vector<EndOfGameLcdsPlayerParticipantStatsSummary_t>>();
    v.experienceEarned = j.at("experienceEarned").get<int32_t>();
    v.leveledUp = j.at("leveledUp").get<bool>();
    v.skinId = j.at("skinId").get<int32_t>();
    v.ranked = j.at("ranked").get<bool>();
    v.causedEarlySurrender = j.at("causedEarlySurrender").get<bool>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.roomPassword = j.at("roomPassword").get<std::string>();
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>();
    v.experienceTotal = j.at("experienceTotal").get<int32_t>();
    v.myTeamInfo = j.at("myTeamInfo").get<EndOfGameLcdsTeamInfo_t>();
    v.ipTotal = j.at("ipTotal").get<int32_t>();
    v.ipEarned = j.at("ipEarned").get<int32_t>();
    v.customMsecsUntilReset = j.at("customMsecsUntilReset").get<int32_t>();
    v.battleBoostIpEarned = j.at("battleBoostIpEarned").get<int32_t>();
    v.customMinutesLeftToday = j.at("customMinutesLeftToday").get<int32_t>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.pointsPenalties = j.at("pointsPenalties").get<std::vector<EndOfGameLcdsPointsPenalty_t>>();
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>();
    v.boostIpEarned = j.at("boostIpEarned").get<int32_t>();
    v.otherTeamInfo = j.at("otherTeamInfo").get<EndOfGameLcdsTeamInfo_t>();
    v.timeUntilNextFirstWinBonus = j.at("timeUntilNextFirstWinBonus").get<int32_t>();
    v.reportGameId = j.at("reportGameId").get<uint64_t>();
    v.odinBonusIp = j.at("odinBonusIp").get<int32_t>();
    v.teamEarlySurrendered = j.at("teamEarlySurrendered").get<bool>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.queueBonusEarned = j.at("queueBonusEarned").get<int32_t>();
    v.difficulty = j.at("difficulty").get<std::string>();
    v.firstWinBonus = j.at("firstWinBonus").get<int32_t>();
    v.userId = j.at("userId").get<uint64_t>();
    v.eloChange = j.at("eloChange").get<int32_t>();
    v.previousXpTotal = j.at("previousXpTotal").get<uint64_t>();
    v.earlySurrenderAccomplice = j.at("earlySurrenderAccomplice").get<bool>();
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>();
    v.invalid = j.at("invalid").get<bool>();
    v.coOpVsAiMsecsUntilReset = j.at("coOpVsAiMsecsUntilReset").get<int32_t>();
    v.roomName = j.at("roomName").get<std::string>();
    v.gameLength = j.at("gameLength").get<uint32_t>();
    v.queueType = j.at("queueType").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.otherTeamPlayerParticipantStats = j.at("otherTeamPlayerParticipantStats").get<std::vector<EndOfGameLcdsPlayerParticipantStatsSummary_t>>();
    v.talentPointsGained = j.at("talentPointsGained").get<int32_t>();
    v.partyRewardsBonusIpEarned = j.at("partyRewardsBonusIpEarned").get<int32_t>();
    v.basePoints = j.at("basePoints").get<int32_t>();
    v.sendStatsToTournamentProvider = j.at("sendStatsToTournamentProvider").get<bool>();
    v.loyaltyBoostIpEarned = j.at("loyaltyBoostIpEarned").get<int32_t>();
    v.completionBonusPoints = j.at("completionBonusPoints").get<int32_t>();
    v.boostXpEarned = j.at("boostXpEarned").get<int32_t>();
    v.newSpells = j.at("newSpells").get<std::vector<EndOfGameLcdsSpell_t>>();
    v.elo = j.at("elo").get<int32_t>();
  }
  inline std::string to_string(const EndOfGameLcdsEndOfGameStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
