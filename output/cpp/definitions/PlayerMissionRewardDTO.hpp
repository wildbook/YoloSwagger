#pragma once
#include <json.hpp>
#include <optional>
#include "MissionRewardMediaDTO.hpp"
namespace leagueapi {
  struct PlayerMissionRewardDTO_t {
    std::string iconUrl;
    MissionRewardMediaDTO_t media;
    std::string description;
    std::string rewardType;
    std::string itemId;
    bool rewardFulfilled;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionRewardDTO_t& v) {
    j["iconUrl"] = v.iconUrl;
    j["media"] = v.media;
    j["description"] = v.description;
    j["rewardType"] = v.rewardType;
    j["itemId"] = v.itemId;
    j["rewardFulfilled"] = v.rewardFulfilled;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionRewardDTO_t& v) {
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.media = j.at("media").get<MissionRewardMediaDTO_t>();
    v.description = j.at("description").get<std::string>();
    v.rewardType = j.at("rewardType").get<std::string>();
    v.itemId = j.at("itemId").get<std::string>();
    v.rewardFulfilled = j.at("rewardFulfilled").get<bool>();
  }
}
