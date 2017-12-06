#pragma once
#include <json.hpp>
#include <optional>
#include "LolHonorV2VendedHonorState.hpp"
#include "LolHonorV2Reward.hpp"
namespace leagueapi {
  struct LolHonorV2VendedHonorChange_t {
    LolHonorV2VendedHonorState_t currentState;
    std::string actionType;
    LolHonorV2Reward_t reward;
    LolHonorV2VendedHonorState_t previousState;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2VendedHonorChange_t& v) {
    j["currentState"] = v.currentState;
    j["actionType"] = v.actionType;
    j["reward"] = v.reward;
    j["previousState"] = v.previousState;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2VendedHonorChange_t& v) {
    v.currentState = j.at("currentState").get<LolHonorV2VendedHonorState_t>();
    v.actionType = j.at("actionType").get<std::string>();
    v.reward = j.at("reward").get<LolHonorV2Reward_t>();
    v.previousState = j.at("previousState").get<LolHonorV2VendedHonorState_t>();
  }
}
