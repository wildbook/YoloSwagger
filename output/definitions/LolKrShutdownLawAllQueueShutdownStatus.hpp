#ifndef SWAGGER_TYPES_LolKrShutdownLawAllQueueShutdownStatus_HPP
#define SWAGGER_TYPES_LolKrShutdownLawAllQueueShutdownStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolKrShutdownLawAllQueueShutdownStatus {
    // 
    bool isAllQueuesDisabled;
  };

  inline void to_json(nlohmann::json& j, const LolKrShutdownLawAllQueueShutdownStatus& v) {
    j["isAllQueuesDisabled"] = v.isAllQueuesDisabled;
  }

  inline void from_json(const nlohmann::json& j, LolKrShutdownLawAllQueueShutdownStatus& v) {
    v.isAllQueuesDisabled = j.at("isAllQueuesDisabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolKrShutdownLawAllQueueShutdownStatus_HPP
