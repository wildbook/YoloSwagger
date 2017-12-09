#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryParticipantStatistics.hpp"
#include "LolMatchHistoryMatchHistoryTimeline.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryParticipant_t {
    std::string highestAchievedSeasonTier;
    LolMatchHistoryMatchHistoryParticipantStatistics_t stats;
    uint16_t spell1Id;
    uint16_t spell2Id;
    LolMatchHistoryMatchHistoryTimeline_t timeline;
    uint16_t participantId;
    uint16_t teamId;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipant_t& v) {
    j["highestAchievedSeasonTier"] = v.highestAchievedSeasonTier;
    j["stats"] = v.stats;
    j["spell1Id"] = v.spell1Id;
    j["spell2Id"] = v.spell2Id;
    j["timeline"] = v.timeline;
    j["participantId"] = v.participantId;
    j["teamId"] = v.teamId;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipant_t& v) {
    v.highestAchievedSeasonTier = j.at("highestAchievedSeasonTier").get<std::string>();
    v.stats = j.at("stats").get<LolMatchHistoryMatchHistoryParticipantStatistics_t>();
    v.spell1Id = j.at("spell1Id").get<uint16_t>();
    v.spell2Id = j.at("spell2Id").get<uint16_t>();
    v.timeline = j.at("timeline").get<LolMatchHistoryMatchHistoryTimeline_t>();
    v.participantId = j.at("participantId").get<uint16_t>();
    v.teamId = j.at("teamId").get<uint16_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryParticipant_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
