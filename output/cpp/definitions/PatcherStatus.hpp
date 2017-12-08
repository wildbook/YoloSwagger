#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PatcherStatus_t {
    bool_t willRestartOnSelfUpdate;
    bool_t hasUpdatesOnRestart;
    std::optional<uint32_t_t> successfullyInstalledVersion;
    bool_t connectedToPatchServer;
  };

  inline void to_json(nlohmann::json& j, const PatcherStatus_t& v) {
    j["willRestartOnSelfUpdate"] = v.willRestartOnSelfUpdate;
    j["hasUpdatesOnRestart"] = v.hasUpdatesOnRestart;
    if(v.successfullyInstalledVersion)
      j["successfullyInstalledVersion"] = *v.successfullyInstalledVersion;
    j["connectedToPatchServer"] = v.connectedToPatchServer;
  }

  inline void from_json(const nlohmann::json& j, PatcherStatus_t& v) {
    v.willRestartOnSelfUpdate = j.at("willRestartOnSelfUpdate").get<bool_t>();
    v.hasUpdatesOnRestart = j.at("hasUpdatesOnRestart").get<bool_t>();
    if(auto it = j.find("successfullyInstalledVersion"); it != j.end() && !it->is_null())
      v.successfullyInstalledVersion = it->get<uint32_t_t>();
    v.connectedToPatchServer = j.at("connectedToPatchServer").get<bool_t>();
  }
  inline std::string to_string(const PatcherStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
