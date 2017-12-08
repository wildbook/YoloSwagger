#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryEvent.hpp"
#include "LolMatchHistoryMatchHistoryParticipantFrame.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryTimelineFrame_t {
    uint64_t timestamp;
    std::map<std::string, LolMatchHistoryMatchHistoryParticipantFrame_t> participantFrames;
    std::vector<LolMatchHistoryMatchHistoryEvent_t> events;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTimelineFrame_t& v) {
    j["timestamp"] = v.timestamp;
    j["participantFrames"] = v.participantFrames;
    j["events"] = v.events;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTimelineFrame_t& v) {
    v.timestamp = j.at("timestamp").get<uint64_t>();
    v.participantFrames = j.at("participantFrames").get<std::map<std::string, LolMatchHistoryMatchHistoryParticipantFrame_t>>();
    v.events = j.at("events").get<std::vector<LolMatchHistoryMatchHistoryEvent_t>>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryTimelineFrame_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
