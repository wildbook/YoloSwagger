#pragma once
#include <json.hpp>
#include <optional>
#include "MissionRewardMediaDTO.hpp"
namespace leagueapi {
  struct PlayerMissionRewardDTO_t {
    bool rewardFulfilled;
    MissionRewardMediaDTO_t media;
    std::string iconUrl;
    std::string description;
    std::string rewardType;
    std::string itemId;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionRewardDTO_t& v) {
    j["rewardFulfilled"] = v.rewardFulfilled;
    j["media"] = v.media;
    j["iconUrl"] = v.iconUrl;
    j["description"] = v.description;
    j["rewardType"] = v.rewardType;
    j["itemId"] = v.itemId;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionRewardDTO_t& v) {
    v.rewardFulfilled = j.at("rewardFulfilled").get<bool>();
    v.media = j.at("media").get<MissionRewardMediaDTO_t>();
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.rewardType = j.at("rewardType").get<std::string>();
    v.itemId = j.at("itemId").get<std::string>();
  }
  inline std::string to_string(const PlayerMissionRewardDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
