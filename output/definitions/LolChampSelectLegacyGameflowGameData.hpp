#ifndef SWAGGER_TYPES_LolChampSelectLegacyGameflowGameData_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyGameflowGameData_HPP
#include <json.hpp>
#include "LolChampSelectLegacyQueue.hpp"
namespace leagueapi {
  // 
  struct LolChampSelectLegacyGameflowGameData {
    // 
    LolChampSelectLegacyQueue queue;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowGameData& v) {
    j["queue"] = v.queue;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowGameData& v) {
    v.queue = j.at("queue").get<LolChampSelectLegacyQueue>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyGameflowGameData_HPP
