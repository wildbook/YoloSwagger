#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PatcherComponentStateProgress_t {
    double_t bytesPerSecond;
    uint64_t_t bytesComplete;
    uint64_t_t bytesRequired;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentStateProgress_t& v) {
    j["bytesPerSecond"] = v.bytesPerSecond;
    j["bytesComplete"] = v.bytesComplete;
    j["bytesRequired"] = v.bytesRequired;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentStateProgress_t& v) {
    v.bytesPerSecond = j.at("bytesPerSecond").get<double_t>();
    v.bytesComplete = j.at("bytesComplete").get<uint64_t_t>();
    v.bytesRequired = j.at("bytesRequired").get<uint64_t_t>();
  }
  inline std::string to_string(const PatcherComponentStateProgress_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
