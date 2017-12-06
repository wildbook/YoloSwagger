#pragma once
#include <json.hpp>
#include <optional>
#include "MissionRewardMediaDTO.hpp"
namespace leagueapi {
  struct PlayerMissionRewardDTO_t {
    std::string description;
    std::string iconUrl;
    std::string itemId;
    MissionRewardMediaDTO_t media;
    bool rewardFulfilled;
    std::string rewardType;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionRewardDTO_t& v) {
    j["description"] = v.description;
    j["iconUrl"] = v.iconUrl;
    j["itemId"] = v.itemId;
    j["media"] = v.media;
    j["rewardFulfilled"] = v.rewardFulfilled;
    j["rewardType"] = v.rewardType;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionRewardDTO_t& v) {
    v.description = j.at("description").get<std::string>();
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.itemId = j.at("itemId").get<std::string>();
    v.media = j.at("media").get<MissionRewardMediaDTO_t>();
    v.rewardFulfilled = j.at("rewardFulfilled").get<bool>();
    v.rewardType = j.at("rewardType").get<std::string>();
  }
}
