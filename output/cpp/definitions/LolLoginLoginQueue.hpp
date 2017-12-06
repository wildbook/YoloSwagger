#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginLoginQueue_t {
    std::optional<uint64_t> approximateWaitTimeSeconds;
    uint64_t estimatedPositionInQueue;
    bool isPositionCapped;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLoginQueue_t& v) {
    if(v.approximateWaitTimeSeconds)
      j["approximateWaitTimeSeconds"] = *v.approximateWaitTimeSeconds;
    j["estimatedPositionInQueue"] = v.estimatedPositionInQueue;
    j["isPositionCapped"] = v.isPositionCapped;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLoginQueue_t& v) {
    if(auto it = j.find("approximateWaitTimeSeconds"); it != j.end() !it->is_null())
      v.approximateWaitTimeSeconds = it->get<uint64_t>();
    v.estimatedPositionInQueue = j.at("estimatedPositionInQueue").get<uint64_t>();
    v.isPositionCapped = j.at("isPositionCapped").get<bool>();
  }
}
