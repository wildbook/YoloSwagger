#ifndef SWAGGER_TYPES_LolHonorV2VendedHonorState_HPP
#define SWAGGER_TYPES_LolHonorV2VendedHonorState_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolHonorV2VendedHonorState {
'    // 
    int32_t checkpoint;
    // 
    int32_t level;
    // 
    bool rewardsLocked;
  };

  void to_json(nlohmann::json& j, const LolHonorV2VendedHonorState& v) {
    j["checkpoint"] = v.checkpoint;
    j["level"] = v.level;
    j["rewardsLocked"] = v.rewardsLocked;
  }

  void from_json(const nlohmann::json& j, LolHonorV2VendedHonorState& v) {
    v.checkpoint = j.at("checkpoint").get<int32_t>;
    v.level = j.at("level").get<int32_t>;
    v.rewardsLocked = j.at("rewardsLocked").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2VendedHonorState_HPP
