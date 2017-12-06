#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowPatcherProductStateAction.hpp"
namespace leagueapi {
  struct LolGameflowPatcherProductState_t {
    LolGameflowPatcherProductStateAction_t action;
    bool isCorrupted;
    bool isStopped;
    bool isUpToDate;
    bool isUpdateAvailable;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowPatcherProductState_t& v) {
    j["action"] = v.action;
    j["isCorrupted"] = v.isCorrupted;
    j["isStopped"] = v.isStopped;
    j["isUpToDate"] = v.isUpToDate;
    j["isUpdateAvailable"] = v.isUpdateAvailable;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowPatcherProductState_t& v) {
    v.action = j.at("action").get<LolGameflowPatcherProductStateAction_t>();
    v.isCorrupted = j.at("isCorrupted").get<bool>();
    v.isStopped = j.at("isStopped").get<bool>();
    v.isUpToDate = j.at("isUpToDate").get<bool>();
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>();
  }
}
