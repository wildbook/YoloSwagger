#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryParticipant_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryParticipant_HPP
#include <json.hpp>
#include "LolMatchHistoryMatchHistoryTimeline.hpp"
#include "LolMatchHistoryMatchHistoryParticipantStatistics.hpp"
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryParticipant {
    // 
    LolMatchHistoryMatchHistoryParticipantStatistics stats;
    // 
    uint16_t spell1Id;
    // 
    uint16_t participantId;
    // 
    std::string highestAchievedSeasonTier;
    // 
    uint16_t spell2Id;
    // 
    uint16_t teamId;
    // 
    LolMatchHistoryMatchHistoryTimeline timeline;
    // 
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipant& v) {
    j["stats"] = v.stats;
    j["spell1Id"] = v.spell1Id;
    j["participantId"] = v.participantId;
    j["highestAchievedSeasonTier"] = v.highestAchievedSeasonTier;
    j["spell2Id"] = v.spell2Id;
    j["teamId"] = v.teamId;
    j["timeline"] = v.timeline;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipant& v) {
    v.stats = j.at("stats").get<LolMatchHistoryMatchHistoryParticipantStatistics>;
    v.spell1Id = j.at("spell1Id").get<uint16_t>;
    v.participantId = j.at("participantId").get<uint16_t>;
    v.highestAchievedSeasonTier = j.at("highestAchievedSeasonTier").get<std::string>;
    v.spell2Id = j.at("spell2Id").get<uint16_t>;
    v.teamId = j.at("teamId").get<uint16_t>;
    v.timeline = j.at("timeline").get<LolMatchHistoryMatchHistoryTimeline>;
    v.championId = j.at("championId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryParticipant_HPP
