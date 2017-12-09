#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginLoginQueue_t {
    bool isPositionCapped;
    std::optional<uint64_t> approximateWaitTimeSeconds;
    uint64_t estimatedPositionInQueue;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLoginQueue_t& v) {
    j["isPositionCapped"] = v.isPositionCapped;
    if(v.approximateWaitTimeSeconds)
      j["approximateWaitTimeSeconds"] = *v.approximateWaitTimeSeconds;
    j["estimatedPositionInQueue"] = v.estimatedPositionInQueue;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLoginQueue_t& v) {
    v.isPositionCapped = j.at("isPositionCapped").get<bool>();
    if(auto it = j.find("approximateWaitTimeSeconds"); it != j.end() && !it->is_null())
      v.approximateWaitTimeSeconds = it->get<uint64_t>();
    v.estimatedPositionInQueue = j.at("estimatedPositionInQueue").get<uint64_t>();
  }
  inline std::string to_string(const LolLoginLoginQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
