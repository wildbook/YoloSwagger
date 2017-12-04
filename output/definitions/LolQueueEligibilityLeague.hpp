#ifndef SWAGGER_TYPES_LolQueueEligibilityLeague_HPP
#define SWAGGER_TYPES_LolQueueEligibilityLeague_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolQueueEligibilityLeague {
'    // 
    std::string leagueTier;
    // 
    std::string queueType;
  };

  void to_json(nlohmann::json& j, const LolQueueEligibilityLeague& v) {
    j["leagueTier"] = v.leagueTier;
    j["queueType"] = v.queueType;
  }

  void from_json(const nlohmann::json& j, LolQueueEligibilityLeague& v) {
    v.leagueTier = j.at("leagueTier").get<std::string>;
    v.queueType = j.at("queueType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityLeague_HPP
