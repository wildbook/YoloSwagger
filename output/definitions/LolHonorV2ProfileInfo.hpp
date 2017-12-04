#ifndef SWAGGER_TYPES_LolHonorV2ProfileInfo_HPP
#define SWAGGER_TYPES_LolHonorV2ProfileInfo_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolHonorV2ProfileInfo {
    // 
    int32_t checkpoint;
    // 
    int32_t honorLevel;
    // 
    bool rewardsLocked;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2ProfileInfo& v) {
    j["checkpoint"] = v.checkpoint;
    j["honorLevel"] = v.honorLevel;
    j["rewardsLocked"] = v.rewardsLocked;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2ProfileInfo& v) {
    v.checkpoint = j.at("checkpoint").get<int32_t>;
    v.honorLevel = j.at("honorLevel").get<int32_t>;
    v.rewardsLocked = j.at("rewardsLocked").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2ProfileInfo_HPP
