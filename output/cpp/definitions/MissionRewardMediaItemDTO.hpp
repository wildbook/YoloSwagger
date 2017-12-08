#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MissionRewardMediaItemDTO_t {
    std::string video;
    std::string sound;
  };

  inline void to_json(nlohmann::json& j, const MissionRewardMediaItemDTO_t& v) {
    j["video"] = v.video;
    j["sound"] = v.sound;
  }

  inline void from_json(const nlohmann::json& j, MissionRewardMediaItemDTO_t& v) {
    v.video = j.at("video").get<std::string>();
    v.sound = j.at("sound").get<std::string>();
  }
  inline std::string to_string(const MissionRewardMediaItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
