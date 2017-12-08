#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryTimeline.hpp"
#include "LolMatchHistoryMatchHistoryParticipantStatistics.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryParticipant_t {
    LolMatchHistoryMatchHistoryParticipantStatistics_t stats;
    uint16_t_t spell1Id;
    uint16_t_t participantId;
    std::string_t highestAchievedSeasonTier;
    uint16_t_t spell2Id;
    uint16_t_t teamId;
    LolMatchHistoryMatchHistoryTimeline_t timeline;
    int32_t_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipant_t& v) {
    j["stats"] = v.stats;
    j["spell1Id"] = v.spell1Id;
    j["participantId"] = v.participantId;
    j["highestAchievedSeasonTier"] = v.highestAchievedSeasonTier;
    j["spell2Id"] = v.spell2Id;
    j["teamId"] = v.teamId;
    j["timeline"] = v.timeline;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipant_t& v) {
    v.stats = j.at("stats").get<LolMatchHistoryMatchHistoryParticipantStatistics_t>();
    v.spell1Id = j.at("spell1Id").get<uint16_t_t>();
    v.participantId = j.at("participantId").get<uint16_t_t>();
    v.highestAchievedSeasonTier = j.at("highestAchievedSeasonTier").get<std::string_t>();
    v.spell2Id = j.at("spell2Id").get<uint16_t_t>();
    v.teamId = j.at("teamId").get<uint16_t_t>();
    v.timeline = j.at("timeline").get<LolMatchHistoryMatchHistoryTimeline_t>();
    v.championId = j.at("championId").get<int32_t_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryParticipant_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
