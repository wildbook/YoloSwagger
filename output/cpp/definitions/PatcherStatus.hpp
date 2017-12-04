#ifndef SWAGGER_TYPES_PatcherStatus_HPP
#define SWAGGER_TYPES_PatcherStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PatcherStatus {
    // 
    bool willRestartOnSelfUpdate;
    // 
    bool hasUpdatesOnRestart;
    // 
    uint32_t successfullyInstalledVersion;
    // 
    bool connectedToPatchServer;
  };

  inline void to_json(nlohmann::json& j, const PatcherStatus& v) {
    j["willRestartOnSelfUpdate"] = v.willRestartOnSelfUpdate;
    j["hasUpdatesOnRestart"] = v.hasUpdatesOnRestart;
    j["successfullyInstalledVersion"] = v.successfullyInstalledVersion;
    j["connectedToPatchServer"] = v.connectedToPatchServer;
  }

  inline void from_json(const nlohmann::json& j, PatcherStatus& v) {
    v.willRestartOnSelfUpdate = j.at("willRestartOnSelfUpdate").get<bool>;
    v.hasUpdatesOnRestart = j.at("hasUpdatesOnRestart").get<bool>;
    v.successfullyInstalledVersion = j.at("successfullyInstalledVersion").get<uint32_t>;
    v.connectedToPatchServer = j.at("connectedToPatchServer").get<bool>;
  }

}
#endif // SWAGGER_TYPES_PatcherStatus_HPP
