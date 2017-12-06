#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameQueuesQueueGameTypeConfig.hpp"
namespace leagueapi {
  struct LolGameQueuesLoginDataPacket_t {
    std::vector<LolGameQueuesQueueGameTypeConfig_t> gameTypeConfigs;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesLoginDataPacket_t& v) {
    j["gameTypeConfigs"] = v.gameTypeConfigs;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesLoginDataPacket_t& v) {
    v.gameTypeConfigs = j.at("gameTypeConfigs").get<std::vector<LolGameQueuesQueueGameTypeConfig_t>>();
  }
}
