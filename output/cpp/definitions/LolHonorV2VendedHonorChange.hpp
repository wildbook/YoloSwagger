#pragma once
#include <json.hpp>
#include <optional>
#include "LolHonorV2VendedHonorState.hpp"
#include "LolHonorV2Reward.hpp"
namespace leagueapi {
  struct LolHonorV2VendedHonorChange_t {
    std::string actionType;
    LolHonorV2VendedHonorState_t currentState;
    LolHonorV2Reward_t reward;
    LolHonorV2VendedHonorState_t previousState;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2VendedHonorChange_t& v) {
    j["actionType"] = v.actionType;
    j["currentState"] = v.currentState;
    j["reward"] = v.reward;
    j["previousState"] = v.previousState;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2VendedHonorChange_t& v) {
    v.actionType = j.at("actionType").get<std::string>();
    v.currentState = j.at("currentState").get<LolHonorV2VendedHonorState_t>();
    v.reward = j.at("reward").get<LolHonorV2Reward_t>();
    v.previousState = j.at("previousState").get<LolHonorV2VendedHonorState_t>();
  }
  inline std::string to_string(const LolHonorV2VendedHonorChange_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
