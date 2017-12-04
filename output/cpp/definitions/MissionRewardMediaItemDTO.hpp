#ifndef SWAGGER_TYPES_MissionRewardMediaItemDTO_HPP
#define SWAGGER_TYPES_MissionRewardMediaItemDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct MissionRewardMediaItemDTO {
    // 
    std::string sound;
    // 
    std::string video;
  };

  inline void to_json(nlohmann::json& j, const MissionRewardMediaItemDTO& v) {
    j["sound"] = v.sound;
    j["video"] = v.video;
  }

  inline void from_json(const nlohmann::json& j, MissionRewardMediaItemDTO& v) {
    v.sound = j.at("sound").get<std::string>;
    v.video = j.at("video").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_MissionRewardMediaItemDTO_HPP
