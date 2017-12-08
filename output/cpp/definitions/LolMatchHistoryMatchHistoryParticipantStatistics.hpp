#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryParticipantStatistics_t {
    uint16_t item1;
    int64_t visionScore;
    int64_t magicDamageDealtToChampions;
    int64_t damageDealtToObjectives;
    int64_t totalTimeCrowdControlDealt;
    int64_t longestTimeSpentLiving;
    int64_t totalPlayerScore;
    bool earlySurrenderAccomplice;
    int64_t perk1Var1;
    int64_t perk1Var3;
    int64_t perk1Var2;
    int64_t tripleKills;
    int64_t perk5;
    int64_t perk4;
    int64_t playerScore9;
    int64_t playerScore8;
    int64_t kills;
    int64_t playerScore1;
    int64_t playerScore0;
    int64_t playerScore3;
    int64_t playerScore2;
    int64_t playerScore5;
    int64_t playerScore4;
    int64_t playerScore7;
    int64_t playerScore6;
    int64_t perk5Var1;
    int64_t perk5Var3;
    int64_t perk5Var2;
    int64_t totalScoreRank;
    int64_t neutralMinionsKilled;
    int64_t damageDealtToTurrets;
    int64_t physicalDamageDealtToChampions;
    int64_t largestMultiKill;
    int64_t perk2Var2;
    int64_t perk2Var3;
    int64_t totalUnitsHealed;
    int64_t perk2Var1;
    int64_t perk4Var1;
    int64_t perk4Var2;
    int64_t perk4Var3;
    int64_t wardsKilled;
    int64_t largestCriticalStrike;
    int64_t largestKillingSpree;
    int64_t quadraKills;
    int64_t magicDamageDealt;
    int64_t neutralMinionsKilledTeamJungle;
    uint16_t item2;
    uint16_t item3;
    uint16_t item0;
    bool firstBloodAssist;
    uint16_t item6;
    uint16_t item4;
    uint16_t item5;
    int64_t perk1;
    int64_t perk0;
    int64_t perk3;
    int64_t perk2;
    int64_t perk3Var3;
    int64_t perk3Var2;
    int64_t perk3Var1;
    int64_t damageSelfMitigated;
    bool teamEarlySurrendered;
    int64_t trueDamageTaken;
    int64_t magicalDamageTaken;
    bool firstInhibitorKill;
    int64_t inhibitorKills;
    int64_t assists;
    int64_t perkPrimaryStyle;
    int64_t goldSpent;
    int64_t trueDamageDealt;
    uint16_t participantId;
    bool gameEndedInEarlySurrender;
    int64_t totalDamageTaken;
    int64_t physicalDamageDealt;
    int64_t sightWardsBoughtInGame;
    int64_t totalDamageDealtToChampions;
    int64_t physicalDamageTaken;
    int64_t combatPlayerScore;
    bool win;
    int64_t objectivePlayerScore;
    int64_t totalDamageDealt;
    int64_t neutralMinionsKilledEnemyJungle;
    bool causedEarlySurrender;
    int64_t deaths;
    int64_t wardsPlaced;
    int64_t perkSubStyle;
    int64_t turretKills;
    bool firstBloodKill;
    int64_t trueDamageDealtToChampions;
    int64_t goldEarned;
    int64_t killingSprees;
    bool gameEndedInSurrender;
    bool firstTowerAssist;
    bool firstTowerKill;
    int64_t champLevel;
    int64_t unrealKills;
    int64_t doubleKills;
    bool firstInhibitorAssist;
    int64_t perk0Var1;
    int64_t perk0Var2;
    int64_t perk0Var3;
    int64_t visionWardsBoughtInGame;
    int64_t pentaKills;
    int64_t totalHeal;
    int64_t totalMinionsKilled;
    int64_t timeCCingOthers;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipantStatistics_t& v) {
    j["item1"] = v.item1;
    j["visionScore"] = v.visionScore;
    j["magicDamageDealtToChampions"] = v.magicDamageDealtToChampions;
    j["damageDealtToObjectives"] = v.damageDealtToObjectives;
    j["totalTimeCrowdControlDealt"] = v.totalTimeCrowdControlDealt;
    j["longestTimeSpentLiving"] = v.longestTimeSpentLiving;
    j["totalPlayerScore"] = v.totalPlayerScore;
    j["earlySurrenderAccomplice"] = v.earlySurrenderAccomplice;
    j["perk1Var1"] = v.perk1Var1;
    j["perk1Var3"] = v.perk1Var3;
    j["perk1Var2"] = v.perk1Var2;
    j["tripleKills"] = v.tripleKills;
    j["perk5"] = v.perk5;
    j["perk4"] = v.perk4;
    j["playerScore9"] = v.playerScore9;
    j["playerScore8"] = v.playerScore8;
    j["kills"] = v.kills;
    j["playerScore1"] = v.playerScore1;
    j["playerScore0"] = v.playerScore0;
    j["playerScore3"] = v.playerScore3;
    j["playerScore2"] = v.playerScore2;
    j["playerScore5"] = v.playerScore5;
    j["playerScore4"] = v.playerScore4;
    j["playerScore7"] = v.playerScore7;
    j["playerScore6"] = v.playerScore6;
    j["perk5Var1"] = v.perk5Var1;
    j["perk5Var3"] = v.perk5Var3;
    j["perk5Var2"] = v.perk5Var2;
    j["totalScoreRank"] = v.totalScoreRank;
    j["neutralMinionsKilled"] = v.neutralMinionsKilled;
    j["damageDealtToTurrets"] = v.damageDealtToTurrets;
    j["physicalDamageDealtToChampions"] = v.physicalDamageDealtToChampions;
    j["largestMultiKill"] = v.largestMultiKill;
    j["perk2Var2"] = v.perk2Var2;
    j["perk2Var3"] = v.perk2Var3;
    j["totalUnitsHealed"] = v.totalUnitsHealed;
    j["perk2Var1"] = v.perk2Var1;
    j["perk4Var1"] = v.perk4Var1;
    j["perk4Var2"] = v.perk4Var2;
    j["perk4Var3"] = v.perk4Var3;
    j["wardsKilled"] = v.wardsKilled;
    j["largestCriticalStrike"] = v.largestCriticalStrike;
    j["largestKillingSpree"] = v.largestKillingSpree;
    j["quadraKills"] = v.quadraKills;
    j["magicDamageDealt"] = v.magicDamageDealt;
    j["neutralMinionsKilledTeamJungle"] = v.neutralMinionsKilledTeamJungle;
    j["item2"] = v.item2;
    j["item3"] = v.item3;
    j["item0"] = v.item0;
    j["firstBloodAssist"] = v.firstBloodAssist;
    j["item6"] = v.item6;
    j["item4"] = v.item4;
    j["item5"] = v.item5;
    j["perk1"] = v.perk1;
    j["perk0"] = v.perk0;
    j["perk3"] = v.perk3;
    j["perk2"] = v.perk2;
    j["perk3Var3"] = v.perk3Var3;
    j["perk3Var2"] = v.perk3Var2;
    j["perk3Var1"] = v.perk3Var1;
    j["damageSelfMitigated"] = v.damageSelfMitigated;
    j["teamEarlySurrendered"] = v.teamEarlySurrendered;
    j["trueDamageTaken"] = v.trueDamageTaken;
    j["magicalDamageTaken"] = v.magicalDamageTaken;
    j["firstInhibitorKill"] = v.firstInhibitorKill;
    j["inhibitorKills"] = v.inhibitorKills;
    j["assists"] = v.assists;
    j["perkPrimaryStyle"] = v.perkPrimaryStyle;
    j["goldSpent"] = v.goldSpent;
    j["trueDamageDealt"] = v.trueDamageDealt;
    j["participantId"] = v.participantId;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["totalDamageTaken"] = v.totalDamageTaken;
    j["physicalDamageDealt"] = v.physicalDamageDealt;
    j["sightWardsBoughtInGame"] = v.sightWardsBoughtInGame;
    j["totalDamageDealtToChampions"] = v.totalDamageDealtToChampions;
    j["physicalDamageTaken"] = v.physicalDamageTaken;
    j["combatPlayerScore"] = v.combatPlayerScore;
    j["win"] = v.win;
    j["objectivePlayerScore"] = v.objectivePlayerScore;
    j["totalDamageDealt"] = v.totalDamageDealt;
    j["neutralMinionsKilledEnemyJungle"] = v.neutralMinionsKilledEnemyJungle;
    j["causedEarlySurrender"] = v.causedEarlySurrender;
    j["deaths"] = v.deaths;
    j["wardsPlaced"] = v.wardsPlaced;
    j["perkSubStyle"] = v.perkSubStyle;
    j["turretKills"] = v.turretKills;
    j["firstBloodKill"] = v.firstBloodKill;
    j["trueDamageDealtToChampions"] = v.trueDamageDealtToChampions;
    j["goldEarned"] = v.goldEarned;
    j["killingSprees"] = v.killingSprees;
    j["gameEndedInSurrender"] = v.gameEndedInSurrender;
    j["firstTowerAssist"] = v.firstTowerAssist;
    j["firstTowerKill"] = v.firstTowerKill;
    j["champLevel"] = v.champLevel;
    j["unrealKills"] = v.unrealKills;
    j["doubleKills"] = v.doubleKills;
    j["firstInhibitorAssist"] = v.firstInhibitorAssist;
    j["perk0Var1"] = v.perk0Var1;
    j["perk0Var2"] = v.perk0Var2;
    j["perk0Var3"] = v.perk0Var3;
    j["visionWardsBoughtInGame"] = v.visionWardsBoughtInGame;
    j["pentaKills"] = v.pentaKills;
    j["totalHeal"] = v.totalHeal;
    j["totalMinionsKilled"] = v.totalMinionsKilled;
    j["timeCCingOthers"] = v.timeCCingOthers;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipantStatistics_t& v) {
    v.item1 = j.at("item1").get<uint16_t>();
    v.visionScore = j.at("visionScore").get<int64_t>();
    v.magicDamageDealtToChampions = j.at("magicDamageDealtToChampions").get<int64_t>();
    v.damageDealtToObjectives = j.at("damageDealtToObjectives").get<int64_t>();
    v.totalTimeCrowdControlDealt = j.at("totalTimeCrowdControlDealt").get<int64_t>();
    v.longestTimeSpentLiving = j.at("longestTimeSpentLiving").get<int64_t>();
    v.totalPlayerScore = j.at("totalPlayerScore").get<int64_t>();
    v.earlySurrenderAccomplice = j.at("earlySurrenderAccomplice").get<bool>();
    v.perk1Var1 = j.at("perk1Var1").get<int64_t>();
    v.perk1Var3 = j.at("perk1Var3").get<int64_t>();
    v.perk1Var2 = j.at("perk1Var2").get<int64_t>();
    v.tripleKills = j.at("tripleKills").get<int64_t>();
    v.perk5 = j.at("perk5").get<int64_t>();
    v.perk4 = j.at("perk4").get<int64_t>();
    v.playerScore9 = j.at("playerScore9").get<int64_t>();
    v.playerScore8 = j.at("playerScore8").get<int64_t>();
    v.kills = j.at("kills").get<int64_t>();
    v.playerScore1 = j.at("playerScore1").get<int64_t>();
    v.playerScore0 = j.at("playerScore0").get<int64_t>();
    v.playerScore3 = j.at("playerScore3").get<int64_t>();
    v.playerScore2 = j.at("playerScore2").get<int64_t>();
    v.playerScore5 = j.at("playerScore5").get<int64_t>();
    v.playerScore4 = j.at("playerScore4").get<int64_t>();
    v.playerScore7 = j.at("playerScore7").get<int64_t>();
    v.playerScore6 = j.at("playerScore6").get<int64_t>();
    v.perk5Var1 = j.at("perk5Var1").get<int64_t>();
    v.perk5Var3 = j.at("perk5Var3").get<int64_t>();
    v.perk5Var2 = j.at("perk5Var2").get<int64_t>();
    v.totalScoreRank = j.at("totalScoreRank").get<int64_t>();
    v.neutralMinionsKilled = j.at("neutralMinionsKilled").get<int64_t>();
    v.damageDealtToTurrets = j.at("damageDealtToTurrets").get<int64_t>();
    v.physicalDamageDealtToChampions = j.at("physicalDamageDealtToChampions").get<int64_t>();
    v.largestMultiKill = j.at("largestMultiKill").get<int64_t>();
    v.perk2Var2 = j.at("perk2Var2").get<int64_t>();
    v.perk2Var3 = j.at("perk2Var3").get<int64_t>();
    v.totalUnitsHealed = j.at("totalUnitsHealed").get<int64_t>();
    v.perk2Var1 = j.at("perk2Var1").get<int64_t>();
    v.perk4Var1 = j.at("perk4Var1").get<int64_t>();
    v.perk4Var2 = j.at("perk4Var2").get<int64_t>();
    v.perk4Var3 = j.at("perk4Var3").get<int64_t>();
    v.wardsKilled = j.at("wardsKilled").get<int64_t>();
    v.largestCriticalStrike = j.at("largestCriticalStrike").get<int64_t>();
    v.largestKillingSpree = j.at("largestKillingSpree").get<int64_t>();
    v.quadraKills = j.at("quadraKills").get<int64_t>();
    v.magicDamageDealt = j.at("magicDamageDealt").get<int64_t>();
    v.neutralMinionsKilledTeamJungle = j.at("neutralMinionsKilledTeamJungle").get<int64_t>();
    v.item2 = j.at("item2").get<uint16_t>();
    v.item3 = j.at("item3").get<uint16_t>();
    v.item0 = j.at("item0").get<uint16_t>();
    v.firstBloodAssist = j.at("firstBloodAssist").get<bool>();
    v.item6 = j.at("item6").get<uint16_t>();
    v.item4 = j.at("item4").get<uint16_t>();
    v.item5 = j.at("item5").get<uint16_t>();
    v.perk1 = j.at("perk1").get<int64_t>();
    v.perk0 = j.at("perk0").get<int64_t>();
    v.perk3 = j.at("perk3").get<int64_t>();
    v.perk2 = j.at("perk2").get<int64_t>();
    v.perk3Var3 = j.at("perk3Var3").get<int64_t>();
    v.perk3Var2 = j.at("perk3Var2").get<int64_t>();
    v.perk3Var1 = j.at("perk3Var1").get<int64_t>();
    v.damageSelfMitigated = j.at("damageSelfMitigated").get<int64_t>();
    v.teamEarlySurrendered = j.at("teamEarlySurrendered").get<bool>();
    v.trueDamageTaken = j.at("trueDamageTaken").get<int64_t>();
    v.magicalDamageTaken = j.at("magicalDamageTaken").get<int64_t>();
    v.firstInhibitorKill = j.at("firstInhibitorKill").get<bool>();
    v.inhibitorKills = j.at("inhibitorKills").get<int64_t>();
    v.assists = j.at("assists").get<int64_t>();
    v.perkPrimaryStyle = j.at("perkPrimaryStyle").get<int64_t>();
    v.goldSpent = j.at("goldSpent").get<int64_t>();
    v.trueDamageDealt = j.at("trueDamageDealt").get<int64_t>();
    v.participantId = j.at("participantId").get<uint16_t>();
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>();
    v.totalDamageTaken = j.at("totalDamageTaken").get<int64_t>();
    v.physicalDamageDealt = j.at("physicalDamageDealt").get<int64_t>();
    v.sightWardsBoughtInGame = j.at("sightWardsBoughtInGame").get<int64_t>();
    v.totalDamageDealtToChampions = j.at("totalDamageDealtToChampions").get<int64_t>();
    v.physicalDamageTaken = j.at("physicalDamageTaken").get<int64_t>();
    v.combatPlayerScore = j.at("combatPlayerScore").get<int64_t>();
    v.win = j.at("win").get<bool>();
    v.objectivePlayerScore = j.at("objectivePlayerScore").get<int64_t>();
    v.totalDamageDealt = j.at("totalDamageDealt").get<int64_t>();
    v.neutralMinionsKilledEnemyJungle = j.at("neutralMinionsKilledEnemyJungle").get<int64_t>();
    v.causedEarlySurrender = j.at("causedEarlySurrender").get<bool>();
    v.deaths = j.at("deaths").get<int64_t>();
    v.wardsPlaced = j.at("wardsPlaced").get<int64_t>();
    v.perkSubStyle = j.at("perkSubStyle").get<int64_t>();
    v.turretKills = j.at("turretKills").get<int64_t>();
    v.firstBloodKill = j.at("firstBloodKill").get<bool>();
    v.trueDamageDealtToChampions = j.at("trueDamageDealtToChampions").get<int64_t>();
    v.goldEarned = j.at("goldEarned").get<int64_t>();
    v.killingSprees = j.at("killingSprees").get<int64_t>();
    v.gameEndedInSurrender = j.at("gameEndedInSurrender").get<bool>();
    v.firstTowerAssist = j.at("firstTowerAssist").get<bool>();
    v.firstTowerKill = j.at("firstTowerKill").get<bool>();
    v.champLevel = j.at("champLevel").get<int64_t>();
    v.unrealKills = j.at("unrealKills").get<int64_t>();
    v.doubleKills = j.at("doubleKills").get<int64_t>();
    v.firstInhibitorAssist = j.at("firstInhibitorAssist").get<bool>();
    v.perk0Var1 = j.at("perk0Var1").get<int64_t>();
    v.perk0Var2 = j.at("perk0Var2").get<int64_t>();
    v.perk0Var3 = j.at("perk0Var3").get<int64_t>();
    v.visionWardsBoughtInGame = j.at("visionWardsBoughtInGame").get<int64_t>();
    v.pentaKills = j.at("pentaKills").get<int64_t>();
    v.totalHeal = j.at("totalHeal").get<int64_t>();
    v.totalMinionsKilled = j.at("totalMinionsKilled").get<int64_t>();
    v.timeCCingOthers = j.at("timeCCingOthers").get<int64_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryParticipantStatistics_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
