#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryTimelineFrames_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryTimelineFrames_HPP
#include <json.hpp>
#include "LolMatchHistoryMatchHistoryTimelineFrame.hpp"
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryTimelineFrames {
    // 
    std::vector<LolMatchHistoryMatchHistoryTimelineFrame> frames;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTimelineFrames& v) {
    j["frames"] = v.frames;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTimelineFrames& v) {
    v.frames = j.at("frames").get<std::vector<LolMatchHistoryMatchHistoryTimelineFrame>>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryTimelineFrames_HPP
