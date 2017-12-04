#ifndef SWAGGER_TYPES_LolGameflowPatcherProductState_HPP
#define SWAGGER_TYPES_LolGameflowPatcherProductState_HPP
#include <json.hpp>
#include "LolGameflowPatcherProductStateAction.hpp"
namespace test {
  // 
  struct LolGameflowPatcherProductState {
'    // 
    LolGameflowPatcherProductStateAction action;
    // 
    bool isCorrupted;
    // 
    bool isStopped;
    // 
    bool isUpToDate;
    // 
    bool isUpdateAvailable;
  };

  void to_json(nlohmann::json& j, const LolGameflowPatcherProductState& v) {
    j["action"] = v.action;
    j["isCorrupted"] = v.isCorrupted;
    j["isStopped"] = v.isStopped;
    j["isUpToDate"] = v.isUpToDate;
    j["isUpdateAvailable"] = v.isUpdateAvailable;
  }

  void from_json(const nlohmann::json& j, LolGameflowPatcherProductState& v) {
    v.action = j.at("action").get<LolGameflowPatcherProductStateAction>;
    v.isCorrupted = j.at("isCorrupted").get<bool>;
    v.isStopped = j.at("isStopped").get<bool>;
    v.isUpToDate = j.at("isUpToDate").get<bool>;
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolGameflowPatcherProductState_HPP
