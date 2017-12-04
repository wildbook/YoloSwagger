#ifndef SWAGGER_TYPES_LolKrShutdownLawQueueShutdownStatus_HPP
#define SWAGGER_TYPES_LolKrShutdownLawQueueShutdownStatus_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolKrShutdownLawQueueShutdownStatus {
'    // 
    bool isDisabled;
  };

  void to_json(nlohmann::json& j, const LolKrShutdownLawQueueShutdownStatus& v) {
    j["isDisabled"] = v.isDisabled;
  }

  void from_json(const nlohmann::json& j, LolKrShutdownLawQueueShutdownStatus& v) {
    v.isDisabled = j.at("isDisabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolKrShutdownLawQueueShutdownStatus_HPP
