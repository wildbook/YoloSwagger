#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryTimelineFrame.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryTimelineFrames_t {
    std::vector<LolMatchHistoryMatchHistoryTimelineFrame_t> frames;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTimelineFrames_t& v) {
    j["frames"] = v.frames;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTimelineFrames_t& v) {
    v.frames = j.at("frames").get<std::vector<LolMatchHistoryMatchHistoryTimelineFrame_t>>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryTimelineFrames_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
