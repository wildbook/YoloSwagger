#pragma once
#include <json.hpp>
#include <optional>
#include "EndOfGameLcdsSpell.hpp"
#include "EndOfGameLcdsPointsPenalty.hpp"
#include "EndOfGameLcdsTeamInfo.hpp"
#include "EndOfGameLcdsPlayerParticipantStatsSummary.hpp"
namespace leagueapi {
  struct EndOfGameLcdsEndOfGameStats_t {
    int32_t_t battleBoostIpEarned;
    std::string_t queueType;
    int32_t_t skinId;
    int32_t_t customMsecsUntilReset;
    std::string_t gameMode;
    int32_t_t skinIndex;
    bool_t leveledUp;
    uint64_t_t previousXpTotal;
    int32_t_t loyaltyBoostXpEarned;
    int32_t_t ipEarned;
    uint32_t_t gameLength;
    std::string_t roomPassword;
    int32_t_t completionBonusPoints;
    uint64_t_t reportGameId;
    int32_t_t queueBonusEarned;
    bool_t earlySurrenderAccomplice;
    std::vector<EndOfGameLcdsPointsPenalty_t> pointsPenalties;
    int32_t_t elo;
    int32_t_t rpEarned;
    int32_t_t basePoints;
    bool_t causedEarlySurrender;
    int32_t_t coOpVsAiMsecsUntilReset;
    bool_t invalid;
    bool_t sendStatsToTournamentProvider;
    EndOfGameLcdsTeamInfo_t otherTeamInfo;
    int32_t_t boostIpEarned;
    bool_t imbalancedTeamsNoPoints;
    bool_t teamEarlySurrendered;
    uint64_t_t gameId;
    std::string_t summonerName;
    uint64_t_t userId;
    std::vector<EndOfGameLcdsPlayerParticipantStatsSummary_t> teamPlayerParticipantStats;
    int32_t_t coOpVsAiMinutesLeftToday;
    int32_t_t ipTotal;
    std::string_t difficulty;
    bool_t ranked;
    int32_t_t loyaltyBoostIpEarned;
    EndOfGameLcdsTeamInfo_t myTeamInfo;
    int32_t_t timeUntilNextFirstWinBonus;
    int32_t_t eloChange;
    int32_t_t experienceTotal;
    uint64_t_t previousLevel;
    int32_t_t odinBonusIp;
    std::vector<EndOfGameLcdsPlayerParticipantStatsSummary_t> otherTeamPlayerParticipantStats;
    int32_t_t firstWinBonus;
    bool_t gameEndedInEarlySurrender;
    std::string_t gameType;
    std::string_t roomName;
    int32_t_t customMinutesLeftToday;
    std::vector<EndOfGameLcdsSpell_t> newSpells;
    std::string_t myTeamStatus;
    int32_t_t experienceEarned;
    std::vector<std::string> gameMutators;
    int32_t_t boostXpEarned;
    int32_t_t talentPointsGained;
    int32_t_t partyRewardsBonusIpEarned;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsEndOfGameStats_t& v) {
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
    j["queueBonusEarned"] = v.queueBonusEarned;
    j["earlySurrenderAccomplice"] = v.earlySurrenderAccomplice;
    j["pointsPenalties"] = v.pointsPenalties;
    j["elo"] = v.elo;
    j["rpEarned"] = v.rpEarned;
    j["basePoints"] = v.basePoints;
    j["causedEarlySurrender"] = v.causedEarlySurrender;
    j["coOpVsAiMsecsUntilReset"] = v.coOpVsAiMsecsUntilReset;
    j["invalid"] = v.invalid;
    j["sendStatsToTournamentProvider"] = v.sendStatsToTournamentProvider;
    j["otherTeamInfo"] = v.otherTeamInfo;
    j["boostIpEarned"] = v.boostIpEarned;
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints;
    j["teamEarlySurrendered"] = v.teamEarlySurrendered;
    j["gameId"] = v.gameId;
    j["summonerName"] = v.summonerName;
    j["userId"] = v.userId;
    j["teamPlayerParticipantStats"] = v.teamPlayerParticipantStats;
    j["coOpVsAiMinutesLeftToday"] = v.coOpVsAiMinutesLeftToday;
    j["ipTotal"] = v.ipTotal;
    j["difficulty"] = v.difficulty;
    j["ranked"] = v.ranked;
    j["loyaltyBoostIpEarned"] = v.loyaltyBoostIpEarned;
    j["myTeamInfo"] = v.myTeamInfo;
    j["timeUntilNextFirstWinBonus"] = v.timeUntilNextFirstWinBonus;
    j["eloChange"] = v.eloChange;
    j["experienceTotal"] = v.experienceTotal;
    j["previousLevel"] = v.previousLevel;
    j["odinBonusIp"] = v.odinBonusIp;
    j["otherTeamPlayerParticipantStats"] = v.otherTeamPlayerParticipantStats;
    j["firstWinBonus"] = v.firstWinBonus;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["gameType"] = v.gameType;
    j["roomName"] = v.roomName;
    j["customMinutesLeftToday"] = v.customMinutesLeftToday;
    j["newSpells"] = v.newSpells;
    j["myTeamStatus"] = v.myTeamStatus;
    j["experienceEarned"] = v.experienceEarned;
    j["gameMutators"] = v.gameMutators;
    j["boostXpEarned"] = v.boostXpEarned;
    j["talentPointsGained"] = v.talentPointsGained;
    j["partyRewardsBonusIpEarned"] = v.partyRewardsBonusIpEarned;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsEndOfGameStats_t& v) {
    v.battleBoostIpEarned = j.at("battleBoostIpEarned").get<int32_t_t>();
    v.queueType = j.at("queueType").get<std::string_t>();
    v.skinId = j.at("skinId").get<int32_t_t>();
    v.customMsecsUntilReset = j.at("customMsecsUntilReset").get<int32_t_t>();
    v.gameMode = j.at("gameMode").get<std::string_t>();
    v.skinIndex = j.at("skinIndex").get<int32_t_t>();
    v.leveledUp = j.at("leveledUp").get<bool_t>();
    v.previousXpTotal = j.at("previousXpTotal").get<uint64_t_t>();
    v.loyaltyBoostXpEarned = j.at("loyaltyBoostXpEarned").get<int32_t_t>();
    v.ipEarned = j.at("ipEarned").get<int32_t_t>();
    v.gameLength = j.at("gameLength").get<uint32_t_t>();
    v.roomPassword = j.at("roomPassword").get<std::string_t>();
    v.completionBonusPoints = j.at("completionBonusPoints").get<int32_t_t>();
    v.reportGameId = j.at("reportGameId").get<uint64_t_t>();
    v.queueBonusEarned = j.at("queueBonusEarned").get<int32_t_t>();
    v.earlySurrenderAccomplice = j.at("earlySurrenderAccomplice").get<bool_t>();
    v.pointsPenalties = j.at("pointsPenalties").get<std::vector<EndOfGameLcdsPointsPenalty_t>>();
    v.elo = j.at("elo").get<int32_t_t>();
    v.rpEarned = j.at("rpEarned").get<int32_t_t>();
    v.basePoints = j.at("basePoints").get<int32_t_t>();
    v.causedEarlySurrender = j.at("causedEarlySurrender").get<bool_t>();
    v.coOpVsAiMsecsUntilReset = j.at("coOpVsAiMsecsUntilReset").get<int32_t_t>();
    v.invalid = j.at("invalid").get<bool_t>();
    v.sendStatsToTournamentProvider = j.at("sendStatsToTournamentProvider").get<bool_t>();
    v.otherTeamInfo = j.at("otherTeamInfo").get<EndOfGameLcdsTeamInfo_t>();
    v.boostIpEarned = j.at("boostIpEarned").get<int32_t_t>();
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool_t>();
    v.teamEarlySurrendered = j.at("teamEarlySurrendered").get<bool_t>();
    v.gameId = j.at("gameId").get<uint64_t_t>();
    v.summonerName = j.at("summonerName").get<std::string_t>();
    v.userId = j.at("userId").get<uint64_t_t>();
    v.teamPlayerParticipantStats = j.at("teamPlayerParticipantStats").get<std::vector<EndOfGameLcdsPlayerParticipantStatsSummary_t>>();
    v.coOpVsAiMinutesLeftToday = j.at("coOpVsAiMinutesLeftToday").get<int32_t_t>();
    v.ipTotal = j.at("ipTotal").get<int32_t_t>();
    v.difficulty = j.at("difficulty").get<std::string_t>();
    v.ranked = j.at("ranked").get<bool_t>();
    v.loyaltyBoostIpEarned = j.at("loyaltyBoostIpEarned").get<int32_t_t>();
    v.myTeamInfo = j.at("myTeamInfo").get<EndOfGameLcdsTeamInfo_t>();
    v.timeUntilNextFirstWinBonus = j.at("timeUntilNextFirstWinBonus").get<int32_t_t>();
    v.eloChange = j.at("eloChange").get<int32_t_t>();
    v.experienceTotal = j.at("experienceTotal").get<int32_t_t>();
    v.previousLevel = j.at("previousLevel").get<uint64_t_t>();
    v.odinBonusIp = j.at("odinBonusIp").get<int32_t_t>();
    v.otherTeamPlayerParticipantStats = j.at("otherTeamPlayerParticipantStats").get<std::vector<EndOfGameLcdsPlayerParticipantStatsSummary_t>>();
    v.firstWinBonus = j.at("firstWinBonus").get<int32_t_t>();
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool_t>();
    v.gameType = j.at("gameType").get<std::string_t>();
    v.roomName = j.at("roomName").get<std::string_t>();
    v.customMinutesLeftToday = j.at("customMinutesLeftToday").get<int32_t_t>();
    v.newSpells = j.at("newSpells").get<std::vector<EndOfGameLcdsSpell_t>>();
    v.myTeamStatus = j.at("myTeamStatus").get<std::string_t>();
    v.experienceEarned = j.at("experienceEarned").get<int32_t_t>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.boostXpEarned = j.at("boostXpEarned").get<int32_t_t>();
    v.talentPointsGained = j.at("talentPointsGained").get<int32_t_t>();
    v.partyRewardsBonusIpEarned = j.at("partyRewardsBonusIpEarned").get<int32_t_t>();
  }
  inline std::string to_string(const EndOfGameLcdsEndOfGameStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
