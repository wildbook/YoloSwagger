#pragma once
#include <json.hpp>
#include <optional>
#include "MissionRewardMediaDTO.hpp"
namespace leagueapi {
  struct PlayerMissionRewardDTO_t {
    std::string rewardType;
    bool rewardFulfilled;
    std::string iconUrl;
    std::string description;
    std::string itemId;
    MissionRewardMediaDTO_t media;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionRewardDTO_t& v) {
    j["rewardType"] = v.rewardType;
    j["rewardFulfilled"] = v.rewardFulfilled;
    j["iconUrl"] = v.iconUrl;
    j["description"] = v.description;
    j["itemId"] = v.itemId;
    j["media"] = v.media;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionRewardDTO_t& v) {
    v.rewardType = j.at("rewardType").get<std::string>();
    v.rewardFulfilled = j.at("rewardFulfilled").get<bool>();
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.itemId = j.at("itemId").get<std::string>();
    v.media = j.at("media").get<MissionRewardMediaDTO_t>();
  }
  inline std::string to_string(const PlayerMissionRewardDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
