#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PatcherStatus_t {
    bool connectedToPatchServer;
    bool hasUpdatesOnRestart;
    std::optional<uint32_t> successfullyInstalledVersion;
    bool willRestartOnSelfUpdate;
  };

  inline void to_json(nlohmann::json& j, const PatcherStatus_t& v) {
    j["connectedToPatchServer"] = v.connectedToPatchServer;
    j["hasUpdatesOnRestart"] = v.hasUpdatesOnRestart;
    if(v.successfullyInstalledVersion)
      j["successfullyInstalledVersion"] = *v.successfullyInstalledVersion;
    j["willRestartOnSelfUpdate"] = v.willRestartOnSelfUpdate;
  }

  inline void from_json(const nlohmann::json& j, PatcherStatus_t& v) {
    v.connectedToPatchServer = j.at("connectedToPatchServer").get<bool>();
    v.hasUpdatesOnRestart = j.at("hasUpdatesOnRestart").get<bool>();
    if(auto it = j.find("successfullyInstalledVersion"); it != j.end() !it->is_null())
      v.successfullyInstalledVersion = it->get<uint32_t>();
    v.willRestartOnSelfUpdate = j.at("willRestartOnSelfUpdate").get<bool>();
  }
}
