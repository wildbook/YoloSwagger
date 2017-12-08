#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolKrShutdownLawAllQueueShutdownStatus_t {
    bool_t isAllQueuesDisabled;
  };

  inline void to_json(nlohmann::json& j, const LolKrShutdownLawAllQueueShutdownStatus_t& v) {
    j["isAllQueuesDisabled"] = v.isAllQueuesDisabled;
  }

  inline void from_json(const nlohmann::json& j, LolKrShutdownLawAllQueueShutdownStatus_t& v) {
    v.isAllQueuesDisabled = j.at("isAllQueuesDisabled").get<bool_t>();
  }
  inline std::string to_string(const LolKrShutdownLawAllQueueShutdownStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
