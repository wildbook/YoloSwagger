#ifndef SWAGGER_TYPES_PatcherComponentStateProgress_HPP
#define SWAGGER_TYPES_PatcherComponentStateProgress_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PatcherComponentStateProgress {
    // 
    double bytesPerSecond;
    // 
    uint64_t bytesComplete;
    // 
    uint64_t bytesRequired;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentStateProgress& v) {
    j["bytesPerSecond"] = v.bytesPerSecond;
    j["bytesComplete"] = v.bytesComplete;
    j["bytesRequired"] = v.bytesRequired;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentStateProgress& v) {
    v.bytesPerSecond = j.at("bytesPerSecond").get<double>;
    v.bytesComplete = j.at("bytesComplete").get<uint64_t>;
    v.bytesRequired = j.at("bytesRequired").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_PatcherComponentStateProgress_HPP
