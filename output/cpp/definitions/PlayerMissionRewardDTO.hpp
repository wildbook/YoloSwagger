#ifndef SWAGGER_TYPES_PlayerMissionRewardDTO_HPP
#define SWAGGER_TYPES_PlayerMissionRewardDTO_HPP
#include <json.hpp>
#include "MissionRewardMediaDTO.hpp"
namespace leagueapi {
  // 
  struct PlayerMissionRewardDTO {
    // 
    std::string itemId;
    // 
    std::string description;
    // 
    MissionRewardMediaDTO media;
    // 
    std::string rewardType;
    // 
    std::string iconUrl;
    // 
    bool rewardFulfilled;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionRewardDTO& v) {
    j["itemId"] = v.itemId;
    j["description"] = v.description;
    j["media"] = v.media;
    j["rewardType"] = v.rewardType;
    j["iconUrl"] = v.iconUrl;
    j["rewardFulfilled"] = v.rewardFulfilled;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionRewardDTO& v) {
    v.itemId = j.at("itemId").get<std::string>;
    v.description = j.at("description").get<std::string>;
    v.media = j.at("media").get<MissionRewardMediaDTO>;
    v.rewardType = j.at("rewardType").get<std::string>;
    v.iconUrl = j.at("iconUrl").get<std::string>;
    v.rewardFulfilled = j.at("rewardFulfilled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_PlayerMissionRewardDTO_HPP
