#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowPatcherProductStateAction.hpp"
namespace leagueapi {
  struct LolGameflowPatcherProductState_t {
    bool isStopped;
    bool isCorrupted;
    bool isUpToDate;
    LolGameflowPatcherProductStateAction_t action;
    bool isUpdateAvailable;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowPatcherProductState_t& v) {
    j["isStopped"] = v.isStopped;
    j["isCorrupted"] = v.isCorrupted;
    j["isUpToDate"] = v.isUpToDate;
    j["action"] = v.action;
    j["isUpdateAvailable"] = v.isUpdateAvailable;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowPatcherProductState_t& v) {
    v.isStopped = j.at("isStopped").get<bool>();
    v.isCorrupted = j.at("isCorrupted").get<bool>();
    v.isUpToDate = j.at("isUpToDate").get<bool>();
    v.action = j.at("action").get<LolGameflowPatcherProductStateAction_t>();
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>();
  }
}
