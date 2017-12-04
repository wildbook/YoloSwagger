#ifndef SWAGGER_TYPES_MissionRewardMediaDTO_HPP
#define SWAGGER_TYPES_MissionRewardMediaDTO_HPP
#include <json.hpp>
#include "MissionRewardMediaItemDTO.hpp"
namespace leagueapi {
  // 
  struct MissionRewardMediaDTO {
    // 
    MissionRewardMediaItemDTO intro;
    // 
    MissionRewardMediaItemDTO loop;
    // 
    MissionRewardMediaItemDTO outro;
  };

  inline void to_json(nlohmann::json& j, const MissionRewardMediaDTO& v) {
    j["intro"] = v.intro;
    j["loop"] = v.loop;
    j["outro"] = v.outro;
  }

  inline void from_json(const nlohmann::json& j, MissionRewardMediaDTO& v) {
    v.intro = j.at("intro").get<MissionRewardMediaItemDTO>;
    v.loop = j.at("loop").get<MissionRewardMediaItemDTO>;
    v.outro = j.at("outro").get<MissionRewardMediaItemDTO>;
  }

}
#endif // SWAGGER_TYPES_MissionRewardMediaDTO_HPP
