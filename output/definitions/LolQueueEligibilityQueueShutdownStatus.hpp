#ifndef SWAGGER_TYPES_LolQueueEligibilityQueueShutdownStatus_HPP
#define SWAGGER_TYPES_LolQueueEligibilityQueueShutdownStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolQueueEligibilityQueueShutdownStatus {
    // 
    bool isDisabled;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityQueueShutdownStatus& v) {
    j["isDisabled"] = v.isDisabled;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityQueueShutdownStatus& v) {
    v.isDisabled = j.at("isDisabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityQueueShutdownStatus_HPP
