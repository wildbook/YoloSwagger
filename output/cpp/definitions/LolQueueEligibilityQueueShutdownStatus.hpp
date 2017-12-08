#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolQueueEligibilityQueueShutdownStatus_t {
    bool isDisabled;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityQueueShutdownStatus_t& v) {
    j["isDisabled"] = v.isDisabled;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityQueueShutdownStatus_t& v) {
    v.isDisabled = j.at("isDisabled").get<bool>();
  }
  inline std::string to_string(const LolQueueEligibilityQueueShutdownStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
