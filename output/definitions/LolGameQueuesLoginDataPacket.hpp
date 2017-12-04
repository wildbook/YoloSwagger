#ifndef SWAGGER_TYPES_LolGameQueuesLoginDataPacket_HPP
#define SWAGGER_TYPES_LolGameQueuesLoginDataPacket_HPP
#include <json.hpp>
#include "LolGameQueuesQueueGameTypeConfig.hpp"
namespace leagueapi {
  // 
  struct LolGameQueuesLoginDataPacket {
    // 
    std::vector<LolGameQueuesQueueGameTypeConfig> gameTypeConfigs;
  };

  void to_json(nlohmann::json& j, const LolGameQueuesLoginDataPacket& v) {
    j["gameTypeConfigs"] = v.gameTypeConfigs;
  }

  void from_json(const nlohmann::json& j, LolGameQueuesLoginDataPacket& v) {
    v.gameTypeConfigs = j.at("gameTypeConfigs").get<std::vector<LolGameQueuesQueueGameTypeConfig>>;
  }

}
#endif // SWAGGER_TYPES_LolGameQueuesLoginDataPacket_HPP
