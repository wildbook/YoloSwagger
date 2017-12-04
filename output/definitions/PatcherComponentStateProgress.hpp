#ifndef SWAGGER_TYPES_PatcherComponentStateProgress_HPP
#define SWAGGER_TYPES_PatcherComponentStateProgress_HPP
#include <json.hpp>
namespace test {
  // 
  struct PatcherComponentStateProgress {
'    // 
    uint64_t bytesComplete;
    // 
    double bytesPerSecond;
    // 
    uint64_t bytesRequired;
  };

  void to_json(nlohmann::json& j, const PatcherComponentStateProgress& v) {
    j["bytesComplete"] = v.bytesComplete;
    j["bytesPerSecond"] = v.bytesPerSecond;
    j["bytesRequired"] = v.bytesRequired;
  }

  void from_json(const nlohmann::json& j, PatcherComponentStateProgress& v) {
    v.bytesComplete = j.at("bytesComplete").get<uint64_t>;
    v.bytesPerSecond = j.at("bytesPerSecond").get<double>;
    v.bytesRequired = j.at("bytesRequired").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_PatcherComponentStateProgress_HPP
