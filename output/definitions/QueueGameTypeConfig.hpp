#ifndef SWAGGER_TYPES_QueueGameTypeConfig_HPP
#define SWAGGER_TYPES_QueueGameTypeConfig_HPP
#include <json.hpp>
namespace test {
  // 
  struct QueueGameTypeConfig {
'    // 
    bool battleBoost;
  };

  void to_json(nlohmann::json& j, const QueueGameTypeConfig& v) {
    j["battleBoost"] = v.battleBoost;
  }

  void from_json(const nlohmann::json& j, QueueGameTypeConfig& v) {
    v.battleBoost = j.at("battleBoost").get<bool>;
  }

}
#endif // SWAGGER_TYPES_QueueGameTypeConfig_HPP
