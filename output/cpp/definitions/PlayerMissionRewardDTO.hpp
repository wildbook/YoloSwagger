#pragma once
#include <json.hpp>
#include <optional>
#include "MissionRewardMediaDTO.hpp"
namespace leagueapi {
  struct PlayerMissionRewardDTO_t {
    std::string itemId;
    std::string description;
    MissionRewardMediaDTO_t media;
    std::string rewardType;
    std::string iconUrl;
    bool rewardFulfilled;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionRewardDTO_t& v) {
    j["itemId"] = v.itemId;
    j["description"] = v.description;
    j["media"] = v.media;
    j["rewardType"] = v.rewardType;
    j["iconUrl"] = v.iconUrl;
    j["rewardFulfilled"] = v.rewardFulfilled;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionRewardDTO_t& v) {
    v.itemId = j.at("itemId").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.media = j.at("media").get<MissionRewardMediaDTO_t>();
    v.rewardType = j.at("rewardType").get<std::string>();
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.rewardFulfilled = j.at("rewardFulfilled").get<bool>();
  }
  inline std::string to_string(const PlayerMissionRewardDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
