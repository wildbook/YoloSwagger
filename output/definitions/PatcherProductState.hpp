#ifndef SWAGGER_TYPES_PatcherProductState_HPP
#define SWAGGER_TYPES_PatcherProductState_HPP
#include <json.hpp>
#include "PatcherComponentState.hpp"
#include "PatcherComponentStateAction.hpp"
namespace leagueapi {
  // 
  struct PatcherProductState {
    // 
    PatcherComponentStateAction action;
    // 
    std::vector<PatcherComponentState> components;
    // 
    std::string id;
    // 
    bool isCorrupted;
    // 
    bool isStopped;
    // 
    bool isUpToDate;
    // 
    bool isUpdateAvailable;
    // 
    double percentPatched;
  };

  inline void to_json(nlohmann::json& j, const PatcherProductState& v) {
    j["action"] = v.action;
    j["components"] = v.components;
    j["id"] = v.id;
    j["isCorrupted"] = v.isCorrupted;
    j["isStopped"] = v.isStopped;
    j["isUpToDate"] = v.isUpToDate;
    j["isUpdateAvailable"] = v.isUpdateAvailable;
    j["percentPatched"] = v.percentPatched;
  }

  inline void from_json(const nlohmann::json& j, PatcherProductState& v) {
    v.action = j.at("action").get<PatcherComponentStateAction>;
    v.components = j.at("components").get<std::vector<PatcherComponentState>>;
    v.id = j.at("id").get<std::string>;
    v.isCorrupted = j.at("isCorrupted").get<bool>;
    v.isStopped = j.at("isStopped").get<bool>;
    v.isUpToDate = j.at("isUpToDate").get<bool>;
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>;
    v.percentPatched = j.at("percentPatched").get<double>;
  }

}
#endif // SWAGGER_TYPES_PatcherProductState_HPP
