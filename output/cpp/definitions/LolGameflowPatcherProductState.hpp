#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowPatcherProductStateAction.hpp"
namespace leagueapi {
  struct LolGameflowPatcherProductState_t {
    LolGameflowPatcherProductStateAction_t action;
    bool_t isStopped;
    bool_t isUpToDate;
    bool_t isUpdateAvailable;
    bool_t isCorrupted;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowPatcherProductState_t& v) {
    j["action"] = v.action;
    j["isStopped"] = v.isStopped;
    j["isUpToDate"] = v.isUpToDate;
    j["isUpdateAvailable"] = v.isUpdateAvailable;
    j["isCorrupted"] = v.isCorrupted;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowPatcherProductState_t& v) {
    v.action = j.at("action").get<LolGameflowPatcherProductStateAction_t>();
    v.isStopped = j.at("isStopped").get<bool_t>();
    v.isUpToDate = j.at("isUpToDate").get<bool_t>();
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool_t>();
    v.isCorrupted = j.at("isCorrupted").get<bool_t>();
  }
  inline std::string to_string(const LolGameflowPatcherProductState_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
