#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryParticipantStatistics.hpp"
#include "LolMatchHistoryMatchHistoryTimeline.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryParticipant_t {
    uint16_t participantId;
    uint16_t teamId;
    std::string highestAchievedSeasonTier;
    uint16_t spell1Id;
    LolMatchHistoryMatchHistoryTimeline_t timeline;
    LolMatchHistoryMatchHistoryParticipantStatistics_t stats;
    uint16_t spell2Id;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipant_t& v) {
    j["participantId"] = v.participantId;
    j["teamId"] = v.teamId;
    j["highestAchievedSeasonTier"] = v.highestAchievedSeasonTier;
    j["spell1Id"] = v.spell1Id;
    j["timeline"] = v.timeline;
    j["stats"] = v.stats;
    j["spell2Id"] = v.spell2Id;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipant_t& v) {
    v.participantId = j.at("participantId").get<uint16_t>();
    v.teamId = j.at("teamId").get<uint16_t>();
    v.highestAchievedSeasonTier = j.at("highestAchievedSeasonTier").get<std::string>();
    v.spell1Id = j.at("spell1Id").get<uint16_t>();
    v.timeline = j.at("timeline").get<LolMatchHistoryMatchHistoryTimeline_t>();
    v.stats = j.at("stats").get<LolMatchHistoryMatchHistoryParticipantStatistics_t>();
    v.spell2Id = j.at("spell2Id").get<uint16_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryParticipant_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
