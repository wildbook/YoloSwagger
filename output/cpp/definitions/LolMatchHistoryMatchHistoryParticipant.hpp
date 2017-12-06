#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryParticipantStatistics.hpp"
#include "LolMatchHistoryMatchHistoryTimeline.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryParticipant_t {
    int32_t championId;
    uint16_t spell2Id;
    uint16_t participantId;
    LolMatchHistoryMatchHistoryTimeline_t timeline;
    std::string highestAchievedSeasonTier;
    LolMatchHistoryMatchHistoryParticipantStatistics_t stats;
    uint16_t teamId;
    uint16_t spell1Id;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipant_t& v) {
    j["championId"] = v.championId;
    j["spell2Id"] = v.spell2Id;
    j["participantId"] = v.participantId;
    j["timeline"] = v.timeline;
    j["highestAchievedSeasonTier"] = v.highestAchievedSeasonTier;
    j["stats"] = v.stats;
    j["teamId"] = v.teamId;
    j["spell1Id"] = v.spell1Id;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipant_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.spell2Id = j.at("spell2Id").get<uint16_t>();
    v.participantId = j.at("participantId").get<uint16_t>();
    v.timeline = j.at("timeline").get<LolMatchHistoryMatchHistoryTimeline_t>();
    v.highestAchievedSeasonTier = j.at("highestAchievedSeasonTier").get<std::string>();
    v.stats = j.at("stats").get<LolMatchHistoryMatchHistoryParticipantStatistics_t>();
    v.teamId = j.at("teamId").get<uint16_t>();
    v.spell1Id = j.at("spell1Id").get<uint16_t>();
  }
}
