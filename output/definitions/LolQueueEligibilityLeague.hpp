#ifndef SWAGGER_TYPES_LolQueueEligibilityLeague_HPP
#define SWAGGER_TYPES_LolQueueEligibilityLeague_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolQueueEligibilityLeague {
    // 
    std::string leagueTier;
    // 
    std::string queueType;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityLeague& v) {
    j["leagueTier"] = v.leagueTier;
    j["queueType"] = v.queueType;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityLeague& v) {
    v.leagueTier = j.at("leagueTier").get<std::string>;
    v.queueType = j.at("queueType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityLeague_HPP
