#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentStateAction.hpp"
#include "PatcherComponentState.hpp"
namespace leagueapi {
  struct PatcherProductState_t {
    double_t percentPatched;
    bool_t isUpdateAvailable;
    bool_t isStopped;
    std::vector<PatcherComponentState_t> components;
    PatcherComponentStateAction_t action;
    bool_t isUpToDate;
    std::string_t id;
    bool_t isCorrupted;
  };

  inline void to_json(nlohmann::json& j, const PatcherProductState_t& v) {
    j["percentPatched"] = v.percentPatched;
    j["isUpdateAvailable"] = v.isUpdateAvailable;
    j["isStopped"] = v.isStopped;
    j["components"] = v.components;
    j["action"] = v.action;
    j["isUpToDate"] = v.isUpToDate;
    j["id"] = v.id;
    j["isCorrupted"] = v.isCorrupted;
  }

  inline void from_json(const nlohmann::json& j, PatcherProductState_t& v) {
    v.percentPatched = j.at("percentPatched").get<double_t>();
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool_t>();
    v.isStopped = j.at("isStopped").get<bool_t>();
    v.components = j.at("components").get<std::vector<PatcherComponentState_t>>();
    v.action = j.at("action").get<PatcherComponentStateAction_t>();
    v.isUpToDate = j.at("isUpToDate").get<bool_t>();
    v.id = j.at("id").get<std::string_t>();
    v.isCorrupted = j.at("isCorrupted").get<bool_t>();
  }
  inline std::string to_string(const PatcherProductState_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
