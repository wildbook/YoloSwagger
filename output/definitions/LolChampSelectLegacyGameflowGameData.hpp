#ifndef SWAGGER_TYPES_LolChampSelectLegacyGameflowGameData_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyGameflowGameData_HPP
#include <json.hpp>
#include "LolChampSelectLegacyQueue.hpp"
namespace test {
  // 
  struct LolChampSelectLegacyGameflowGameData {
'    // 
    LolChampSelectLegacyQueue queue;
  };

  void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowGameData& v) {
    j["queue"] = v.queue;
  }

  void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowGameData& v) {
    v.queue = j.at("queue").get<LolChampSelectLegacyQueue>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyGameflowGameData_HPP
