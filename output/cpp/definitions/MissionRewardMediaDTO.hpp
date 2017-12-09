#pragma once
#include <json.hpp>
#include <optional>
#include "MissionRewardMediaItemDTO.hpp"
namespace leagueapi {
  struct MissionRewardMediaDTO_t {
    MissionRewardMediaItemDTO_t intro;
    MissionRewardMediaItemDTO_t loop;
    MissionRewardMediaItemDTO_t outro;
  };

  inline void to_json(nlohmann::json& j, const MissionRewardMediaDTO_t& v) {
    j["intro"] = v.intro;
    j["loop"] = v.loop;
    j["outro"] = v.outro;
  }

  inline void from_json(const nlohmann::json& j, MissionRewardMediaDTO_t& v) {
    v.intro = j.at("intro").get<MissionRewardMediaItemDTO_t>();
    v.loop = j.at("loop").get<MissionRewardMediaItemDTO_t>();
    v.outro = j.at("outro").get<MissionRewardMediaItemDTO_t>();
  }
  inline std::string to_string(const MissionRewardMediaDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
