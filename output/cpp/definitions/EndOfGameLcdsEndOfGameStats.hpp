#pragma once
#include <json.hpp>
#include <optional>
#include "EndOfGameLcdsPlayerParticipantStatsSummary.hpp"
#include "EndOfGameLcdsPointsPenalty.hpp"
#include "EndOfGameLcdsTeamInfo.hpp"
#include "EndOfGameLcdsSpell.hpp"
namespace leagueapi {
  struct EndOfGameLcdsEndOfGameStats_t {
    int32_t skinId;
    uint64_t reportGameId;
    uint32_t gameLength;
    int32_t boostIpEarned;
    bool teamEarlySurrendered;
    bool imbalancedTeamsNoPoints;
    int32_t loyaltyBoostIpEarned;
    bool ranked;
    int32_t firstWinBonus;
    int32_t queueBonusEarned;
    int32_t rpEarned;
    std::string myTeamStatus;
    std::vector<std::string> gameMutators;
    std::string roomPassword;
    int32_t experienceEarned;
    int32_t completionBonusPoints;
    int32_t customMinutesLeftToday;
    std::vector<EndOfGameLcdsPlayerParticipantStatsSummary_t> teamPlayerParticipantStats;
    bool invalid;
    int32_t ipEarned;
    bool causedEarlySurrender;
    uint64_t userId;
    std::vector<EndOfGameLcdsPlayerParticipantStatsSummary_t> otherTeamPlayerParticipantStats;
    std::string queueType;
    int32_t customMsecsUntilReset;
    std::string gameMode;
    int32_t skinIndex;
    std::string gameType;
    int32_t boostXpEarned;
    int32_t coOpVsAiMsecsUntilReset;
    int32_t talentPointsGained;
    int32_t eloChange;
    std::vector<EndOfGameLcdsSpell_t> newSpells;
    std::string summonerName;
    std::vector<EndOfGameLcdsPointsPenalty_t> pointsPenalties;
    bool sendStatsToTournamentProvider;
    bool gameEndedInEarlySurrender;
    bool earlySurrenderAccomplice;
    int32_t experienceTotal;
    uint64_t previousXpTotal;
    int32_t basePoints;
    int32_t partyRewardsBonusIpEarned;
    int32_t coOpVsAiMinutesLeftToday;
    int32_t ipTotal;
    std::string roomName;
    std::string difficulty;
    bool leveledUp;
    int32_t battleBoostIpEarned;
    int32_t odinBonusIp;
    uint64_t gameId;
    uint64_t previousLevel;
    int32_t elo;
    EndOfGameLcdsTeamInfo_t otherTeamInfo;
    int32_t loyaltyBoostXpEarned;
    int32_t timeUntilNextFirstWinBonus;
    EndOfGameLcdsTeamInfo_t myTeamInfo;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsEndOfGameStats_t& v) {
    j["skinId"] = v.skinId;
    j["reportGameId"] = v.reportGameId;
    j["gameLength"] = v.gameLength;
    j["boostIpEarned"] = v.boostIpEarned;
    j["teamEarlySurrendered"] = v.teamEarlySurrendered;
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints;
    j["loyaltyBoostIpEarned"] = v.loyaltyBoostIpEarned;
    j["ranked"] = v.ranked;
    j["firstWinBonus"] = v.firstWinBonus;
    j["queueBonusEarned"] = v.queueBonusEarned;
    j["rpEarned"] = v.rpEarned;
    j["myTeamStatus"] = v.myTeamStatus;
    j["gameMutators"] = v.gameMutators;
    j["roomPassword"] = v.roomPassword;
    j["experienceEarned"] = v.experienceEarned;
    j["completionBonusPoints"] = v.completionBonusPoints;
    j["customMinutesLeftToday"] = v.customMinutesLeftToday;
    j["teamPlayerParticipantStats"] = v.teamPlayerParticipantStats;
    j["invalid"] = v.invalid;
    j["ipEarned"] = v.ipEarned;
    j["causedEarlySurrender"] = v.causedEarlySurrender;
    j["userId"] = v.userId;
    j["otherTeamPlayerParticipantStats"] = v.otherTeamPlayerParticipantStats;
    j["queueType"] = v.queueType;
    j["customMsecsUntilReset"] = v.customMsecsUntilReset;
    j["gameMode"] = v.gameMode;
    j["skinIndex"] = v.skinIndex;
    j["gameType"] = v.gameType;
    j["boostXpEarned"] = v.boostXpEarned;
    j["coOpVsAiMsecsUntilReset"] = v.coOpVsAiMsecsUntilReset;
    j["talentPointsGained"] = v.talentPointsGained;
    j["eloChange"] = v.eloChange;
    j["newSpells"] = v.newSpells;
    j["summonerName"] = v.summonerName;
    j["pointsPenalties"] = v.pointsPenalties;
    j["sendStatsToTournamentProvider"] = v.sendStatsToTournamentProvider;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["earlySurrenderAccomplice"] = v.earlySurrenderAccomplice;
    j["experienceTotal"] = v.experienceTotal;
    j["previousXpTotal"] = v.previousXpTotal;
    j["basePoints"] = v.basePoints;
    j["partyRewardsBonusIpEarned"] = v.partyRewardsBonusIpEarned;
    j["coOpVsAiMinutesLeftToday"] = v.coOpVsAiMinutesLeftToday;
    j["ipTotal"] = v.ipTotal;
    j["roomName"] = v.roomName;
    j["difficulty"] = v.difficulty;
    j["leveledUp"] = v.leveledUp;
    j["battleBoostIpEarned"] = v.battleBoostIpEarned;
    j["odinBonusIp"] = v.odinBonusIp;
    j["gameId"] = v.gameId;
    j["previousLevel"] = v.previousLevel;
    j["elo"] = v.elo;
    j["otherTeamInfo"] = v.otherTeamInfo;
    j["loyaltyBoostXpEarned"] = v.loyaltyBoostXpEarned;
    j["timeUntilNextFirstWinBonus"] = v.timeUntilNextFirstWinBonus;
    j["myTeamInfo"] = v.myTeamInfo;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsEndOfGameStats_t& v) {
    v.skinId = j.at("skinId").get<int32_t>();
    v.reportGameId = j.at("reportGameId").get<uint64_t>();
    v.gameLength = j.at("gameLength").get<uint32_t>();
    v.boostIpEarned = j.at("boostIpEarned").get<int32_t>();
    v.teamEarlySurrendered = j.at("teamEarlySurrendered").get<bool>();
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>();
    v.loyaltyBoostIpEarned = j.at("loyaltyBoostIpEarned").get<int32_t>();
    v.ranked = j.at("ranked").get<bool>();
    v.firstWinBonus = j.at("firstWinBonus").get<int32_t>();
    v.queueBonusEarned = j.at("queueBonusEarned").get<int32_t>();
    v.rpEarned = j.at("rpEarned").get<int32_t>();
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.roomPassword = j.at("roomPassword").get<std::string>();
    v.experienceEarned = j.at("experienceEarned").get<int32_t>();
    v.completionBonusPoints = j.at("completionBonusPoints").get<int32_t>();
    v.customMinutesLeftToday = j.at("customMinutesLeftToday").get<int32_t>();
    v.teamPlayerParticipantStats = j.at("teamPlayerParticipantStats").get<std::vector<EndOfGameLcdsPlayerParticipantStatsSummary_t>>();
    v.invalid = j.at("invalid").get<bool>();
    v.ipEarned = j.at("ipEarned").get<int32_t>();
    v.causedEarlySurrender = j.at("causedEarlySurrender").get<bool>();
    v.userId = j.at("userId").get<uint64_t>();
    v.otherTeamPlayerParticipantStats = j.at("otherTeamPlayerParticipantStats").get<std::vector<EndOfGameLcdsPlayerParticipantStatsSummary_t>>();
    v.queueType = j.at("queueType").get<std::string>();
    v.customMsecsUntilReset = j.at("customMsecsUntilReset").get<int32_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.gameType = j.at("gameType").get<std::string>();
    v.boostXpEarned = j.at("boostXpEarned").get<int32_t>();
    v.coOpVsAiMsecsUntilReset = j.at("coOpVsAiMsecsUntilReset").get<int32_t>();
    v.talentPointsGained = j.at("talentPointsGained").get<int32_t>();
    v.eloChange = j.at("eloChange").get<int32_t>();
    v.newSpells = j.at("newSpells").get<std::vector<EndOfGameLcdsSpell_t>>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.pointsPenalties = j.at("pointsPenalties").get<std::vector<EndOfGameLcdsPointsPenalty_t>>();
    v.sendStatsToTournamentProvider = j.at("sendStatsToTournamentProvider").get<bool>();
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>();
    v.earlySurrenderAccomplice = j.at("earlySurrenderAccomplice").get<bool>();
    v.experienceTotal = j.at("experienceTotal").get<int32_t>();
    v.previousXpTotal = j.at("previousXpTotal").get<uint64_t>();
    v.basePoints = j.at("basePoints").get<int32_t>();
    v.partyRewardsBonusIpEarned = j.at("partyRewardsBonusIpEarned").get<int32_t>();
    v.coOpVsAiMinutesLeftToday = j.at("coOpVsAiMinutesLeftToday").get<int32_t>();
    v.ipTotal = j.at("ipTotal").get<int32_t>();
    v.roomName = j.at("roomName").get<std::string>();
    v.difficulty = j.at("difficulty").get<std::string>();
    v.leveledUp = j.at("leveledUp").get<bool>();
    v.battleBoostIpEarned = j.at("battleBoostIpEarned").get<int32_t>();
    v.odinBonusIp = j.at("odinBonusIp").get<int32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.previousLevel = j.at("previousLevel").get<uint64_t>();
    v.elo = j.at("elo").get<int32_t>();
    v.otherTeamInfo = j.at("otherTeamInfo").get<EndOfGameLcdsTeamInfo_t>();
    v.loyaltyBoostXpEarned = j.at("loyaltyBoostXpEarned").get<int32_t>();
    v.timeUntilNextFirstWinBonus = j.at("timeUntilNextFirstWinBonus").get<int32_t>();
    v.myTeamInfo = j.at("myTeamInfo").get<EndOfGameLcdsTeamInfo_t>();
  }
  inline std::string to_string(const EndOfGameLcdsEndOfGameStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
