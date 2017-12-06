#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentState.hpp"
#include "PatcherComponentStateAction.hpp"
namespace leagueapi {
  struct PatcherProductState_t {
    std::string id;
    bool isUpdateAvailable;
    bool isUpToDate;
    double percentPatched;
    bool isStopped;
    bool isCorrupted;
    std::vector<PatcherComponentState_t> components;
    PatcherComponentStateAction_t action;
  };

  inline void to_json(nlohmann::json& j, const PatcherProductState_t& v) {
    j["id"] = v.id;
    j["isUpdateAvailable"] = v.isUpdateAvailable;
    j["isUpToDate"] = v.isUpToDate;
    j["percentPatched"] = v.percentPatched;
    j["isStopped"] = v.isStopped;
    j["isCorrupted"] = v.isCorrupted;
    j["components"] = v.components;
    j["action"] = v.action;
  }

  inline void from_json(const nlohmann::json& j, PatcherProductState_t& v) {
    v.id = j.at("id").get<std::string>();
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>();
    v.isUpToDate = j.at("isUpToDate").get<bool>();
    v.percentPatched = j.at("percentPatched").get<double>();
    v.isStopped = j.at("isStopped").get<bool>();
    v.isCorrupted = j.at("isCorrupted").get<bool>();
    v.components = j.at("components").get<std::vector<PatcherComponentState_t>>();
    v.action = j.at("action").get<PatcherComponentStateAction_t>();
  }
}
