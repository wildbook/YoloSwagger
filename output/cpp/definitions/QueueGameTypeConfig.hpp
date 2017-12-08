#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct QueueGameTypeConfig_t {
    bool_t battleBoost;
  };

  inline void to_json(nlohmann::json& j, const QueueGameTypeConfig_t& v) {
    j["battleBoost"] = v.battleBoost;
  }

  inline void from_json(const nlohmann::json& j, QueueGameTypeConfig_t& v) {
    v.battleBoost = j.at("battleBoost").get<bool_t>();
  }
  inline std::string to_string(const QueueGameTypeConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
