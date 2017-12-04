#ifndef SWAGGER_TYPES_LolKrShutdownLawShutdownLawNotification_HPP
#define SWAGGER_TYPES_LolKrShutdownLawShutdownLawNotification_HPP
#include <json.hpp>
#include "LolKrShutdownLawShutdownLawStatus.hpp"
namespace test {
  // 
  struct LolKrShutdownLawShutdownLawNotification {
'    // 
    LolKrShutdownLawShutdownLawStatus type;
  };

  void to_json(nlohmann::json& j, const LolKrShutdownLawShutdownLawNotification& v) {
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, LolKrShutdownLawShutdownLawNotification& v) {
    v.type = j.at("type").get<LolKrShutdownLawShutdownLawStatus>;
  }

}
#endif // SWAGGER_TYPES_LolKrShutdownLawShutdownLawNotification_HPP
