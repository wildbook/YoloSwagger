#ifndef SWAGGER_TYPES_LolHonorV2VendedHonorChange_HPP
#define SWAGGER_TYPES_LolHonorV2VendedHonorChange_HPP
#include <json.hpp>
#include "LolHonorV2Reward.hpp"
#include "LolHonorV2VendedHonorState.hpp"
namespace leagueapi {
  // 
  struct LolHonorV2VendedHonorChange {
    // 
    LolHonorV2Reward reward;
    // 
    std::string actionType;
    // 
    LolHonorV2VendedHonorState currentState;
    // 
    LolHonorV2VendedHonorState previousState;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2VendedHonorChange& v) {
    j["reward"] = v.reward;
    j["actionType"] = v.actionType;
    j["currentState"] = v.currentState;
    j["previousState"] = v.previousState;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2VendedHonorChange& v) {
    v.reward = j.at("reward").get<LolHonorV2Reward>;
    v.actionType = j.at("actionType").get<std::string>;
    v.currentState = j.at("currentState").get<LolHonorV2VendedHonorState>;
    v.previousState = j.at("previousState").get<LolHonorV2VendedHonorState>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2VendedHonorChange_HPP
