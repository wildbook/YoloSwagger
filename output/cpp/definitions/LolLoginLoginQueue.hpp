#ifndef SWAGGER_TYPES_LolLoginLoginQueue_HPP
#define SWAGGER_TYPES_LolLoginLoginQueue_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLoginLoginQueue {
    // 
    uint64_t approximateWaitTimeSeconds;
    // 
    bool isPositionCapped;
    // 
    uint64_t estimatedPositionInQueue;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLoginQueue& v) {
    j["approximateWaitTimeSeconds"] = v.approximateWaitTimeSeconds;
    j["isPositionCapped"] = v.isPositionCapped;
    j["estimatedPositionInQueue"] = v.estimatedPositionInQueue;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLoginQueue& v) {
    v.approximateWaitTimeSeconds = j.at("approximateWaitTimeSeconds").get<uint64_t>;
    v.isPositionCapped = j.at("isPositionCapped").get<bool>;
    v.estimatedPositionInQueue = j.at("estimatedPositionInQueue").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLoginLoginQueue_HPP
