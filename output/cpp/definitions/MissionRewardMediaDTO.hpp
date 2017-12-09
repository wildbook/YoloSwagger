#pragma once
#include <json.hpp>
#include <optional>
#include "MissionRewardMediaItemDTO.hpp"
namespace leagueapi {
  struct MissionRewardMediaDTO_t {
    MissionRewardMediaItemDTO_t loop;
    MissionRewardMediaItemDTO_t outro;
    MissionRewardMediaItemDTO_t intro;
  };

  inline void to_json(nlohmann::json& j, const MissionRewardMediaDTO_t& v) {
    j["loop"] = v.loop;
    j["outro"] = v.outro;
    j["intro"] = v.intro;
  }

  inline void from_json(const nlohmann::json& j, MissionRewardMediaDTO_t& v) {
    v.loop = j.at("loop").get<MissionRewardMediaItemDTO_t>();
    v.outro = j.at("outro").get<MissionRewardMediaItemDTO_t>();
    v.intro = j.at("intro").get<MissionRewardMediaItemDTO_t>();
  }
  inline std::string to_string(const MissionRewardMediaDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
