#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentState.hpp"
#include "PatcherComponentStateAction.hpp"
namespace leagueapi {
  struct PatcherProductState_t {
    PatcherComponentStateAction_t action;
    std::vector<PatcherComponentState_t> components;
    bool isUpToDate;
    double percentPatched;
    std::string id;
    bool isUpdateAvailable;
    bool isCorrupted;
    bool isStopped;
  };

  inline void to_json(nlohmann::json& j, const PatcherProductState_t& v) {
    j["action"] = v.action;
    j["components"] = v.components;
    j["isUpToDate"] = v.isUpToDate;
    j["percentPatched"] = v.percentPatched;
    j["id"] = v.id;
    j["isUpdateAvailable"] = v.isUpdateAvailable;
    j["isCorrupted"] = v.isCorrupted;
    j["isStopped"] = v.isStopped;
  }

  inline void from_json(const nlohmann::json& j, PatcherProductState_t& v) {
    v.action = j.at("action").get<PatcherComponentStateAction_t>();
    v.components = j.at("components").get<std::vector<PatcherComponentState_t>>();
    v.isUpToDate = j.at("isUpToDate").get<bool>();
    v.percentPatched = j.at("percentPatched").get<double>();
    v.id = j.at("id").get<std::string>();
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>();
    v.isCorrupted = j.at("isCorrupted").get<bool>();
    v.isStopped = j.at("isStopped").get<bool>();
  }
  inline std::string to_string(const PatcherProductState_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
