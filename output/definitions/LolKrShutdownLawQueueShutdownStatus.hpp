#ifndef SWAGGER_TYPES_LolKrShutdownLawQueueShutdownStatus_HPP
#define SWAGGER_TYPES_LolKrShutdownLawQueueShutdownStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolKrShutdownLawQueueShutdownStatus {
    // 
    bool isDisabled;
  };

  inline void to_json(nlohmann::json& j, const LolKrShutdownLawQueueShutdownStatus& v) {
    j["isDisabled"] = v.isDisabled;
  }

  inline void from_json(const nlohmann::json& j, LolKrShutdownLawQueueShutdownStatus& v) {
    v.isDisabled = j.at("isDisabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolKrShutdownLawQueueShutdownStatus_HPP
