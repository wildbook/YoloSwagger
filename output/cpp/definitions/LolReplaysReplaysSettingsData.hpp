#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysReplaysSettingsData_t {
    std::string highlights-folder-path;
    std::string replays-folder-path;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplaysSettingsData_t& v) {
    j["highlights-folder-path"] = v.highlights-folder-path;
    j["replays-folder-path"] = v.replays-folder-path;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplaysSettingsData_t& v) {
    v.highlights-folder-path = j.at("highlights-folder-path").get<std::string>();
    v.replays-folder-path = j.at("replays-folder-path").get<std::string>();
  }
}
