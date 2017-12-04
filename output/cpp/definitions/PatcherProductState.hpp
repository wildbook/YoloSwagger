#ifndef SWAGGER_TYPES_PatcherProductState_HPP
#define SWAGGER_TYPES_PatcherProductState_HPP
#include <json.hpp>
#include "PatcherComponentStateAction.hpp"
#include "PatcherComponentState.hpp"
namespace leagueapi {
  // 
  struct PatcherProductState {
    // 
    double percentPatched;
    // 
    bool isUpdateAvailable;
    // 
    bool isStopped;
    // 
    std::vector<PatcherComponentState> components;
    // 
    PatcherComponentStateAction action;
    // 
    bool isUpToDate;
    // 
    std::string id;
    // 
    bool isCorrupted;
  };

  inline void to_json(nlohmann::json& j, const PatcherProductState& v) {
    j["percentPatched"] = v.percentPatched;
    j["isUpdateAvailable"] = v.isUpdateAvailable;
    j["isStopped"] = v.isStopped;
    j["components"] = v.components;
    j["action"] = v.action;
    j["isUpToDate"] = v.isUpToDate;
    j["id"] = v.id;
    j["isCorrupted"] = v.isCorrupted;
  }

  inline void from_json(const nlohmann::json& j, PatcherProductState& v) {
    v.percentPatched = j.at("percentPatched").get<double>;
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>;
    v.isStopped = j.at("isStopped").get<bool>;
    v.components = j.at("components").get<std::vector<PatcherComponentState>>;
    v.action = j.at("action").get<PatcherComponentStateAction>;
    v.isUpToDate = j.at("isUpToDate").get<bool>;
    v.id = j.at("id").get<std::string>;
    v.isCorrupted = j.at("isCorrupted").get<bool>;
  }

}
#endif // SWAGGER_TYPES_PatcherProductState_HPP
