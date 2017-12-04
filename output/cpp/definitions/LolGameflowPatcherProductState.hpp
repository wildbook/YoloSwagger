#ifndef SWAGGER_TYPES_LolGameflowPatcherProductState_HPP
#define SWAGGER_TYPES_LolGameflowPatcherProductState_HPP
#include <json.hpp>
#include "LolGameflowPatcherProductStateAction.hpp"
namespace leagueapi {
  // 
  struct LolGameflowPatcherProductState {
    // 
    LolGameflowPatcherProductStateAction action;
    // 
    bool isStopped;
    // 
    bool isUpToDate;
    // 
    bool isUpdateAvailable;
    // 
    bool isCorrupted;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowPatcherProductState& v) {
    j["action"] = v.action;
    j["isStopped"] = v.isStopped;
    j["isUpToDate"] = v.isUpToDate;
    j["isUpdateAvailable"] = v.isUpdateAvailable;
    j["isCorrupted"] = v.isCorrupted;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowPatcherProductState& v) {
    v.action = j.at("action").get<LolGameflowPatcherProductStateAction>;
    v.isStopped = j.at("isStopped").get<bool>;
    v.isUpToDate = j.at("isUpToDate").get<bool>;
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>;
    v.isCorrupted = j.at("isCorrupted").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolGameflowPatcherProductState_HPP
