#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryEvent.hpp"
#include "LolMatchHistoryMatchHistoryParticipantFrame.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryTimelineFrame_t {
    std::vector<LolMatchHistoryMatchHistoryEvent_t> events;
    std::map<std::string, LolMatchHistoryMatchHistoryParticipantFrame_t> participantFrames;
    uint64_t timestamp;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTimelineFrame_t& v) {
    j["events"] = v.events;
    j["participantFrames"] = v.participantFrames;
    j["timestamp"] = v.timestamp;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTimelineFrame_t& v) {
    v.events = j.at("events").get<std::vector<LolMatchHistoryMatchHistoryEvent_t>>();
    v.participantFrames = j.at("participantFrames").get<std::map<std::string, LolMatchHistoryMatchHistoryParticipantFrame_t>>();
    v.timestamp = j.at("timestamp").get<uint64_t>();
  }
}
