#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryTimelineFrame_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryTimelineFrame_HPP
#include <json.hpp>
#include "LolMatchHistoryMatchHistoryParticipantFrame.hpp"
#include "LolMatchHistoryMatchHistoryEvent.hpp"
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryTimelineFrame {
    // 
    std::vector<LolMatchHistoryMatchHistoryEvent> events;
    // 
    std::map<std::string, LolMatchHistoryMatchHistoryParticipantFrame> participantFrames;
    // 
    uint64_t timestamp;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTimelineFrame& v) {
    j["events"] = v.events;
    j["participantFrames"] = v.participantFrames;
    j["timestamp"] = v.timestamp;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTimelineFrame& v) {
    v.events = j.at("events").get<std::vector<LolMatchHistoryMatchHistoryEvent>>;
    v.participantFrames = j.at("participantFrames").get<std::map<std::string, LolMatchHistoryMatchHistoryParticipantFrame>>;
    v.timestamp = j.at("timestamp").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryTimelineFrame_HPP
