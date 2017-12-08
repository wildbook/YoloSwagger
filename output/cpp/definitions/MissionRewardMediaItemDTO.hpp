#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MissionRewardMediaItemDTO_t {
    std::string_t sound;
    std::string_t video;
  };

  inline void to_json(nlohmann::json& j, const MissionRewardMediaItemDTO_t& v) {
    j["sound"] = v.sound;
    j["video"] = v.video;
  }

  inline void from_json(const nlohmann::json& j, MissionRewardMediaItemDTO_t& v) {
    v.sound = j.at("sound").get<std::string_t>();
    v.video = j.at("video").get<std::string_t>();
  }
  inline std::string to_string(const MissionRewardMediaItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
