#ifndef SWAGGER_TYPES_Queue_HPP
#define SWAGGER_TYPES_Queue_HPP
#include <json.hpp>
#include "QueueGameTypeConfig.hpp"
namespace leagueapi {
  // 
  struct Queue {
    // 
    QueueGameTypeConfig gameTypeConfig;
  };

  inline void to_json(nlohmann::json& j, const Queue& v) {
    j["gameTypeConfig"] = v.gameTypeConfig;
  }

  inline void from_json(const nlohmann::json& j, Queue& v) {
    v.gameTypeConfig = j.at("gameTypeConfig").get<QueueGameTypeConfig>;
  }

}
#endif // SWAGGER_TYPES_Queue_HPP
