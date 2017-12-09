#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryParticipantFrame.hpp"
#include "LolMatchHistoryMatchHistoryEvent.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryTimelineFrame_t {
    std::vector<LolMatchHistoryMatchHistoryEvent_t> events;
    uint64_t timestamp;
    std::map<std::string, LolMatchHistoryMatchHistoryParticipantFrame_t> participantFrames;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTimelineFrame_t& v) {
    j["events"] = v.events;
    j["timestamp"] = v.timestamp;
    j["participantFrames"] = v.participantFrames;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTimelineFrame_t& v) {
    v.events = j.at("events").get<std::vector<LolMatchHistoryMatchHistoryEvent_t>>();
    v.timestamp = j.at("timestamp").get<uint64_t>();
    v.participantFrames = j.at("participantFrames").get<std::map<std::string, LolMatchHistoryMatchHistoryParticipantFrame_t>>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryTimelineFrame_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
