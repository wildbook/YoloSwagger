#ifndef SWAGGER_TYPES_PlayerMissionRewardDTO_HPP
#define SWAGGER_TYPES_PlayerMissionRewardDTO_HPP
#include <json.hpp>
#include "MissionRewardMediaDTO.hpp"
namespace leagueapi {
  // 
  struct PlayerMissionRewardDTO {
    // 
    std::string description;
    // 
    std::string iconUrl;
    // 
    std::string itemId;
    // 
    MissionRewardMediaDTO media;
    // 
    bool rewardFulfilled;
    // 
    std::string rewardType;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionRewardDTO& v) {
    j["description"] = v.description;
    j["iconUrl"] = v.iconUrl;
    j["itemId"] = v.itemId;
    j["media"] = v.media;
    j["rewardFulfilled"] = v.rewardFulfilled;
    j["rewardType"] = v.rewardType;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionRewardDTO& v) {
    v.description = j.at("description").get<std::string>;
    v.iconUrl = j.at("iconUrl").get<std::string>;
    v.itemId = j.at("itemId").get<std::string>;
    v.media = j.at("media").get<MissionRewardMediaDTO>;
    v.rewardFulfilled = j.at("rewardFulfilled").get<bool>;
    v.rewardType = j.at("rewardType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PlayerMissionRewardDTO_HPP
