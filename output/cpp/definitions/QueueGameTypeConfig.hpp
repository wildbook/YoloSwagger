#ifndef SWAGGER_TYPES_QueueGameTypeConfig_HPP
#define SWAGGER_TYPES_QueueGameTypeConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct QueueGameTypeConfig {
    // 
    bool battleBoost;
  };

  inline void to_json(nlohmann::json& j, const QueueGameTypeConfig& v) {
    j["battleBoost"] = v.battleBoost;
  }

  inline void from_json(const nlohmann::json& j, QueueGameTypeConfig& v) {
    v.battleBoost = j.at("battleBoost").get<bool>;
  }

}
#endif // SWAGGER_TYPES_QueueGameTypeConfig_HPP
