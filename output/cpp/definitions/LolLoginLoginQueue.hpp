#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginLoginQueue_t {
    std::optional<uint64_t_t> approximateWaitTimeSeconds;
    bool_t isPositionCapped;
    uint64_t_t estimatedPositionInQueue;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLoginQueue_t& v) {
    if(v.approximateWaitTimeSeconds)
      j["approximateWaitTimeSeconds"] = *v.approximateWaitTimeSeconds;
    j["isPositionCapped"] = v.isPositionCapped;
    j["estimatedPositionInQueue"] = v.estimatedPositionInQueue;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLoginQueue_t& v) {
    if(auto it = j.find("approximateWaitTimeSeconds"); it != j.end() && !it->is_null())
      v.approximateWaitTimeSeconds = it->get<uint64_t_t>();
    v.isPositionCapped = j.at("isPositionCapped").get<bool_t>();
    v.estimatedPositionInQueue = j.at("estimatedPositionInQueue").get<uint64_t_t>();
  }
  inline std::string to_string(const LolLoginLoginQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
