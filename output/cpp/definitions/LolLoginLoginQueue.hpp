#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginLoginQueue_t {
    uint64_t estimatedPositionInQueue;
    std::optional<uint64_t> approximateWaitTimeSeconds;
    bool isPositionCapped;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLoginQueue_t& v) {
    j["estimatedPositionInQueue"] = v.estimatedPositionInQueue;
    if(v.approximateWaitTimeSeconds)
      j["approximateWaitTimeSeconds"] = *v.approximateWaitTimeSeconds;
    j["isPositionCapped"] = v.isPositionCapped;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLoginQueue_t& v) {
    v.estimatedPositionInQueue = j.at("estimatedPositionInQueue").get<uint64_t>();
    if(auto it = j.find("approximateWaitTimeSeconds"); it != j.end() && !it->is_null())
      v.approximateWaitTimeSeconds = it->get<uint64_t>();
    v.isPositionCapped = j.at("isPositionCapped").get<bool>();
  }
  inline std::string to_string(const LolLoginLoginQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
