#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryParticipantFrame.hpp"
#include "LolMatchHistoryMatchHistoryEvent.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryTimelineFrame_t {
    std::map<std::string, LolMatchHistoryMatchHistoryParticipantFrame_t> participantFrames;
    std::vector<LolMatchHistoryMatchHistoryEvent_t> events;
    uint64_t timestamp;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTimelineFrame_t& v) {
    j["participantFrames"] = v.participantFrames;
    j["events"] = v.events;
    j["timestamp"] = v.timestamp;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTimelineFrame_t& v) {
    v.participantFrames = j.at("participantFrames").get<std::map<std::string, LolMatchHistoryMatchHistoryParticipantFrame_t>>();
    v.events = j.at("events").get<std::vector<LolMatchHistoryMatchHistoryEvent_t>>();
    v.timestamp = j.at("timestamp").get<uint64_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryTimelineFrame_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
