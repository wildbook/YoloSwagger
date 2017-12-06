#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentState.hpp"
#include "PatcherComponentStateAction.hpp"
namespace leagueapi {
  struct PatcherProductState_t {
    PatcherComponentStateAction_t action;
    std::vector<PatcherComponentState_t> components;
    std::string id;
    bool isCorrupted;
    bool isStopped;
    bool isUpToDate;
    bool isUpdateAvailable;
    double percentPatched;
  };

  inline void to_json(nlohmann::json& j, const PatcherProductState_t& v) {
    j["action"] = v.action;
    j["components"] = v.components;
    j["id"] = v.id;
    j["isCorrupted"] = v.isCorrupted;
    j["isStopped"] = v.isStopped;
    j["isUpToDate"] = v.isUpToDate;
    j["isUpdateAvailable"] = v.isUpdateAvailable;
    j["percentPatched"] = v.percentPatched;
  }

  inline void from_json(const nlohmann::json& j, PatcherProductState_t& v) {
    v.action = j.at("action").get<PatcherComponentStateAction_t>();
    v.components = j.at("components").get<std::vector<PatcherComponentState_t>>();
    v.id = j.at("id").get<std::string>();
    v.isCorrupted = j.at("isCorrupted").get<bool>();
    v.isStopped = j.at("isStopped").get<bool>();
    v.isUpToDate = j.at("isUpToDate").get<bool>();
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>();
    v.percentPatched = j.at("percentPatched").get<double>();
  }
}
