#ifndef SWAGGER_TYPES_MissionRewardMediaDTO_HPP
#define SWAGGER_TYPES_MissionRewardMediaDTO_HPP
#include <json.hpp>
#include "MissionRewardMediaItemDTO.hpp"
namespace leagueapi {
  // 
  struct MissionRewardMediaDTO {
    // 
    MissionRewardMediaItemDTO outro;
    // 
    MissionRewardMediaItemDTO intro;
    // 
    MissionRewardMediaItemDTO loop;
  };

  inline void to_json(nlohmann::json& j, const MissionRewardMediaDTO& v) {
    j["outro"] = v.outro;
    j["intro"] = v.intro;
    j["loop"] = v.loop;
  }

  inline void from_json(const nlohmann::json& j, MissionRewardMediaDTO& v) {
    v.outro = j.at("outro").get<MissionRewardMediaItemDTO>;
    v.intro = j.at("intro").get<MissionRewardMediaItemDTO>;
    v.loop = j.at("loop").get<MissionRewardMediaItemDTO>;
  }

}
#endif // SWAGGER_TYPES_MissionRewardMediaDTO_HPP
