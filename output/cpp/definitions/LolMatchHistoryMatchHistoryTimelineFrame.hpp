#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryTimelineFrame_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryTimelineFrame_HPP
#include <json.hpp>
#include "LolMatchHistoryMatchHistoryEvent.hpp"
#include "LolMatchHistoryMatchHistoryParticipantFrame.hpp"
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryTimelineFrame {
    // 
    uint64_t timestamp;
    // 
    std::map<std::string, LolMatchHistoryMatchHistoryParticipantFrame> participantFrames;
    // 
    std::vector<LolMatchHistoryMatchHistoryEvent> events;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTimelineFrame& v) {
    j["timestamp"] = v.timestamp;
    j["participantFrames"] = v.participantFrames;
    j["events"] = v.events;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTimelineFrame& v) {
    v.timestamp = j.at("timestamp").get<uint64_t>;
    v.participantFrames = j.at("participantFrames").get<std::map<std::string, LolMatchHistoryMatchHistoryParticipantFrame>>;
    v.events = j.at("events").get<std::vector<LolMatchHistoryMatchHistoryEvent>>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryTimelineFrame_HPP
